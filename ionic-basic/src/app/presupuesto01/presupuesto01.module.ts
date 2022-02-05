import { NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';
import { FormsModule } from '@angular/forms';

import { IonicModule } from '@ionic/angular';

import { Presupuesto01PageRoutingModule } from './presupuesto01-routing.module';

import { Presupuesto01Page } from './presupuesto01.page';

@NgModule({
  imports: [
    CommonModule,
    FormsModule,
    IonicModule,
    Presupuesto01PageRoutingModule
  ],
  declarations: [Presupuesto01Page]
})
export class Presupuesto01PageModule {}
