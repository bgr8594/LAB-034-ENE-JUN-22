import { NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';
import { FormsModule } from '@angular/forms';

import { IonicModule } from '@ionic/angular';

import { RecieverPageRoutingModule } from './receiver-routing.module';

import { RecieverPage } from './receiver.page';

@NgModule({
  imports: [
    CommonModule,
    FormsModule,
    IonicModule,
    RecieverPageRoutingModule
  ],
  declarations: [RecieverPage]
})
export class RecieverPageModule {}