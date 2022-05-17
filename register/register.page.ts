import { Component, OnInit } from '@angular/core';
import { Router } from '@angular/router';
import { AuthserviceService } from '../authservice.service';
import { User } from '../home/models/user.model';

@Component({
  selector: 'app-register',
  templateUrl: './register.page.html',
  styleUrls: ['./register.page.scss'],
})
export class RegisterPage implements OnInit {

  user: User = new User();

  constructor(private autSvc: AuthserviceService, private router: Router) { }

  async onRegister(){
    const user = await this.autSvc.onRegister(this.user);
    if(user){
      console.log('Successfully created user!');
      this.router.navigate(['/login']);
    }
  } 

  ngOnInit() {
  }

}
