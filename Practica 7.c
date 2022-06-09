  "@condensador/teclado" : " 1.2.1 " ,
    "@condensador/barra de estado" : " 1.0.7 " ,
    "@ionic/angular" : " ^6.0.0 " ,
    "fuego angular2" : " ^5.4.2 " ,
    "base de fuego" : " ^7.24.0 " ,
    "rxjs" : " ~6.6.0 " ,
    "tslib" : " ^2.2.0 " ,
    "zona.js" : " ~0.11.4 "
@@ -35,7 +37,7 @@
    "@angular-eslint/eslint-plugin" : " ~13.0.1 " ,
    "@angular-eslint/eslint-plugin-template" : " ~13.0.1 " ,
    "@angular-eslint/template-parser" : " ~13.0.1 " ,
    "@angular/cli " : " ~ 13.0.1 " ,
    "@angular/cli " : " 13.0.4 " ,
    "@angular/compilador" : " ~13.0.0 " ,
    "@angular/compiler-cli" : " ~13.0.0 " ,
    "@angular/servicio-de-idioma" : " ~13.0.0 " ,
    "@condensador/cli" : " 3.4.0 " ,
    "@ionic/kit de herramientas angulares" : " ^5.0.0 " ,
    "@tipos/jazmín" : " ~3.6.0 " ,
    "@types/jasminewd2" : " ~2.0.3 " ,
    "@tipos/nodo" : " ^12.11.1 " ,
    "@typescript-eslint/eslint-plugin" : " 5.3.0 " ,
    "@typescript-eslint/parser" : " 5.3.0 " ,
    "eslint" : " ^7.6.0 " ,
    "eslint-plugin-importación" : " 2.22.1 " ,
    "eslint-plugin-jsdoc" : " 30.7.6 " ,
    "eslint-plugin-preferir-flecha" : " 1.2.2 " ,
    "núcleo de jazmín" : " ~3.8.0 " ,
    "reportero de especificaciones de jazmín" : " ~5.0.0 " ,
    "karma" : " ~6.3.2 " ,
    "karma-chrome-launcher" : " ~3.1.0 " ,
    "cobertura de karma" : " ~2.0.3 " ,
    "karma-cobertura-estambul-reportero" : " ~3.0.2 " ,
    "karma-jazmín" : " ~4.0.0 " ,
    "karma-jazmín-html-reportero" : " ^1.5.0 " ,
    "transportador" : " ~7.0.0 " ,

    importar  {  NgModule  }  desde  '@angular/core' ;
import  {  Rutas ,  RouterModule  }  desde  '@angular/router' ;

importar  {  AdminPage  }  desde  './admin.page' ;

const  rutas : Rutas  =  [
  {
    camino : '' ,
    componente : página de administración
  }
] ;

@NgModule ( { _
  importaciones : [ RouterModule . forChild ( rutas ) ] ,
  exportaciones : [ RouterModule ] ,
} )
exportar  clase  AdminPageRoutingModule  { } 

importar  {  NgModule  }  desde  '@angular/core' ;
importar  {  CommonModule  }  desde  '@angular/common' ;
importar  {  FormsModule  }  desde  '@angular/forms' ;

importar  {  IonicModule  }  desde  '@ionic/angular' ;

importar  {  AdminPageRoutingModule  }  desde  './admin-routing.module' ;

importar  {  AdminPage  }  desde  './admin.page' ;

@NgModule ( { _
  importaciones : [
    módulo común ,
    Módulo de formularios ,
    módulo iónico ,
    AdminPageRoutingModuleAdminPageRoutingModule
  ] ,
  declaraciones : [ AdminPage ]
} )
exportar  clase  AdminPageModule  { }

< cabeza de iones >
  < barra de herramientas de iones >
      < ion-título > administrador </ ión-título >
  </ ion-barra de herramientas >
</ cabeza de iones >

< contenido de iones >
  < tamaño del botón de iones  =" grande " routerLink =" / " > INICIO </ botón de iones >
</ contenido de iones > 

importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;

@ componente ( {
  selector : 'aplicación-administrador' ,
  templateUrl : './admin.page.html' ,
  URL de estilo : [ './admin.page.scss' ] ,
} )
 clase de  exportación AdminPage  implementa  OnInit  {

  constructor ( )  {  }

  ngOnInit ( )  {
  }

} 

