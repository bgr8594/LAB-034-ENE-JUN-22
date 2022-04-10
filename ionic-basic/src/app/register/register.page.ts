import { Component, OnInit } from '@angular/core';
import { User } from '../models/user.model'
import { AuthserviceService } from '../services/authservice.service';
import { Router } from '@angular/router';

@Component({
  selector: 'app-register',
  templateUrl: './register.page.html',
  styleUrls: ['./register.page.scss'],
})
export class RegisterPage implements OnInit {

  user: User = new User();

  
  constructor(private autSvc: AuthserviceService, private router: Router) { 

  }
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
