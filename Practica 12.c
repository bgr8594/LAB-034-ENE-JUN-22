 "@angular/navegador de plataforma" : " ~13.0.0 " ,
    "@angular/plataforma-navegador-dinámico" : " ~13.0.0 " ,
    "@angular/enrutador" : " ~13.0.0 " ,
    "@condensador/aplicación" : " 1.1.0 " ,
    "@condensador/núcleo" : " 3.4.0 " ,
    "@condensador/hápticos" : " 1.1.4 " ,
    "@condensador/teclado" : " 1.2.1 " ,
    "@condensador/barra de estado" : " 1.0.7 " ,
    "@condensador/aplicación" : " 1.0.7 " ,
    "@condensador/núcleo" : " ^3.3.4 " ,
    "@condensador/geolocalización" : " ^1.3.1 " ,
    "@condensador/hápticos" : " 1.1.3 " ,
    "@condensador/teclado" : " 1.2.0 " ,
    "@condensador/barra de estado" : " 1.0.6 " ,
    "@ionic/angular" : " ^6.0.0 " ,
    "fuego angular2" : " ^5.4.2 " ,
    "base de fuego" : " ^7.24.0 " ,
@@ -37,12 +38,13 @@
    "@angular-eslint/eslint-plugin" : " ~13.0.1 " ,
    "@angular-eslint/eslint-plugin-template" : " ~13.0.1 " ,
    "@angular-eslint/template-parser" : " ~13.0.1 " ,
    "@angular/cli " : " 13.0.4 " ,
    "@angular/cli " : " ~ 13.0.1 " ,
    "@angular/compilador" : " ~13.0.0 " ,
    "@angular/compiler-cli" : " ~13.0.0 " ,
    "@angular/servicio-de-idioma" : " ~13.0.0 " ,
    "@condensador/cli" : " 3.4.0 " ,
    "@condensador/cli" : " ^3.3.4 " ,
    "@ionic/kit de herramientas angulares" : " ^5.0.0 " ,
    "@ionic/lab" : " 3.2.11 " ,
    "@tipos/jazmín" : " ~3.6.0 " ,
    "@types/jasminewd2" : " ~2.0.3 " ,
    "@tipos/nodo" : " ^12.11.1 " ,
@@ -65,4 +67,4 @@
    "mecanografiado" : " ~4.4.4 "
  },
  "description" : " Un proyecto iónico "
}
} 

{
    ruta : 'destinos-api' ,  canActivate : [ AuthGuard ] ,
    loadChildren : ( )  =>  import ( './destinos-api/destinos-api.module' ) . entonces (  m  =>  m . DestinosApiPageModule )
  } ,
  {
    ruta : 'googlemaps' ,
    loadChildren : ( )  =>  importar ( './googlemaps/googlemaps.module' ) . luego (  m  =>  m . GooglemapsPageModule )
  }


] ;
@NgModule ( { _
  importaciones : [
    Módulo de enrutador . forRoot ( rutas ,  {  preloadingStrategy : PreloadAllModules  } )
  ] ,
  exportaciones : [ RouterModule ]
} )
exportar  clase  AppRoutingModule  {  }

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
        < ion-item  (clic) =" addDirection() " >
          < ion-label  class =" normal " > Ubicación </ ion-label >
          < botones de iones >
              < botón de iones >
                  < ion-icon  ranura =" solo icono " color =" peligro " nombre =" ubicación " > </ ion-icon >
              </ botón de iones >
          </ ion-botones >
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

  < cabeza de iones >
  < color de la barra de herramientas de iones  =" primario " >
      < ion-title > Destinos </ ion-title >
  </ ion-barra de herramientas >
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
        < ion-item  (clic) =" addDirection() " >
            < ion-label  class =" normal " > Ubicación </ ion-label >
            < botones de iones >
                < botón de iones >
                    < ion-icon  ranura =" solo icono " color =" peligro " nombre =" ubicación " > </ ion-icon >
                </ botón de iones >
            </ ion-botones >
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

