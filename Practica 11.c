 loadChildren : ( )  =>  importar ( './destinos/destinos.module' ) . luego (  m  =>  m . DestinosPageModule )
  } ,
  {
    ruta : 'destinos' ,
    loadChildren : ( )  =>  importar ( './destinos/destinos.module' ) . luego (  m  =>  m . DestinosPageModule )
    ruta : 'destinos-api' ,  canActivate : [ AuthGuard ] ,
    loadChildren : ( )  =>  import ( './destinos-api/destinos-api.module' ) . entonces (  m  =>  m . DestinosApiPageModule )
  } ,
  {
    ruta : 'destinos-api' ,
    loadChildren : ( )  =>  import ( './destinos-api/destinos-api.module' ) . entonces (  m  =>  m . DestinosApiPageModule )
  }


] ;

@NgModule ( { _
  importaciones : [
    Módulo de enrutador . forRoot ( rutas ,  {  preloadingStrategy : PreloadAllModules  } )
  ] ,
  exportaciones : [ RouterModule ]
} )
exportar  clase  AppRoutingModule  {  }

importar  {  NgModule  }  desde  '@angular/core' ;
import  {  Rutas ,  RouterModule  }  desde  '@angular/router' ;

import  {  DestinosApiPage  }  from  './destinos-api.page' ;

const  rutas : Rutas  =  [
  {
    camino : '' ,
    componente : DestinosApiPage
  }
] ;

@NgModule ( { _
  importaciones : [ RouterModule . forChild ( rutas ) ] ,
  exportaciones : [ RouterModule ] ,
} )
 clase de  exportación DestinosApiPageRoutingModule  { } 

 importar  {  NgModule  }  desde  '@angular/core' ;
importar  {  CommonModule  }  desde  '@angular/common' ;
importar  {  FormsModule ,  ReactiveFormsModule  }  desde  '@angular/forms' ;

importar  {  IonicModule  }  desde  '@ionic/angular' ;

import  {  DestinosApiPageRoutingModule  }  from  './destinos-api-routing.module' ;

import  {  DestinosApiPage  }  from  './destinos-api.page' ;

@NgModule ( { _
  importaciones : [
    módulo común ,
    Módulo de formularios ,
    módulo iónico ,
    DestinosApiPageRoutingModule ,
    ReactiveFormsModuleReactiveFormsModule
  ] ,
  declaraciones : [ DestinosApiPage ]
} )
exportar  clase  DestinosApiPageModule  { } 

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
          < ion-button  type =" enviar " type =" enviar " [deshabilitado] =" !(ionicForm.valid) " color =" primario " tamaño =" más grande " > {{estado}} </ ion-button >
          < ion-button  *ngIf =" editando " type =" button " color =" peligro " size =" mayor " (click) =" cancelarEdicion() " > Cancelar </ ion-button >
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
          < ion-col >

          </ ion-col >
          < ion-col >

          </ ion-col >
      </ fila de iones >
      < ion-row  *ngFor =" let lugar de destinos " >
          < ion-col >
              < ion-texto >
                  {{lugar.nombre}}
              </ ion-texto >
          </ ion-col >
          < ion-col >
              < ion-text  *ngIf =" lugar.latitud " >
                  latitud: {{lugar.latitud}} ,longitud{{lugar.longitud}}
              </ ion-texto >
              < ion-text  *ngIf =" !lugar.latitud " >
              </ ion-texto >
          </ ion-col >
          < ion-col >
              < ion-button  color =" primario " (click) =" editarLugar(lugar.id, lugar) " > editar </ ion-button >
          </ ion-col >
          < ion-col >
              < ion-button  color =" peligro " (clic) =" eliminarLugar(lugar.id) " > borrar </ ion-button >
          </ ion-col >
      </ fila de iones >
  </ rejilla de iones >
</ contenido de iones > 

importar  {  ComponentFixture ,  TestBed ,  waitForAsync  }  desde  '@angular/core/testing' ;
importar  {  IonicModule  }  desde  '@ionic/angular' ;

import  {  DestinosApiPage  }  from  './destinos-api.page' ;

