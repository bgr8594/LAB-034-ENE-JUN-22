import { NgModule } from '@angular/core';
import { Routes, RouterModule } from '@angular/router';

import { Presupuesto01Page } from './presupuesto01.page';

const routes: Routes = [
  {
    path: '',
    component: Presupuesto01Page
  }
];

@NgModule({
  imports: [RouterModule.forChild(routes)],
  exports: [RouterModule],
})
export class Presupuesto01PageRoutingModule {}
