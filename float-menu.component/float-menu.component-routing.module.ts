import { NgModule } from '@angular/core';
import { Routes, RouterModule } from '@angular/router';

import { FloatMenu.ComponentPage } from './float-menu.component.page';

const routes: Routes = [
  {
    path: '',
    component: FloatMenu.ComponentPage
  }
];

@NgModule({
  imports: [RouterModule.forChild(routes)],
  exports: [RouterModule],
})
export class FloatMenu.ComponentPageRoutingModule {}
