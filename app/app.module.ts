import { BrowserModule } from '@angular/platform-browser';
import { RouteReuseStrategy } from '@angular/router';
import { HttpClientModule } from '@angular/common/http';
import { IonicModule, IonicRouteStrategy, NavParams } from '@ionic/angular';

import { AppRoutingModule } from './app-routing.module';

import {AngularFireAuthModule} from 'angularfire2/auth';
import { environment } from 'src/environments/environment';
import { ComponentesModule } from '../componentes/componentes.module';
import { AppComponent } from '../app.component';

@NgModule({
  declarations: [AppComponent],
  entryComponents: [],
  imports: [ComponentesModule, BrowserModule, IonicModule.forRoot(), AppRoutingModule,HttpClientModule ],
  providers: [HttpClientModule,{ provide: RouteReuseStrategy, useClass: IonicRouteStrategy }],
  imports: [ComponentesModule, BrowserModule, IonicModule.forRoot(), AppRoutingModule,HttpClientModule,
    AngularFireModule.initializeApp(environment.firebaseConfig),
    AngularFireAuthModule ],
  providers: [NavParams, HttpClientModule,{ provide: RouteReuseStrategy, useClass: IonicRouteStrategy }],
  bootstrap: [AppComponent],
})
export class AppModule {}