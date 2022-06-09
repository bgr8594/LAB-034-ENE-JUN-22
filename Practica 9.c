{
    ruta : 'admin' ,  canActivate : [ AuthGuard ] ,
    loadChildren : ( )  =>  importar ( './admin/admin.module' ) . luego (  m  =>  m . AdminPageModule )
  } ,
  {
    ruta : 'destinos' ,  canActivate : [ AuthGuard ] ,
    loadChildren : ( )  =>  importar ( './destinos/destinos.module' ) . luego (  m  =>  m . DestinosPageModule )
  } ,
  {
    ruta : 'destinos' ,
    loadChildren : ( )  =>  importar ( './destinos/destinos.module' ) . luego (  m  =>  m . DestinosPageModule )
  }

] ;
@NgModule ( { _
  importaciones : [
    Módulo de enrutador . forRoot ( rutas ,  {  preloadingStrategy : PreloadAllModules  } )
  ] ,
  exportaciones : [ RouterModule ]
} )
exportar  clase  AppRoutingModule  {  }

importar  { AngularFireModule }  desde  'angularfire2' ;
importar  { AngularFireAuthModule }  desde  'angularfire2/auth' ;
import  {  entorno  }  desde  'src/environments/environment' ;
importar  {  AngularFirestoreModule  }  desde  'angularfire2/firestore' ;

@NgModule ( { _
  declaraciones : [ AppComponent ] ,
  componentes de entrada : [ ] ,
  importaciones : [ ComponentModule ,  BrowserModule ,  IonicModule . para Raíz ( ) ,  AppRoutingModule , HttpClientModule ,
    AngularFireModule . initializeApp ( entorno . firebaseConfig ) ,
    AngularFireAuthModule  ] ,
    AngularFireAuthModule , AngularFirestoreModule ] ,  
  proveedores : [ NavParams ,  HttpClientModule , {  proporcionar : RouteReuseStrategy ,  useClass : IonicRouteStrategy  } ] ,
  arranque : [ Componente de la aplicación ] ,
} )


importar  {  NgModule  }  desde  '@angular/core' ;
import  {  Rutas ,  RouterModule  }  desde  '@angular/router' ;

import  {  DestinosPage  }  from  './destinos.page' ;

const  rutas : Rutas  =  [
  {
    camino : '' ,
    componente : DestinosPage
  }
] ;

@NgModule ( { _
  importaciones : [ RouterModule . forChild ( rutas ) ] ,
  exportaciones : [ RouterModule ] ,
} )
exportar  clase  DestinosPageRoutingModule  { }

importar  {  NgModule  }  desde  '@angular/core' ;
importar  {  CommonModule  }  desde  '@angular/common' ;
importar  {  FormsModule ,  ReactiveFormsModule  }  desde  '@angular/forms' ;

importar  {  IonicModule  }  desde  '@ionic/angular' ;

import  {  DestinosPageRoutingModule  }  from  './destinos-routing.module' ;

import  {  DestinosPage  }  from  './destinos.page' ;

@NgModule ( { _
  importaciones : [
    módulo común ,
    Módulo de formularios ,
    módulo iónico ,
    DestinosPageRoutingModule ,
    ReactiveFormsModuleReactiveFormsModule
  ] ,
  declaraciones : [ DestinosPage ]
} )
exportar  clase  DestinosPageModule  { }

< cabeza de iones >
  < color de la barra de herramientas de iones  =" primario " >
      < ion-title > Destinos </ ion-title >
  </ ion-barra de herramientas >
</ cabeza de iones >

