import { NgModule } from '@angular/core';
import { Routes, RouterModule } from '@angular/router';

import { ServicesPage } from './services.page';

const routes: Routes = [
  {
    path: '',
    component: ServicesPage
  }
];

@NgModule({
  imports: [RouterModule.forChild(routes)],
  exports: [RouterModule],
})
export class ServicesPageRoutingModule {}
