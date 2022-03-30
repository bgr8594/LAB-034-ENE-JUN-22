import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';
import { RouteReuseStrategy } from '@angular/router';

import { HttpClientModule } from '@angular/common/http';
import { IonicModule, IonicRouteStrategy, NavParams } from '@ionic/angular';

import { AppComponent } from './app.component';
import { AppRoutingModule } from './app-routing.module';
import { ComponentesModule } from './componentes/componentes.module';
import {AngularFireModule} from 'angularfire2';
import {AngularFireAuthModule} from 'angularfire2/auth';
import { environment } from 'src/environments/environment';

export const firebaseConfig = {
  apiKey: "AIzaSyBcsNGNxLwWnJd4up26JmXbRgZ0skC5bXc",
  authDomain: "practica7-4a3e3.firebaseapp.com",
  projectId: "practica7-4a3e3",
  storageBucket: "practica7-4a3e3.appspot.com",
  messagingSenderId: "541474999039",
  appId: "1:541474999039:web:8626e48901e582292d1aca",
  measurementId: "G-CSSPYG9X1E"
}

@NgModule({
  declarations: [AppComponent],
  entryComponents: [],
  imports: [ComponentesModule, BrowserModule, IonicModule.forRoot(), AppRoutingModule,HttpClientModule, AngularFireModule.initializeApp(firebaseConfig), AngularFireAuthModule],
  providers: [NavParams, HttpClientModule,{ provide: RouteReuseStrategy, useClass: IonicRouteStrategy }],
  bootstrap: [AppComponent],
})
export class AppModule {}