describir ( 'DestinosApiPage' ,  ( )  =>  {
  let  componente : DestinosApiPage ;
  let  fixture : ComponentFixture < DestinosApiPage > ;

  antes de Cada ( esperarAsync ( ( ) => {  
    banco de pruebas configureTestingModule ( {
      declaraciones : [  DestinosApiPage  ] ,
      importaciones : [ IonicModule . para Raíz ( ) ]
    } ) . compilarComponentes ( ) ;

    accesorio  =  TestBed . createComponent ( DestinosApiPage ) ;
    componente  =  accesorio . componenteInstancia ;
    accesorio _ detectar cambios ( ) ;
  } ) ) ;

  it ( 'debería crear' ,  ( )  =>  {
    esperar ( componente ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;
importar  {  Lugar  }  desde  '../models/lugar.model' ;
import  {  LugaresapiService  }  from  '../services/lugaresapi.service' ;
importar  { FormGroup ,  FormBuilder ,  Validators ,  FormControl ,  AbstractControl }  desde  '@angular/forms' ;

@ componente ( {
  selector : 'app-destinos-api' ,
  templateUrl : './destinos-api.page.html' ,
  styleUrls : [ './destinos-api.page.scss' ] ,
} )
 clase de  exportación DestinosApiPage  implementa  OnInit  {

  lugar : Lugar  =  nuevo  Lugar ( ) ;
  destinos : cualquier [ ]  =  [ ] ;
  forma iónica : grupo de formas ;
  estado : string  = "Alto destino" ;
  editando : booleano =  falso ;
  latitud : número ;
  longitud : número ;

  constructor ( private  lugarService : LugaresapiService ,
    privado  formBuilder : FormBuilder )  {  }

  ngOnInit ( )  {
    esto _ construirForm ( ) ;
    esto _ obtenerPosición ( ) ;
  }

  ionViewDidEnter ( ) {
    esto _ obtenerLugares ( ) ;
  }
  obtenerLugares ( ) {
    esto _ lugarServicio . getLugaresApi ( ) . suscribirse ( ( respuesta : Lugar [ ] ) => {
      esto _ destinos  =  respuesta ;
    } ,  error => {
      consola _ error ( error ) ;
    } ) ;
  }

  enviarFormulario ( ) {
    if ( este . ionicForm . válido ) {
      esto _ lugar _ nombre  =  esto . Forma iónica . obtener ( 'nombre' ) . valor ;
      esto _ lugar _ latitud  =  esto . latitud ;
      esto _ lugar _ longitud  =  esto . longitud ;
      if ( ! esta . editando ) {
        esto _ lugarServicio . altaLugarApi ( este . lugar ) . suscribirse ( ( respuesta : cualquiera ) => {
          si ( respuesta ) {
            esto _ Forma iónica . restablecer ( ) ;
            esto _ obtenerLugares ( ) ;
          }  más {
            esto _ errorProceso ( ) ;
          }
        } ,  error => {
          consola _ error ( error ) ;
        } )      
      }  más {
        esto _ lugarServicio . editarLugarApi ( este . lugar . id ,  este . lugar ) . suscribirse ( ( respuesta : cualquiera ) => {
          si ( respuesta ) {
            esto _ editando =  falso ;
            esto _ estado  =  "Alto destino" ;
            esto _ lugar  =  nuevo  Lugar ( ) ;
            esto _ Forma iónica . restablecer ( ) ;
            esto _ obtenerLugares ( ) ;
          }  más {
            esto _ errorProceso ( ) ;
          }
        } ,  error => {
          consola _ error ( error ) ;
        } ) ;
      }
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


  editarLugar ( id : any ,  lugar : any )  {
    esto _ editando  =  verdadero ;
    esto _ lugar  =  lugar ;
    esto _ estado  =  "Editar el lugar" ;
    esto _ Forma iónica . obtener ( 'nombre' ) . setValor ( lugar.nombre ) ; _ _
  }

  eliminarLugar ( id : any )  {
    esto _ lugarServicio . borrarLugarApi ( id ) . suscribirse ( ( respuesta : cualquiera ) => {
      si ( respuesta ) {
        esto _ obtenerLugares ( ) ;
        esto _ estado  =  "Alto destino" ;
        esto _ editando  =  falso ;
        esto _ Forma iónica . restablecer ( ) ;
      }  más {
        esto _ errorProceso ( ) ;
      }
    } ,  error => {
      consola _ error ( error ) ;
    } )
  }

  cancelarEdicion ( ) {
    esto _ estado  =  "Alto destino" ;
    esto _ editando  =  falso ;
    esto _ Forma iónica . restablecer ( ) ;
    esto _ lugar  =  nuevo  Lugar ( ) ;
  }

  getPosition ( ) : Promesa < cualquiera >  {
		devolver  nueva  Promesa ( ( resolver : cualquiera ,  rechazar : cualquiera ) : cualquiera  =>  {
			navegante _ geolocalización _ getPosiciónActual ( ( resp : cualquiera )  =>  {
				esto _ latitud  =  resp . coordenadas _ latitud ;
				esto _ longitud  =  resp . coordenadas _ longitud ;
			} ,
			( err : cualquiera )  =>  {
				if  (  err . código  ===  1  )  {
					alert ( 'Favor de activar la geolocalización en tu navegador y recargar la pantalla.' ) ;
				}
				esto _ latitud  =  nulo ;
				esto _ longitud  =  nulo ;
			} ,  { tiempo de espera : 5000 ,  enableHighAccuracy : verdadero  } ) ;
		} ) ;
	}  

  errorProceso ( ) {
    alert ( "Ocurrio un error en el proceso" ) ;
  }
} 

</ ion-texto >
</ ion-col >
< ion-col >
    < ion-texto >
        {{lugar.ubicacion}}
    < ion-text  *ngIf =" lugar.latitud " >
        latitud: {{lugar.latitud}} ,longitud{{lugar.longitud}}
    </ ion-texto >
    < ion-text  *ngIf =" !lugar.latitud " >
    </ ion-texto >
</ ion-col >
< ion-col >
    < ion-button  color =" primario " (click) =" editarLugar(lugar.id, lugar) " > editar </ ion-button >
</ ion-col >
< ion-col >
    < ion-button  color =" peligro " (clic) =" eliminarLugar(lugar.id) " > borrar </ ion-button >
</ ion-col >
</ fila de iones >
</ rejilla de iones >
</ contenido de iones >

forma iónica : grupo de formas ;
  estado : string  = "Alto destino" ;
  editando : booleano =  falso ;
  latitud : número ;
  longitud : número ;

  constructor ( private  lugarService : LugarService ,
    privado  formBuilder : FormBuilder )  {  }

  ngOnInit ( )  {
      esto _ construirForm ( ) ;
      esto _ obtenerPosición ( ) ;
      esto _ lugarServicio . obtenerCambiosLugares ( ) . suscribirse ( resp  =>  {
        esto _ destinos  =  resp . mapa ( ( e : cualquiera )  =>  {
          volver  {
            identificación : e . carga útil doctor _ identificación ,
            nombre : e . carga útil doctor _ datos ( ) . nombre
            nombre : e . carga útil doctor _ datos ( ) . nombre ,
            latitud : e . carga útil doctor _ datos ( ) . latitud ,
            longitud : e . carga útil doctor _ datos ( ) . longitud ,
          }
        } ) ;
        consola _ registro ( resp ) ;
@@ -42,6 +47,8 @@ exportar clase DestinosPage implementa OnInit {

  enviarFormulario ( ) {
    if ( este . ionicForm . válido ) {
      esto _ lugar _ latitud  =  esto . latitud ;
      esto _ lugar _ longitud  =  esto . longitud ;
      if ( ! esta . editando ) {
        esto _ lugar _ nombre  =  esto . Forma iónica . obtener ( 'nombre' ) . valor ;
        esto _ lugarServicio . altaLugar ( este . lugar ) . luego ( ( e : cualquiera ) => {
@@ -96,4 +103,19 @@ exportar clase DestinosPage implementa OnInit {
    esto _ lugar  =  nuevo  Lugar ( ) ;
  }  

  getPosition ( ) : Promesa < cualquiera >  {
    devolver  nueva  Promesa ( ( resolver : cualquiera ,  rechazar : cualquiera ) : cualquiera  =>  {
      navegante _ geolocalización _ getPosiciónActual ( ( resp : cualquiera )  =>  {
        esto _ latitud  =  resp . coordenadas _ latitud ;
        esto _ longitud  =  resp . coordenadas _ longitud ;
      } ,
      ( err : cualquiera )  =>  {
        if  (  err . código  ===  1  )  {
          alert ( 'Favor de activar la geolocalización en tu navegador y recargar la pantalla.' ) ;
        }
        esto _ latitud  =  nulo ;
        esto _ longitud  =  nulo ;
      } ,  { tiempo de espera : 5000 ,  enableHighAccuracy : verdadero  } ) ;
    } ) ;
  }
} 

icono : 'cash-outline' } ,
{ nombre : 'inicio' , enlace : '/inicio' ,
icono : 'navegar-contorno' } ,
{ nombre : 'Turismo' , enlace : '/destinos' ,
{ nombre : 'Turismo firebase' , enlace : '/destinos' ,
icono : 'avion' } ,
{ nombre : 'Turismo api' , enlace : 'destinos-api' ,
icono : 'avion' } ,
{ nombre : 'Tabs' , enlace : '/tabs' ,
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
exportar  clase  Lugar  {
    nombre : cadena ;
    identificación ?: cadena ;

    ubicacion ?: { latitud : cadena , longitud : cadena } 
    latitud : número ; 
    longitud : número ;



@@ -11,13 +11,4 @@ exportar clase Lugar {
            esto _ nombre = ''

        }

        public  setUbicacion ( latitud : string ,  Longiutd : string ) {

            esto _ ubicación . latitud =  latitud ;

            esto _ ubicación . longitud  =  Longiutd ;

        }

} 

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
      longitud : lugar . latitud , 
      latitud : lugar . longitud
    } ;
    devolver  esto . dbFirestore . colección ( 'lugar' ) . add ( lugarTemp ) ;
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
  obtenerCambiosLugares ( ) {
    devolver  esto . dbFirestore . colección ( 'lugar' ) . cambios de instantáneas ( ) ;
  }
  updateLugares ( id : cualquiera ,  lugar : cualquiera ) {
   devolver  esto . dbFirestore . colección ( 'lugar' ) . doc ( identificación ) . actualizar ( lugar ) ;
  }
  deleteLugar ( id : cualquiera ) {
    devolver  esto . dbFirestore . colección ( 'lugar' ) . doc ( identificación ) . eliminar ( ) ;
  }
}