importar  {  Lugar  }  desde  '../models/lugar.model' ;
import  {  LugarService  }  from  '../services/lugar.service' ;
importar  { FormGroup ,  FormBuilder ,  Validators ,  FormControl }  desde  '@angular/forms' ;
importar  {  ModalController  }  desde  '@ionic/angular' ;
importar  {  GooglemapsComponent  }  desde  '../googlemaps/googlemaps.component' ;

@ componente ( {
  selector : 'app-destinos' ,
@@ -19,7 +21,8 @@ exportar clase DestinosPage implementa OnInit {
  longitud : número ;

  constructor ( private  lugarService : LugarService ,
    privado  formBuilder : FormBuilder )  {  }
     constructor de formularios privado : FormBuilder ,
    privado  modalController : ModalController )  {  }

  ngOnInit ( )  {
      esto _ construirForm ( ) ;
@@ -118,4 +121,35 @@ exportar clase DestinosPage implementa OnInit {
      } ,  { tiempo de espera : 5000 ,  enableHighAccuracy : verdadero  } ) ;
    } ) ;
  }

  asíncrono  addDirection ( ) {
    let  positionInput : cualquiera  =  {
      latitud : - 2.898116 ,
      largo : - 78.99958149999999
    } ;
    if ( this . latitud  !==  null ) {
      entrada de posición . lat  =  esto . latitud ;
      entrada de posición . largo  =  esto . longitud ;
    }


    const  modalAdd  =  esperar  esto . controlador modal . crear ( {
      componente : GooglemapsComponent ,
      modo : 'ios' ,
      deslizar para cerrar : verdadero ,
      componenteProps : { posición : entrada de posición } 
    } ) ;

    esperar  modalAdd . presente ( ) ;

    const  { datos }  =  espera  modalAdd . onWillDismiss ( ) ;

    si ( datos ) {
      consola _ registro ( 'datos->' ,  datos ) ;
      //este.cli
      esto _ longitud  =  datos . posición _ largo ;
      esto _ latitud  =  datos . posición _ lat ;
      consola _ log ( 'datos de ubiciacion actualizados, latitud: ' + this . latitud + ' \nlongitud:' + this . longitud ) ;
    }
  } 
} 

importar  {  NgModule  }  desde  '@angular/core' ;
import  {  Rutas ,  RouterModule  }  desde  '@angular/router' ;

importar  {  GooglemapsPage  }  desde  './googlemaps.page' ;

const  rutas : Rutas  =  [
  {
    camino : '' ,
    componente : GooglemapsPage
  }
] ;

@NgModule ( { _
  importaciones : [ RouterModule . forChild ( rutas ) ] ,
  exportaciones : [ RouterModule ] ,
} )
exportar  clase  GooglemapsPageRoutingModule  { }

< cabeza de iones >
  < barra de herramientas de iones >
      < ranura de botones de iones  =" inicio " >
          < botón de iones  (clic) =" modalController.dismiss() " >
              < ion-icon  nombre =" flecha hacia atrás " color =" oscuro " > </ ion-icon >
          </ botón de iones >
          < clase de título de iones  =" envoltura de texto de iones normal " >
              Ubica el selector en la ubicación deseada
          </ ion-título >
      </ ion-botones >
  </ ion-barra de herramientas >
</ cabeza de iones >
< contenido de iones >
  < div  #mapa  clase =" mapa " > </ div >
  < ion-chip  class =" miubicacion " (click) =" miubicacion() " >
      < ion-label  class =" normal " > Mi ubicación actual </ ion-label >
      < ion-icon  nombre =" localizar " > </ ion-icon >
  </ chip de iones >
  < clase de chip de iones  =" aceptar " (clic) =" aceptar() " >
      < ion-label  class =" normal " > Aceptar </ ion-label >
      < nombre del icono de iones  =" marca de verificación " > </ icono de iones >
  </ chip de iones >
</ contenido de iones > 

.mapa {
    pantalla : bloque ;
    ancho : 100 % ;
    altura : 100 % ;
}

