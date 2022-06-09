 {
    ruta : 'alumnos' ,
    loadChildren : ( )  =>  import ( './alumnos/alumnos.module' ) . luego (  m  =>  m . AlumnosPageModule )
  } ,
  {
    ruta : 'inicio' ,
    loadChildren : ( )  =>  importar ( './inicio/inicio.module' ) . luego (  m  =>  m . InicioPageModule )
  } ,
  {
    ruta : 'receptor' ,
    loadChildren : ( )  =>  import ( './receptor/receptor.módulo' ) . luego (  m  =>  m . ReceiverPageModule )
  }

] ;

@NgModule ( { _

    importar  {  NgModule  }  desde  '@angular/core' ;
importar  {  ModuloNavegador  }  desde  '@angular/plataforma-navegador' ;
importar  {  RouteReuseStrategy  }  desde  '@angular/router' ;

importar { HttpClientModule } desde '@angular/common/http' ;     
importar  {  IonicModule ,  IonicRouteStrategy  }  desde  '@ionic/angular' ;

importar  {  AppComponent  }  desde  './app.component' ;
@@ -10,8 +10,8 @@ import { AppRoutingModule } from './app-routing.module';
@NgModule ( { _
  declaraciones : [ AppComponent ] ,
  componentes de entrada : [ ] ,
  importaciones : [ BrowserModule ,  IonicModule . para Raíz ( ) ,  Módulo de enrutamiento de aplicaciones ] ,
  proveedores : [ {  proporcionar : RouteReuseStrategy ,  useClass : IonicRouteStrategy  } ] ,
  importaciones : [ BrowserModule ,  IonicModule . forRoot ( ) ,  AppRoutingModule , HttpClientModule ] , 
  proveedores : [ HttpClientModule , {  proporcionar : RouteReuseStrategy ,  useClass : IonicRouteStrategy  } ] ,
  arranque : [ Componente de la aplicación ] ,
} )
 clase de  exportación AppModule  { }
 clase de  exportación AppModule  { } 

 importaciones : [ RouterModule . forChild ( rutas ) ] ,
 exportaciones : [ RouterModule ] ,
} )
exportar  clase  InicioPageRoutingModule  { }
exportar  clase  InicioPageRoutingModule  { }

@@ -17,4 +17,4 @@ import { InicioPage } from './inicio.page';
  ] ,
  declaraciones : [ InicioPage ]
} )
exportar  clase  InicioPageModule  { }
exportar  clase  InicioPageModule  { } 
</ cabeza de iones >

< contenido de iones >

</ contenido de iones >
  < lista de iones >
    < elemento de iones >
      < botón de iones  (clic) =" gotReceiver() " >
        soy un receptor
      </ botón de iones >
    </ ion-elemento >
  </ lista de iones >
</ contenido de iones > 

@@ -1,4 +1,6 @@
importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;
importar  {  Router  }  desde  '@angular/router' ;
import  {  ServicioCService  }  from  '../services/servicio-c.service' ;

@ componente ( {
  selector : 'app-inicio' ,
@@ -7,9 +9,26 @@ importar { Componente, OnInit } desde '@angular/core';
} )
export  class  InicioPage  implementa  OnInit  {

  constructor ( )  {  }
  usuario  =  { nombre : 'Pedro Perez' ,  uuid : "34523452345234523452345" ,  email : "correo@gmail.com" } ;

  lista : cualquier [ ] =
  [
    { nombre : 'Pedro Pérez' ,  uuid : "34523452345234523452345" ,  email : "correo@gmail.com" } ,
    { nombre : 'Pedro Pérez' ,  uuid : "34523452345234523452345" ,  email : "correo@gmail.com" } ,
    { nombre : 'Pedro Pérez' ,  uuid : "34523452345234523452345" ,  email : "correo@gmail.com" }
  ] ;

  constructor ( enrutador privado  : Enrutador ,
    privado  servicioCService : ServicioCService )  {  }

  ngOnInit ( )  {
  }

}
  recibióReceptor ( ) {
    esto _ servicioCServicio . sendObjectSource ( este . usuario ) ;
    esto _ servicioCServicio . sendListSource ( esta . lista ) ;

    esto _ enrutador _ navegar ( [ '/receptor' ] ) ;
  }

} 

