import { Component, OnInit } from '@angular/core';
import { Router } from '@angular/router';
import { ModalController } from '@ionic/angular';
import { ModalErrorComponent } from '../componentes/modal-error/modal-error.component';
import { User } from '../models/user.model';
import { AuthserviceService } from '../services/authservice.service';
import {FormGroup, FormBuilder, Validators, FormControl, AbstractControl} from '@angular/forms';

@Component({
  selector: 'app-login',
@@ -13,14 +14,16 @@ import { AuthserviceService } from '../services/authservice.service';
export class LoginPage implements OnInit {

  user: User = new User();
  ionicForm: FormGroup;

  constructor(private router: Router,
    private modalCtrl: ModalController,
    private autSvc: AuthserviceService) {
    private autSvc: AuthserviceService, private formBuilder: FormBuilder) {

    }

  ngOnInit() {
    this.buildForm();
  }

  async onLogin(){
@@ -47,4 +50,32 @@ export class LoginPage implements OnInit {
    });
    return await modal.present();
  }

  buildForm(){
    this.ionicForm = this.formBuilder.group({
      email: new FormControl('',{validators: [Validators.email,Validators.required]}),
      password: new FormControl('', {validators: [Validators.required, Validators.minLength(6), Validators.maxLength(6)]})
    });
  }
  hasError: any = (controlName: string, errorName: string) => {
		return !this.ionicForm.controls[controlName].valid &&
			this.ionicForm.controls[controlName].hasError(errorName) &&
			this.ionicForm.controls[controlName].touched;
	}


	notZero(control: AbstractControl) {
		if (control.value && control.value.monto <= 0) {
			return { 'notZero': true };
		}
		return null;
	} 

  submitForm(){
    if(this.ionicForm.valid){
      this.user.email = this.ionicForm.get('email').value;
      this.user.password = this.ionicForm.get('password').value;
      this.onLogin();
    }
  }
}