< relleno de contenido iónico  >
  < formulario  [formGroup] =" ionicForm " (ngSubmit) =" enviarForm() " novalidar >
      < elemento de iones >
          < etiqueta de iones >
              Destino
          </ ion-etiqueta >
          < tipo de entrada de iones  =" texto " formControlName =" nombre " > </ entrada de iones >
          < ion-text  color =" peligro " *ngIf =" hasError('nombre','required') " >
              < h5 > Campo requerido </ h5 >
          </ ion-texto >
      </ ion-elemento >
      < ion-elemento-divisor >
          < ion-button  type =" enviar " type =" enviar " [deshabilitado] =" !(ionicForm.valid) " color =" primario " tamaño =" más grande " > Alta destino </ ion-button >
      </ ion-elemento-divisor >
  </ formulario >

  < divisor-elemento- ion > </ divisor -elemento-ion >
  < rejilla de iones >
      < fila de iones >
          < ion-col >
              < ion-texto >
                  Destino
              </ ion-texto >
          </ ion-col >
          < ion-col >
              < ion-texto >
                  Ubicación
              </ ion-texto >
          </ ion-col >
      </ fila de iones >
      < ion-row  *ngFor =" let lugar de destinos " >
          < ion-col >
              < ion-texto >
                  {{lugar.nombre}}
              </ ion-texto >
          </ ion-col >
          < ion-col >
              < ion-texto >
                  En construccion <!--{{lugar.ubicacion}}-->
              </ ion-texto >
          </ ion-col >
      </ fila de iones >
  </ rejilla de iones >
</ contenido de iones > 

texto de iones {
    h5 {
        tamaño de fuente : 9 px ;
    }
}

importar  {  ComponentFixture ,  TestBed ,  waitForAsync  }  desde  '@angular/core/testing' ;
importar  {  IonicModule  }  desde  '@ionic/angular' ;

import  {  DestinosPage  }  from  './destinos.page' ;