interfaz de  exportación Personaje {
    año_nacimiento : cadena ;
    creado :   cadena ;
    editado :   cadena ;
    color_de_ojos :   cadena ;
    películas : cadena [ ] ;
    género :   cadena ;
    color_de_pelo :   cadena ;
    altura :   cadena ;
    mundo natal :   cadena ;
    masa :   cuerda ;
    nombre :   cadena ;
    color_de_piel :   cadena ;
    especie : cualquier [ ] ;
    naves estelares : cadena [ ] ;
    URL :   cadena ;
    vehículos : cadena [ ]
} 

@@ -14,4 +14,4 @@ const rutas: Rutas = [
    importaciones : [ RouterModule . forChild ( rutas ) ] ,
    exportaciones : [ RouterModule ] ,
  } )
   clase de  exportación ReceiverPageRoutingModule  { }
   clase de  exportación ReceiverPageRoutingModule  { }

   @@ -17,4 +17,4 @@ import { RecieverPage } from './reciever.page';
  ] ,
  declaraciones : [ RecieverPage ]
} )
 clase de  exportación ReceiverPageModule  { }
 clase de  exportación ReceiverPageModule  { }

 @@ -2,8 +2,14 @@
  < barra de herramientas de iones >
    < ion-title > receptor </ ion-title >
  </ ion-barra de herramientas >
  < ion-back-button  defaultHref =" inicio " > </ ion-back-button >
</ cabeza de iones >

< contenido de iones >
  < pag >
    {{usuario | json}}
  </ p >

</ contenido de iones >
  < p > {{personajes | json}} </ p >

</ contenido de iones > 

@@ -1,15 +1,32 @@
importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;
importar  {  Personaje  }  desde  '../models/personaje.model' ;
import  {  ServicioCService  }  from  '../services/servicio-c.service' ;

@ componente ( {
  selector : 'aplicación-receptor' ,
  templateUrl : './receptor.page.html' ,
  URL de estilo : [ './receptor.página.scss' ] ,
} )
 clase de  exportación ReceiverPage implementa OnInit  {  

  constructor ( )  {  }
  usuario : cualquiera ;
  lista : cualquier [ ] ;
  personajes : Personaje [ ] ;

  constructor ( servicioCService privado  : ServicioCService ) { }  

  ngOnInit ( )  {
    esto _ servicioCService . $getObjectSource . suscribirse ( datos => {
      consola _ registro ( datos ) ;
      esto _ usuario  =  datos ;
    } ) . darse de baja ( ) ;
    esto _ servicioCService . $getListSource . suscribirse ( datos => {
      consola _ registro ( datos ) ;
      esto _ lista  =  datos ;
    } ) . darse de baja ( ) ;

    esto _ servicioCService . getPersonajes ( ) . suscribirse ( ( respuesta : cualquiera ) => {
      esto _ personajes  =  respuesta . resultados ;
    } ) ;
  }

}
} 

importar  {  Inyectable  }  desde  '@angular/core' ;
importar  {  BehaviourSubject ,  Observable  }  de  'rxjs' ;
importar  {  HttpClient  }  desde  '@angular/common/http' ;

@ Inyectable ( {
  proporcionado en : 'raíz'
} )
exportar  clase  ServicioCService  {

  constructor ( )  {  }
}
   fuente del objeto  privada =  new  BehaviorSubject < { } > ( { } ) ;
  private  listSource  =  new  BehaviorSubject < any [ ] > ( [ ] ) ;

  $getObjectSource  =  esto . fuente del objeto . comoObservable ( ) ;
  $getListSource  =  esto . listaFuente . comoObservable ( ) ;

  constructor ( http privado  : HttpClient ) { }  

  sendObjectSource ( datos : cualquiera ) {
    esto _ fuente del objeto . siguiente ( datos ) ;
  }

  sendListSource ( datos : cualquier [ ] ) {
    esto _ listaFuente . siguiente ( datos ) ;
  }

  getPersonajes ( ) : Observable < cualquiera > {
    devolver  esto . http _ obtener < cualquiera > ( `http://swapi.dev/api/people/` , { } ) ;
  }

  getPersonaje ( idPersonaje : string ) : Observable < cualquiera > {
    devolver  esto . http _ get < any > ( `http://swapi.dev/api/people/ ${ idPersonaje } ` , { } ) ;
  }

} 