importar  {  NgModule  }  desde  '@angular/core' ;
import  {  PreloadAllModules ,  RouterModule ,  Routes  }  from  '@angular/router' ;
importar  {  AuthGuard  }  desde  './guards/auth.guard' ;

const  rutas : Rutas  =  [
  {
@@ -12,40 +13,44 @@ const rutas: Rutas = [
    pathMatch : 'completo'
  } ,
  {
    camino : 'presupuesto' ,
    ruta : 'presupuesto' , canActivate : [ AuthGuard ] , 
    loadChildren : ( )  =>  import ( './presupuesto/presupuesto.module' ) . luego (  m  =>  m . PresupuestoPáginaModule )
  } ,
  {
    ruta : 'alumnos' ,
    ruta : 'alumnos' , canActivate : [ AuthGuard ] , 
    loadChildren : ( )  =>  import ( './alumnos/alumnos.module' ) . luego (  m  =>  m . AlumnosPageModule )
  } ,
  {
    ruta : 'inicio' ,
    ruta : 'inicio' , canActivate : [ AuthGuard ] , 
    loadChildren : ( )  =>  importar ( './inicio/inicio.module' ) . luego (  m  =>  m . InicioPageModule )
  } ,
  {
    ruta : 'receptor' ,
    ruta : 'receptor' , canActivate : [ AuthGuard ] , 
    loadChildren : ( )  =>  import ( './receptor/receptor.módulo' ) . luego (  m  =>  m . ReceiverPageModule )
  } ,
  {
    ruta : 'receta' ,
    ruta : 'receta' , canActivate : [ AuthGuard ] , 
    loadChildren : ( )  =>  importar ( './receta/receta.module' ) . luego (  m  =>  m . RecetaPageModule )
  } ,
  {
    ruta : 'detalle-receta' ,
    ruta : 'detalle-receta' , canActivate : [ AuthGuard ] , 
    loadChildren : ( )  =>  import ( './detalle-receta/detalle-receta.module' ) . luego (  m  =>  m . DetalleRecetaPageModule )
  } ,
  {
    ruta : 'pestañas' ,
    ruta : 'pestañas' , canActivate : [ AuthGuard ] , 
    loadChildren : ( )  =>  importar ( './tabs/tabs.module' ) . entonces (  m  =>  m . TabsPageModule )
  } ,
  {
    ruta : ' menú flotante ' ,
    loadChildren : ( )  =>  import ( './ menú-flotante/menú-flotante .módulo' ) . entonces (  m  =>  m . FloatMenuPageModule )
    ruta : ' registrar ' ,
    loadChildren : ( )  =>  importar ( ' ./registrar/registrar .módulo ' ) . luego (  m  =>  m . RegisterPageModule )
  } ,
  {
    ruta : 'pestañas' ,
    loadChildren : ( )  =>  importar ( './tabs/tabs.module' ) . entonces (  m  =>  m . TabsPageModule )
    ruta : 'iniciar sesión' ,
    loadChildren : ( )  =>  import ( './login/login.module' ) . entonces (  m  =>  m . LoginPageModule )
  } ,
  {
    ruta : 'admin' ,  canActivate : [ AuthGuard ] ,
    loadChildren : ( )  =>  importar ( './admin/admin.module' ) . luego (  m  =>  m . AdminPageModule )
  }

] ;
@NgModule ( { _
    importaciones : [
      Módulo de enrutador . forRoot ( rutas ,  {  preloadingStrategy : PreloadAllModules  } )
    ] ,
    exportaciones : [ RouterModule ]
  } )
  exportar  clase  AppRoutingModule  {  }

  importar  {  ModuloNavegador  }  desde  '@angular/plataforma-navegador' ;
importar  {  RouteReuseStrategy  }  desde  '@angular/router' ;
importar  {  HttpClientModule  }  desde  '@angular/common/http' ;
importar  {  IonicModule ,  IonicRouteStrategy  }  desde  '@ionic/angular' ;
importar  {  IonicModule ,  IonicRouteStrategy , NavParams } desde '@ionic/angular' ;    

importar  {  AppComponent  }  desde  './app.component' ;
importar  {  AppRoutingModule  }  desde  './app-routing.module' ;
import  {  ComponentesModule  }  desde  './componentes/componentes.module' ;
importar  { AngularFireModule }  desde  'angularfire2' ;
importar  { AngularFireAuthModule }  desde  'angularfire2/auth' ;
import  {  entorno  }  desde  'src/environments/environment' ;

@NgModule ( { _
  declaraciones : [ AppComponent ] ,
  componentes de entrada : [ ] ,
  importaciones : [ ComponentModule ,  BrowserModule ,  IonicModule . forRoot ( ) ,  AppRoutingModule , HttpClientModule  ] ,
  proveedores : [ HttpClientModule , {  proporcionar : RouteReuseStrategy ,  useClass : IonicRouteStrategy  } ] ,
  importaciones : [ ComponentModule ,  BrowserModule ,  IonicModule . para Raíz ( ) ,  AppRoutingModule , HttpClientModule ,
    AngularFireModule . initializeApp ( entorno . firebaseConfig ) ,
    AngularFireAuthModule  ] ,
  proveedores : [ NavParams ,  HttpClientModule , {  proporcionar : RouteReuseStrategy ,  useClass : IonicRouteStrategy  } ] ,
  arranque : [ Componente de la aplicación ] ,
} )
 clase de  exportación AppModule  { } 

 < cabeza de iones >
  < barra de herramientas de iones >
      < ion-title > Errores </ ion-title >
  </ ion-barra de herramientas >
</ cabeza de iones >
< contenido de iones  [pantalla completa] =" verdadero " >
  < lista de iones >
      < elemento de iones >
          < etiqueta-ion > ERROR: </ etiqueta-ion > : {{error}}
      </ ion-elemento >
      < elemento de iones >
          < botón de iones  (clic) =" cerrar() " > Cerrar </ botón de iones >
      </ ion-elemento >
  </ lista de iones >
</ contenido de iones > 

importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;
importar  {  ModalController ,  NavParams  }  desde  '@ionic/angular' ;

@ componente ( {
  selector : 'aplicación-modal-error' ,
  templateUrl : './modal-error.component.html' ,
  styleUrls : [ './modal-error.component.scss' ] ,
} )
 clase de  exportación ModalErrorComponent  implementa  OnInit  {

  constructor ( navParams privados  : NavParams , modalCtrl privado : ModalController ) { }    

  ngOnInit ( )  { }

  cerrar ( ) {
    esto _ Control modal . descartar ( {
      'despedido' : cierto
    } ) ;
  }

} 

< cabeza de iones >
  < barra de herramientas de iones >
      < ranura de botones de iones  =" inicio " >
          < botón-menú- ion > </ botón -menú-ion >
      </ ion-botones >

      < ion-title > Menú principal </ ion-title >
  </ ion-barra de herramientas >
</ cabeza de iones >

< ion-menu  side =" inicio " content-id =" principal " >
  < id -contenido de iones  =" menuFloat " >
      < lista de iones >
          < ion-menu-toggle  *ngFor =" let c of datosMenu " >
              < ion-item  (click) =" navegar(c.enlace) " >
                  < ion-icono  nombre =' {{c.icono}} ' > </ ion-icono >
                  < etiqueta-ion > {{ c.nombre }} </ etiqueta-ion >
              </ ion-elemento >
          </ ion-menú-alternar >
      </ lista de iones >
  </ contenido de iones >
</ ion-menú >
    < barra de herramientas de iones >
        < ranura de botones de iones  =" inicio " >
            < botón-menú- ion > </ botón -menú-ion >
        </ ion-botones >
  
        < ion-título > {{titleMenu}} </ ión-título >
    </ ion-barra de herramientas >
  </ cabeza de iones >
  
  < ion-menu  side =" start " content-id =" main " (ionWillOpen) =" onMenuOpen() " >
    < id -contenido de iones  =" menuFloat " >
        < lista de iones >
            < ion-menu-toggle  *ngFor =" let c of datosMenu " >
                < ion-item  (click) =" navegar(c.enlace , c.nombre ) " >
                    < ion-icono  nombre =' {{c.icono}} ' > </ ion-icono >
                    < etiqueta-ion > {{ c.nombre }} </ etiqueta-ion >
                </ ion-elemento >
            </ ion-menú-alternar >
        </ lista de iones >
    </ contenido de iones >
  </ ion-menú > 

  importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;
importar  {  Router  }  desde  '@angular/router' ;
importar  {  AngularFireAuth  }  desde  'angularfire2/auth' ;
importar  {  AuthGuard  }  desde  'src/app/guards/auth.guard' ;
importar  {  MenuElement  }  desde  'src/app/models/menu.model' ;
importar  {  MenuServiceService  }  desde  'src/app/services/menu-service.service' ;

@ componente ( {
  selector : 'aplicación-menú-flotante' ,
@@ -9,10 +12,39 @@ import { MenuElement } from 'src/app/models/menu.model';
} )
 la clase de  exportación FloatMenuComponent  implementa  OnInit  {

  titleMenu : cadena = 'inicio' ;

  public  isLoged : any  =  false ;

  datosMenu : MenuElement [ ]  = [
    { nombre : 'casa' , enlace : '/casa' ,
    icono : 'home-outline' } ,
    { nombre : 'Alumnos' , enlace : '/alumnos' ,
    { nombre : 'iniciar sesión' , enlace : '/iniciar sesión' ,
    icono : 'log-in-outline' } ,
    { nombre : 'cerrar sesión' , enlace : '/inicio' ,
    icono : 'log-out-outline' }
  ] ;

  constructor ( enrutador privado  : Enrutador , authGuard privado : AuthGuard ,  
     menuService privado : MenuServiceService ,
     autenticación privada : AngularFireAuth ) { }  

  ngOnInit ( )  {
    esto _ afAuth . authState . suscribirse ( usuario  =>  esto . isLoged =  usuario ) ;

    esto _ menúServicio . $getTitleMenu . suscribirse ( datos => {
      consola _ registro ( datos ) ;
      esto _ títuloMenú  = datos ;
    } ) ;
  }

  navegar ( enlace : cadena ,  titleMenu : cadena ) {
    esto _ títuloMenú  = títuloMenú ;
    esto _ enrutador _ navegar ( [ enlace ] ) ;
  }

  onMenuOpen ( ) {
    si ( esto . está registrado ) {
      esto _ datosMenu  = [
        { nombre : 'Alumnos' , enlace : '/alumnos' ,
  icono : 'esquema-escolar' } ,
    { nombre : 'Recetas' , enlace : '/receta' ,
    icono : 'esquema-restaurante' } ,
@@ -21,14 +53,20 @@ la clase de exportación FloatMenuComponent implementa OnInit {
    { nombre : 'inicio' , enlace : '/inicio' ,
    icono : 'navegar-contorno' } ,
    { nombre : 'Tabs' , enlace : '/tabs' ,
    icono : 'carpeta-esquema' }
  ] ;

  constructor ( enrutador privado  : Enrutador ) { }  

  ngOnInit ( )  { }

  navegar ( enlace : cadena ) {
    esto _ enrutador _ navegar ( [ enlace ] ) ;
    icono : 'carpeta-esquema' } ,
    { nombre : 'iniciar sesión' , enlace : '/iniciar sesión' ,
    icono : 'log-in-outline' } ,
        { nombre : 'cerrar sesión' , enlace : '/inicio' ,
        icono : 'log-out-outline' }
      ] ;

    }  más {
      esto _ datosMenu  = [
        { nombre : 'iniciar sesión' , enlace : '/iniciar sesión' ,
        icono : 'log-in-outline' } ,
        { nombre : 'cerrar sesión' , enlace : '/inicio' ,
        icono : 'log-out-outline' }
      ] ;
    }
  }
} 

importar  {  Inyectable  }  desde  '@angular/core' ;
import  {  ActivatedRouteSnapshot ,  CanActivate ,  Router ,  RouterStateSnapshot ,  UrlTree  }  desde  '@angular/router' ;
importar  {  Observable  }  de  'rxjs' ;
importar  {  AuthserviceService  }  desde  '../services/authservice.service' ;

@ Inyectable ( {
  proporcionado en : 'raíz'
} )
 clase de  exportación AuthGuard  implementa  CanActivate  {

  constructor ( authSvc privado  : AuthserviceService , enrutador privado : enrutador ) {  

  }

  puedeActivar (
    ruta : ActivatedRouteSnapshot ,
    estado : RouterStateSnapshot ) : Observable < booleano  |  Árbol de direcciones URL >  |  Promesa < booleano  |  Árbol de direcciones URL >  |  booleano  |  Árbol de URL  {
      if ( este . authSvc . isLoged ) {
        devolver  verdadero ;
      }
      más {
        consola _ log ( "¡Acceso denegado!" ) ;
        esto _ enrutador _ navegar ( [ '/login' ] ) ;
        devolver  falso ;
      }
  }

} 

</ cabeza de iones >

< contenido de iones  [pantalla completa] =" verdadero " >
  < Colapso del encabezado de iones  =" condensar " >
    < barra de herramientas de iones >
      < ion-title  size =" large " > En blanco </ ion-title >
    </ ion-barra de herramientas >
  </ cabeza de iones >

  < div  id =" contenedor " >
    < fuerte > ¿Listo para crear una aplicación? </ fuerte >
    < p > Comience con Ionic < a  target =" _blank " rel =" noopener noreferrer " href =" https://ionicframework.com/docs/components " > Componentes de la interfaz de usuario </ a > </ p >
  </ div >
  < ion-button  size =" large " (clic) =" onLogout() " > Cerrar sesión </ ion-button >
  < ion-button  *ngIf =" isLoged " size =" large " routerLink =" /admin " > Admin </ ion-button >
</ contenido de iones > 

importar  {  Componente  }  desde  '@angular/core' ;
importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;
importar  {  Router  }  desde  '@angular/router' ;
importar  {  AngularFireAuth  }  desde  'angularfire2/auth' ;
importar  {  AuthserviceService  }  desde  '../services/authservice.service' ;

@ componente ( {
  selector : 'aplicación-inicio' ,
  templateUrl : 'home.page.html' ,
  URL de estilo : [ 'home.page.scss' ] ,
} )
 clase de  exportación Página de inicio  {
export  class  HomePage  implementa OnInit { 

  constructor ( ) { } 
  isLoged : any = false ;  

}
  constructor ( authSvc privado  : AuthserviceService ,
     enrutador privado : enrutador , 
     autenticación privada : AngularFireAuth ) { 

    }

  ngOnInit ( ) : vacío  {
    esto _ afAuth . authState . suscribirse ( respuesta => {
      esto _ isLoged  =  respuesta ;
    } )
  }

  al cerrar sesión ( ) {
    esto _ afAuth . autenticación _ cerrar sesión ( ) ;
    consola _ log ( "¡Cerrar sesión!" ) ;
    esto _ enrutador _ navegarPorUrl ( '/login' ) ;

  }
} 

importar  {  NgModule  }  desde  '@angular/core' ;
import  {  Rutas ,  RouterModule  }  desde  '@angular/router' ;

importar  { Página de inicio de sesión  } desde ' ./login.page  ' ;  

const  rutas : Rutas  =  [
  {
    camino : '' ,
    componente : página de inicio de sesión
  }
] ;

@NgModule ( { _
  importaciones : [ RouterModule . forChild ( rutas ) ] ,
  exportaciones : [ RouterModule ] ,
} )
exportar  clase  LoginPageRoutingModule  { } 
importar  {  NgModule  }  desde  '@angular/core' ;
importar  {  CommonModule  }  desde  '@angular/common' ;
importar  {  FormsModule  }  desde  '@angular/forms' ;

importar  {  IonicModule  }  desde  '@ionic/angular' ;

import  {  LoginPageRoutingModule  }  from  './login-routing.module' ;

importar  { Página de inicio de sesión  } desde ' ./login.page  ' ;  

@NgModule ( { _
  importaciones : [
    módulo común ,
    Módulo de formularios ,
    módulo iónico ,
    LoginPageRoutingModule
  ] ,
  declaraciones : [ Página de inicio de sesión ]
} )
exportar  clase  LoginPageModule  { } 

< cabeza de iones >
  < color de la barra de herramientas de iones  =" primario " >
      < ion-title > Iniciar sesión </ ion-title >
  </ ion-barra de herramientas >
</ cabeza de iones >

< relleno de contenido iónico  >
  < elemento de iones >
      < etiqueta de iones >
          Correo electrónico
      </ ion-etiqueta >
      < tipo de entrada de iones  =" texto " [(ngModel)] =" usuario.email " > </ entrada de iones >
  </ ion-elemento >
  < elemento de iones >
      < etiqueta de iones >
          Clave
      </ ion-etiqueta >
      < tipo de entrada de iones  =" contraseña " [(ngModel)] =" usuario.contraseña " > </ entrada de iones >
  </ ion-elemento >
  < ion-elemento-divisor >
      < ion-button  size =" más grande " (clic) =" onLogin() " > Iniciar sesión </ ion-button >
      < ion-button  size =" mayor " routerLink =" /registrar " > Nuevo </ ion-button >
  </ ion-elemento-divisor >
</ contenido de iones > 

importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;
importar  {  Router  }  desde  '@angular/router' ;
importar  {  ModalController  }  desde  '@ionic/angular' ;
import  {  ModalErrorComponent  }  desde  '../componentes/modal-error/modal-error.component' ;
importar  {  Usuario  }  desde  '../modelos/usuario.modelo' ;
importar  {  AuthserviceService  }  desde  '../services/authservice.service' ;

@ componente ( {
  selector : 'inicio de sesión en la aplicación' ,
  templateUrl : './login.page.html' ,
  URL de estilo : [ './login.page.scss' ] ,
} )
 clase de  exportación LoginPage  implementa  OnInit  {

  usuario : Usuario  =  nuevo  Usuario ( ) ;

  constructor ( enrutador privado  : Enrutador ,
    privado  modalCtrl : ModalController ,
     autSvc privado : AuthserviceService )  {

    }

  ngOnInit ( )  {
  }

  asíncrono  al iniciar sesión ( ) {
    const  usuario  =  esperar  esto . autSvc . onLogin ( este . usuario ) ;
    if ( usuario != nulo  &&  usuario . código  == indefinido ) {
      consola _ log ( 'Inicio de sesión exitoso!' ) ;
      esto _ enrutador _ navegar ( [ '/home' ] ) ;
    }
    más {
      if ( usuario . código ) {
        if ( usuario . código == 'autorización/contraseña incorrecta'  ||  usuario . código  == 'autenticación/correo electrónico no válido'  ||  usuario . código == 'autenticación/argumento-error' ) {
          esto _ openModal ( usuario ) ;
        }
      }
    }
  }

  async  openModal ( usuario : cualquiera ) {
    const  modal  =  esperar  esto . Control modal . crear ( {
      componente : ModalErrorComponent ,
      componenteProps : {
        error : 'Ingres contraseña y/o contraseña'
      }
    } ) ;
    retorno  espera  modal . presente ( ) ;
  }
} 

clase de  exportación Usuario  {
    correo electrónico : cadena ;
    contraseña : cadena ;
} 

importar  {  NgModule  }  desde  '@angular/core' ;
import  {  Rutas ,  RouterModule  }  desde  '@angular/router' ;

importar  { Pagina de  registro  }  desde  './register.page' ;

const  rutas : Rutas  =  [
  {
    camino : '' ,
    componente : página de registro
  }
] ;

@NgModule ( { _
  importaciones : [ RouterModule . forChild ( rutas ) ] ,
  exportaciones : [ RouterModule ] ,
} )
 clase de  exportación RegisterPageRoutingModule  { } 

 importar  {  NgModule  }  desde  '@angular/core' ;
importar  {  CommonModule  }  desde  '@angular/common' ;
importar  {  FormsModule  }  desde  '@angular/forms' ;

importar  {  IonicModule  }  desde  '@ionic/angular' ;

import  {  RegisterPageRoutingModule  }  from  './register-routing.module' ;

importar  { Pagina de  registro  }  desde  './register.page' ;

@NgModule ( { _
  importaciones : [
    módulo común ,
    Módulo de formularios ,
    módulo iónico ,
    RegisterPageRoutingModule
  ] ,
  declaraciones : [ PaginaRegistro ]
} )
 clase de  exportación RegisterPageModule  { } 

 < cabeza de iones >
  < color de la barra de herramientas de iones  =" primario " >
      < ion-título > registrar </ ión-título >
  </ ion-barra de herramientas >
</ cabeza de iones >

< relleno de contenido iónico  >
  < elemento de iones >
      < etiqueta de iones >
          Correo electrónico
      </ ion-etiqueta >
      < tipo de entrada de iones  =" texto " [(ngModel)] =" usuario.email " > </ entrada de iones >
  </ ion-elemento >
  < elemento de iones >
      < etiqueta de iones >
          Clave
      </ ion-etiqueta >
      < tipo de entrada de iones  =" contraseña " [(ngModel)] =" usuario.contraseña " > </ entrada de iones >
  </ ion-elemento >
  < ion-elemento-divisor >
      < ion-button  size =" mayor " (clic) =" onRegister() " > Registrador </ ion-button >
      < ion-button  size =" mayor " routerLink =" /login " > Iniciar sesión </ ion-button >
  </ ion-elemento-divisor >
</ contenido de iones > 

importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;
importar  {  Router  }  desde  '@angular/router' ;
importar  {  Usuario  }  desde  '../modelos/usuario.modelo'
importar  {  AuthserviceService  }  desde  '../services/authservice.service' ;

@ componente ( {
  selector : 'aplicación-registro' ,
  templateUrl : './register.page.html' ,
  URL de estilo : [ './register.page.scss' ] ,
} )
 clase de  exportación RegisterPage  implementa  OnInit  {

  usuario : Usuario  =  nuevo  Usuario ( ) ;

  constructor ( privado  autSvc : AuthserviceService ,  enrutador privado  : Enrutador ) {  

  }
  asíncrono  en Registro ( ) {
    const  usuario  =  esperar  esto . autSvc . onRegister ( este . usuario ) ;
    si ( usuario ) {
      consola _ log ( '¡Usuario creado con éxito!' ) ;
      esto _ enrutador _ navegar ( [ '/login' ] ) ;
    }
  } 

  ngOnInit ( )  {
  }

} 

importar  {  TestBed  }  desde  '@angular/core/testing' ;

importar  {  AuthserviceService  }  desde  './authservice.service' ;

describir ( 'AuthserviceService' ,  ( )  =>  {
  dejar  servicio : AuthserviceService ;

  antes de cada ( ( )  =>  {
    banco de pruebas configureTestingModule ( { } ) ;
    servicio  =  TestBed . inyectar ( AuthserviceService ) ;
  } ) ;

  it ( 'debe ser creado' ,  ( )  =>  {
    esperar ( servicio ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

importar  {  Inyectable  }  desde  '@angular/core' ;
importar  {  AngularFireAuth  }  desde  'angularfire2/auth' ;
importar  {  Usuario  }  desde  '../modelos/usuario.modelo' ;

@ Inyectable ( {
  proporcionado en : 'raíz'
} )
exportar  clase  AuthserviceService  {

  public  isLoged : any  =  false ;

  constructor ( afAuth privado  : AngularFireAuth ) {  
    afAuth . authState . suscribirse ( usuario  =>  esto . isLoged =  usuario ) ;
  }
  //acceso
  async  onLogin ( usuario : Usuario ) {
    prueba {
      volver  esperar  esto . afAuth . autenticación _ signInWithEmailAndPassword ( usuario.correo electrónico , usuario.contraseña ) ; _ _ _ 
    }
    atrapar ( error ) {
      consola _ log ( 'Error al iniciar sesión usuario' ,  error ) ;
       error de retorno ;
    }
  }

  //Registrarse
  async  onRegister ( usuario : Usuario ) {
    prueba {
      volver  esperar  esto . afAuth . autenticación _ createUserWithEmailAndPassword ( usuario.email , usuario.contraseña ) ; _ _ _ _ 
    }
    atrapar ( error ) {
      consola _ log ( 'Error al registrar usuario' ,  error ) ;

    }
  }
} 

importar  {  Inyectable  }  desde  '@angular/core' ;
importar  {  BehaviourSubject  }  de  'rxjs' ;

@ Inyectable ( {
  proporcionado en : 'raíz'
} )
exportar  clase  MenuServiceService  {

  private  objectSource  =  new  BehaviorSubject < cadena > ( "" ) ;
  $getTitleMenu  =  esto . fuente del objeto . comoObservable ( ) ;

  constructor ( )  {  }

  setTitle ( datos : cualquiera ) {
    esto _ fuente del objeto . siguiente ( datos ) ;
  }
} 

exportar  entorno const  = {  
    producción : falso
    producción : falso ,
    base de fuegoConfig : {
      apiKey : "AIzaSyA8hUNyD92APJhX2KEKb8Iy2D9bq_u6dxY" ,
      authDomain : "grupo-034-labapp.firebaseapp.com" ,
      ID del proyecto : "grupo-034-labapp" ,
      StorageBucket : "grupo-034-labapp.appspot.com" ,
      mensajeSenderId : "531748015651" ,
      ID de aplicación : "1: 531748015651: web: 689ee1423a45eed5c7eb96" ,
      ID de medición : "G-JQGLNGSZET"
    }
  } ;

  
