import { NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';
import { FormsModule } from '@angular/forms';
import { FormsModule, ReactiveFormsModule } from '@angular/forms';

import { IonicModule } from '@ionic/angular';

@@ -13,7 +13,7 @@ import { LoginPage } from './login.page';
    CommonModule,
    FormsModule,
    IonicModule,
    LoginPageRoutingModule
    LoginPageRoutingModule,ReactiveFormsModule
  ],
  declarations: [LoginPage]
})
export class LoginPageModule {}