.miubicacion {
    posición : fijo ;
    abajo : 0 px ;
    fondo : #ffd740 ;
}

.aceptar {
    posición : fijo ;
    arriba : 50 px ;
    derecha : 5 px ;
    fondo : #80d894 ;
}

.buscar {
    posición : fijo ;
    arriba : 45 px ;
    izquierda : 0 píxeles ;
} 

importar  {  ComponentFixture ,  TestBed ,  waitForAsync  }  desde  '@angular/core/testing' ;
importar  {  IonicModule  }  desde  '@ionic/angular' ;

importar  {  GooglemapsComponent  }  desde  './googlemaps.component' ;

describir ( 'GooglemapsComponent' ,  ( )  =>  {
  dejar  componente : GooglemapsComponent ;
  let  fixture : ComponentFixture < GooglemapsComponent > ;

  antes de Cada ( esperarAsync ( ( ) => {  
    banco de pruebas configureTestingModule ( {
      declaraciones : [  GooglemapsComponent  ] ,
      importaciones : [ IonicModule . para Raíz ( ) ]
    } ) . compilarComponentes ( ) ;

    accesorio  =  TestBed . createComponent ( Componente de mapas de Google ) ;
    componente  =  accesorio . componenteInstancia ;
    accesorio _ detectar cambios ( ) ;
  } ) ) ;

  it ( 'debería crear' ,  ( )  =>  {
    esperar ( componente ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

import  {  Component ,  OnInit ,  Renderer2 ,  Input ,  ElementRef ,  Inject ,  ViewChild  }  from  '@angular/core' ;
importar  {  modalController  }  desde  '@ionic/core' ;
importar  {  Geolocalización  }  desde  '@capacitor/geolocalización' ;
importar  {  GooglemapsService  }  desde  '../services/googlemaps.service' ;
importar  {  DOCUMENTO  }  desde  '@angular/common' ;
importar  {  ModalController  }  desde  '@ionic/angular'

declarar  var  google : cualquiera ;

@ componente ( {
  selector : 'aplicación-googlemaps' ,
  templateUrl : './googlemaps.component.html' ,
  URL de estilo : [ './googlemaps.component.scss' ] ,
} )
 clase de  exportación GooglemapsComponent  implementa  OnInit  {

// posicion inicial del mapa, en caso de que no se le de una por defecto
@ Posición de entrada ( )  : cualquiera = {  
  latitud :   - 2.889 ,
  largo :   - 78.899
}

etiqueta : cualquiera  =  {
  titulo : 'Ubicacion' ,
  subtitulo : 'Mi ubicacion de envio'
} ;

mapa : cualquiera ;
marcador : cualquiera ;
ventana de información : cualquiera ;
conjunto de posiciones : cualquiera ;

@ ViewChild ( 'mapa' )  divMap : ElementRef ;

  constructor (
     renderizador privado : Renderer2 ,
    @ Inyectar ( DOCUMENTO )  documento privado  ,
     googleMapsService privado : GooglemapsService ,
     controlador modal público : controlador modal
  )  {  }

  ngOnInit ( )  {
    esto _ inicializar ( ) ;
  }


   inicialización asíncrona ( ) {
    esto _ Google Maps Service . init ( este . procesador ,  este . documento ) .
    entonces ( ( ) => {
      esto _ initMap ( )
    } )
    . catch ( ( error : cualquiera ) => {
      consola _ error ( error ) ;
    } ) ;
  }

  initMap ( ) {
     posición  constante =  esto . posición ;

    let  latLng  =  nuevo  google . mapas _ LatLng ( posición . lat ,  posición . lng ) ;

    let  mapOptions  =  {
      centro : latLng ,
      zoom : 15 ,
      disabledDefaultUI : verdadero ,
      Iconos que se pueden hacer clic : falso
    } ;

    esto _ mapa  =  nuevo  google . mapas _ Mapa ( this . divMap . nativeElement ,  mapOptions ) ;

    esto _ marcador  =  nuevo  google . mapas _ marcador ( {
      mapa : este . mapa ,
      animación : google . mapas _ Animación _ GOTA ,
      arrastrable : cierto
    } ) ;

    esto _ hacer clic en Evento manual ( ) ;
    esto _ ventana de información  =  nuevo  google . mapas _ Ventana de información ( ) ;
    esto _ addMarker ( posición ) ;
    esto _ setInfoWindow ( this.marker , this.label.titulo ,  this.label.subtitulo ) ; _ _ _ _ _ _ _ _ _ _ 
  }
  haga clic en evento manual ( ) {
    esto _ mapa _ addListener ( 'clic' ,  ( evento : cualquiera ) => {
       posición  constante =  {
        lat : evento . latLng . lat ( ) ,
        lng : evento . latLng . largo ( ) ,
      } ;
      esto _ addMarker ( posición ) ;
    } ) ;
  }

  addMarker ( posición : cualquiera ) : vacío {
    let  latLng  =  nuevo  google . mapas _ LatLng ( posición . lat ,  posición . lng ) ;
    esto _ marcador _ establecerPosición ( latLng ) ;
    esto _ mapa _ panTo ( posición ) ;
    esto _ conjuntoposicion = posicion  ; 
  }

  setInfoWindow ( marcador : cualquiera ,  titulo : cadena ,  subtitulo : cadena ) {
    const  contentString  =  '<div id="contentInsideMap">'  +
                          '<div>' +
                          '</div>' +
                          '<p style="font-weight: bold; margin-bottom:5px;">' +
                          '<div id="bodyContent">' +
                          '<p clase="normal m-0">' +
                          subtítulo + '</p>' +
                          '</div>' +
                          '</div>' ;
    esto _ ventana de información setContent ( cadena de contenido ) ;
    esto _ ventana de información abrir ( este . mapa ,  marcador ) ;
  }

   miubicación asíncrona ( ) {
    Geolocalización . obtenerPosiciónActual ( ) . entonces ( ( res ) => {
      consola _ log ( 'mulocación() -> get' ,  res ) ;

       posición  constante =  {
        lat : res . coordenadas _ latitud ,
        lng : res . coordenadas _ longitud
      } ;

      esto _ addMarker ( posición ) ;
    } ) ;
  }

  aceptar ( ) {
    consola _ log ( 'haga clic en aceptar ->' ,  este .positionSet ) ;
    esto _ controlador modal . descartar ( { pos : este . positionSet } ) ;
  }
} 

importar  {  NgModule  }  desde  '@angular/core' ;
importar  {  CommonModule  }  desde  '@angular/common' ;



@NgModule ( { _
  declaraciones : [ ] ,
  importaciones : [
    CommonModule
  ]
} )
exportar  clase  GooglemapsModule  {  }

< cabeza de iones >
  < barra de herramientas de iones >
    < ion-title > googlemaps </ ion-title >
  </ ion-barra de herramientas >
</ cabeza de iones >

< contenido de iones >

</ contenido de iones >

importar  {  ComponentFixture ,  TestBed ,  waitForAsync  }  desde  '@angular/core/testing' ;
importar  {  IonicModule  }  desde  '@ionic/angular' ;

importar  {  GooglemapsPage  }  desde  './googlemaps.page' ;

describir ( 'GooglemapsPage' ,  ( )  =>  {
  let  componente : GooglemapsPage ;
  let  fixture : ComponentFixture < GooglemapsPage > ;

  antes de Cada ( esperarAsync ( ( ) => {  
    banco de pruebas configureTestingModule ( {
      declaraciones : [  GooglemapsPage  ] ,
      importaciones : [ IonicModule . para Raíz ( ) ]
    } ) . compilarComponentes ( ) ;

    accesorio  =  TestBed . createComponent ( GooglemapsPage ) ;
    componente  =  accesorio . componenteInstancia ;
    accesorio _ detectar cambios ( ) ;
  } ) ) ;

  it ( 'debería crear' ,  ( )  =>  {
    esperar ( componente ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;

@ componente ( {
  selector : 'aplicación-googlemaps' ,
  plantillaUrl : './googlemaps.page.html' ,
  URL de estilo : [ './googlemaps.page.scss' ] ,
} )
 clase de  exportación GooglemapsPage  implementa  OnInit  {

  constructor ( )  {  }

  ngOnInit ( )  {
  }

}
importar  {  TestBed  }  desde  '@angular/core/testing' ;

importar  {  GooglemapsService  }  desde  './googlemaps.service' ;

describir ( 'GooglemapsService' ,  ( )  =>  {
  dejar  servicio : GooglemapsService ;

  antes de cada ( ( )  =>  {
    banco de pruebas configureTestingModule ( { } ) ;
    servicio  =  TestBed . inyectar ( GooglemapsService ) ;
  } ) ;

  it ( 'debe ser creado' ,  ( )  =>  {
    esperar ( servicio ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

importar  {  Inyectable  }  desde  '@angular/core' ;
import  {  entorno  }  desde  'src/environments/environment' ;

declarar  var  google : cualquiera ;

@ Inyectable ( {
  proporcionado en : 'raíz'
} )
exportar  clase  GooglemapsService  {

  apikey : cadena  =  entorno . apikeyMaps ;
  mapas cargados : booleano  =  falso ;

  constructor ( )  {  }

  init ( procesador : cualquiera ,  documento : cualquiera ) {


    devolver  nueva  Promesa ( ( resolver ,  rechazar )  =>  {
      si ( este . mapas cargados ) {
        consola _ log ( 'google tiene una vista previa cargada' ) ;
        resolver ( verdadero ) ;
        volver ;
      }

      const  script  = renderizador . crearElemento ( 'script' ) ;
      guion _ id  = "googleMaps" ;
      ventana [ 'mapInit' ]  =  ( )  => {
        esto _ mapas cargados  =  verdadero ;
        si ( googlear ) {
          consola _ log ( 'google está cargado' ) ;
        }  más {
          consola _ log ( 'google no está definido' ) ;
        }

        resolver ( verdadero ) ;
        volver ;
      } ;


      si ( esto . apikey ) {
        guion _ src  =  'https://maps.googleapis.com/maps/api/js?key=' + esto . apikey + '&callback=mapInit' ;
      }  más {
        guion _ src  =  'https://maps.googleapis.com/maps/api/js?callback=mapInit' ;
      }
      renderizador _ appendChild ( documento . cuerpo ,  guión ) ;
    } ) ;
  }
} 

exportar  entorno const  = {  
    producción : falso ,
    base de fuegoConfig : {
      apiKey : " AIzaSyA8hUNyD92APJhX2KEKb8Iy2D9bq_u6dxY " ,
      authDomain : " grupo-034-labapp .firebaseapp.com" ,
      ID del proyecto : " grupo-034-labapp " ,
      StorageBucket : " grupo-034-labapp .appspot.com" ,
      mensajeríaSenderId : " 531748015651 " ,
      ID de aplicación : "1: 531748015651 : web: 689ee1423a45eed5c7eb96" ,
      ID de medición : "G-JQGLNGSZET"
    }
      apiKey : " AIzaSyCkpMeJBqhhXJ47JWjtadxPyo0KMypPaws " ,
      authDomain : " ionic-basic-031 .firebaseapp.com" ,
      ID del proyecto : " ionic-basic-031 " ,
      cubo de almacenamiento : " ionic-basic-031 .appspot.com" ,
      mensajeríaSenderId : " 151373407537 " ,
      ID de aplicación : "1: 151373407537 : web: 9c50e2e729e61829547c10"
    } ,
    apikeyMaps : 'AIzaSyASA1edfgpNCuRqUUe-Go8xybyOXK4hl1c'
  } ;
  </ cabeza >

  < cuerpo >
    <!--
    <guión
        src="https://maps.googleapis.com/maps/api/js?key=YOUR_API_KEY&callback=initMap&v=weekly"
        asíncrono
      ></guión>
    -->
    < raíz de la aplicación > </ raíz de la aplicación >
  </ cuerpo >
  
  </ html >
  </ html > 
  

