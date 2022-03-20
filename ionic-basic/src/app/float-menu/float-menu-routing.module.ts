import { NgModule } from '@angular/core';
import { Routes, RouterModule } from '@angular/router';

import { FloatMenuPage } from './float-menu.page';

const routes: Routes = [
  {
    path: '',
    component: FloatMenuPage
  }
];

@NgModule({
  imports: [RouterModule.forChild(routes)],
  exports: [RouterModule],
})
export class FloatMenuPageRoutingModule {}