describir ( 'PáginaDestinos' ,  ( )  =>  {
  let  componente : DestinosPage ;
  let  fixture : ComponentFixture < DestinosPage > ;

  antes de Cada ( esperarAsync ( ( ) => {  
    banco de pruebas configureTestingModule ( {
      declaraciones : [  DestinosPage  ] ,
      importaciones : [ IonicModule . para Raíz ( ) ]
    } ) . compilarComponentes ( ) ;

    accesorio  =  TestBed . createComponent ( PáginaDestinos ) ;
    componente  =  accesorio . componenteInstancia ;
    accesorio _ detectar cambios ( ) ;
  } ) ) ;

  it ( 'debería crear' ,  ( )  =>  {
    esperar ( componente ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;
importar  {  Lugar  }  desde  '../models/lugar.model' ;
import  {  LugarService  }  from  '../services/lugar.service' ;
importar  { FormGroup ,  FormBuilder ,  Validators ,  FormControl }  desde  '@angular/forms' ;

@ componente ( {
  selector : 'app-destinos' ,
  templateUrl : './destinos.page.html' ,
  styleUrls : [ './destinos.page.scss' ] ,
} )
export  class  DestinosPage  implementa  OnInit  {

  lugar : Lugar  =  nuevo  Lugar ( ) ;
  destinos : cualquier [ ]  =  [ ] ;
  forma iónica : grupo de formas ;

  constructor ( private  lugarService : LugarService ,
    privado  formBuilder : FormBuilder )  {  }

  ngOnInit ( )  {
      esto _ construirForm ( ) ;
      esto _ lugarServicio . getLugares ( this . destinos ) ;
  }

  altaLugar ( ) {
    esto _ lugarServicio . altaLugar ( este . lugar ) ;
    esto _ lugarServicio . getLugares ( this . destinos ) ;
    esto _ Forma iónica . restablecer ( ) ;
  }

  enviarFormulario ( ) {
    if ( este . ionicForm . válido ) {
      esto _ lugar _ nombre  =  esto . Forma iónica . obtener ( 'nombre' ) . valor ;
      esto _ altaLugar ( ) ;
    }
  }

  construirForm ( ) {
    esto _ forma iónica  =  esto . constructor de formularios . grupo ( {
      nombre : new  FormControl ( '' , { validadores : [ Validadores . requerido ] } )
    } ) ;
  }

  hasError : any  =  ( controlName : string ,  errorName : string )  =>  {
    volver  ! esto _ Forma iónica . controla [ nombre del control ] . válido  &&
      esto _ Forma iónica . controla [ nombre del control ] . tieneError ( nombre de error )  &&
      esto _ Forma iónica . controla [ nombre del control ] . tocado ;
  }

} 

icono : 'cash-outline' } ,
    { nombre : 'inicio' , enlace : '/inicio' ,
    icono : 'navegar-contorno' } ,
    { nombre : 'Turismo' , enlace : '/destinos' ,
    icono : 'avion' } ,
    { nombre : 'Tabs' , enlace : '/tabs' ,
    icono : 'carpeta-esquema' } ,
    { nombre : 'iniciar sesión' , enlace : '/iniciar sesión' ,

    const  usuario  =  esperar  esto . autSvc . onLogin ( este . usuario ) ;
    if ( usuario != nulo  &&  usuario . código  == indefinido ) {
      consola _ log ( 'Inicio de sesión exitoso!' ) ;
      esto _ enrutador _ navegar ( [ '/home' ] ) ;
      establecerTiempo de espera ( ( )  =>  {
        esto _ enrutador _ navegar ( [ '/home' ] ) ;
      } ,  650 ) ;
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
    construirForm ( ) {
      esto _ forma iónica  =  esto . constructor de formularios . grupo ( {
        email : new  FormControl ( '' , { validadores : [ Validadores . email , Validadores . requerido ] } ) ,

        exportar  clase  Lugar  {
            nombre : cadena ;
        
            ubicacion ?: { latitud : cadena ,  longitud : cadena }
        
        
        
                constructor ( ) {
        
                    esto _ nombre = ''
        
                }
        
                public  setUbicacion ( latitud : string ,  Longiutd : string ) {
        
                    esto _ ubicación . latitud =  latitud ;
        
                    esto _ ubicación . longitud  =  Longiutd ;
        
                }
        
        } 

        importar  {  TestBed  }  desde  '@angular/core/testing' ;

importar  {  LugarService  }  desde  './lugar.service' ;

describir ( 'LugarService' ,  ( )  =>  {
  dejar  servicio : LugarService ;

  antes de cada ( ( )  =>  {
    banco de pruebas configureTestingModule ( { } ) ;
    servicio  =  TestBed . inyectar ( LugarService ) ;
  } ) ;

  it ( 'debe ser creado' ,  ( )  =>  {
    esperar ( servicio ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

importar  {  Inyectable  }  desde  '@angular/core' ;
importar  {  AngularFirestore  }  desde  'angularfire2/firestore' ;
importar  {  Lugar  }  desde  '../models/lugar.model' ;

@ Inyectable ( {
  proporcionado en : 'raíz'
} )
exportar  clase  LugarService  {

  constructor ( dbFirestore privado  : AngularFirestore ) { }  

  altaLugar ( lugar : Lugar ) {
    const  lugarTemp : cualquiera  = {
      nombre : lugar . nombre ,
      ubicacion : { longitud : '' ,  latitud : '' }
    } ;
    esto _ dbFirestore . colección ( 'lugar' ) . add ( lugarTemp ) ;
  }

  async  getLugares ( destinos : Lugar [ ] ) {
    const  lugares  =  esto . dbFirestore . colección ( 'lugar' ) ;
    const  instantánea  =  esperar  lugares . obtener ( ) . prometer ( ) .
    entonces ( instantánea => {
      destinos _ empalme ( 0 ,  destinos . longitud ) ;
      instantánea _ paraCada ( doc => {
        let  datos : cualquiera  =  doc . datos ( ) ;
        let  lugar : Lugar  =  new  Lugar ( ) ;
        lugar _ nombre  =  datos . nombre ;
        consola _ registro ( doc . id ) ;
        destinos _ empujar ( lugar ) ;
      } ) ;
    } ) .
    atrapar ( err => {
      consola _ registro ( err ) ;
    } ) ;

  }
} 