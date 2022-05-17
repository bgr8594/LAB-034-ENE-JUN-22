import { NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';
import { FormsModule } from '@angular/forms';

import { IonicModule } from '@ionic/angular';

import { FloatMenu.ComponentPageRoutingModule } from './float-menu.component-routing.module';

import { FloatMenu.ComponentPage } from './float-menu.component.page';

@NgModule({
  imports: [
    CommonModule,
    FormsModule,
    IonicModule,
    FloatMenu.ComponentPageRoutingModule
  ],
  declarations: [FloatMenu.ComponentPage]
})
export class FloatMenu.ComponentPageModule {}
