importar  {  NgModule  }  desde  '@angular/core' ;
import  {  Rutas ,  RouterModule  }  desde  '@angular/router' ;

importar  {  AlumnosPage  }  de  './alumnos.page' ;

const  rutas : Rutas  =  [
  {
    camino : '' ,
    componente : AlumnosPage
  }
] ;

@NgModule ( { _
  importaciones : [ RouterModule . forChild ( rutas ) ] ,
  exportaciones : [ RouterModule ] ,
} )
exportar  clase  AlumnosPageRoutingModule  { } 

importar  {  NgModule  }  desde  '@angular/core' ;
importar  {  CommonModule  }  desde  '@angular/common' ;
importar  {  FormsModule  }  desde  '@angular/forms' ;

importar  {  IonicModule  }  desde  '@ionic/angular' ;

import  {  AlumnosPageRoutingModule  }  from  './alumnos-routing.module' ;

importar  {  AlumnosPage  }  de  './alumnos.page' ;
import  {  DatosAlumnoComponent  }  from  '../componentes/datos-alumno/datos-alumno.component' ;

@NgModule ( { _
  importaciones : [
    módulo común ,
    Módulo de formularios ,
    módulo iónico ,
    AlumnosPageRoutingModule
  ] ,
  declaraciones : [ AlumnosPage ,  DatosAlumnoComponent ]
} )
exportar  clase  AlumnosPageModule  { } 

< cabeza de iones >
  < barra de herramientas de iones >
      < ion-title > alumnos </ ion-title >
  </ ion-barra de herramientas >
</ cabeza de iones >

< contenido de iones >
  < lista de iones >
      < elemento de iones >
          < etiqueta de iones >
              Matrícula:
          </ ion-etiqueta >
          < ion-input  type =" text " [(ngModel)] =" matricula " placeholder =" Ingrese la matricula " > </ ion-input >
      </ ion-elemento >
      < elemento de iones >
          < etiqueta de iones >
              Nombre:
          </ ion-etiqueta >
          < ion-input  type =" text " [(ngModel)] =" nombre " placeholder =" Ingrese nombre del alumno " > </ ion-input >
      </ ion-elemento >
      < elemento de iones >
          < ion-button  type =" button " (clic) =" guardar() " > {{estado}} </ ion-button >
          < ion-button  *ngIf =" estado==='actualizar' " type =" button " (click) =" cancelar() " > Cancelar </ ion-button >
          < ion-text  *ngIf =" error " color =" peligro " >
              < h6 > Debe ingresar nombre y matricula para {{estado}} </ h6 >
          </ ion-texto >
      </ ion-elemento >
      < ion-item  *ngIf =" alumnos.longitud>0 " >
          < app-datos-alumno  [alumnosList] =" alumnos " (eliminar) =" eliminar($evento) " (editar) =" editar($evento) " > </ app-datos-alumno >
      </ ion-elemento >
  </ lista de iones >
</ contenido de iones > 

importar  {  ComponentFixture ,  TestBed ,  waitForAsync  }  desde  '@angular/core/testing' ;
importar  {  IonicModule  }  desde  '@ionic/angular' ;

importar  {  AlumnosPage  }  de  './alumnos.page' ;

describir ( 'PáginaAlumnos' ,  ( )  =>  {
  let  componente : AlumnosPage ;
  let  fixture : ComponentFixture < AlumnosPage > ;

  antes de Cada ( esperarAsync ( ( ) => {  
    banco de pruebas configureTestingModule ( {
      declaraciones : [  AlumnosPage  ] ,
      importaciones : [ IonicModule . para Raíz ( ) ]
    } ) . compilarComponentes ( ) ;

    accesorio  =  TestBed . createComponent ( PáginaAlumnos ) ;
    componente  =  accesorio . componenteInstancia ;
    accesorio _ detectar cambios ( ) ;
  } ) ) ;

  it ( 'debería crear' ,  ( )  =>  {
    esperar ( componente ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;
import  {  Alumno  }  from  '../models/alumno.model' ;
import  {  AlumnoService  }  from  '../services/alumno.service' ;

@ componente ( {
  selector : 'aplicación-alumnos' ,
  templateUrl : './alumnos.page.html' ,
  URL de estilo : [ './alumnos.page.scss' ] ,
} )
 clase de  exportación AlumnosPage  implementa  OnInit  {

  alumnos : Alumno [ ] ;
  nombre : cadena ;
  matricula : cadena ;
  estado : cadena ;
  idActualizar : número ;
  error : booleano  =  falso ;

  constructor (  privado  alumnoService : AlumnoService )  { 

    esto _ alumnoServicio . setAlumnos ( [
      { id : 1 ,  nombre : 'Gerardo Martínez' ,
      matrícula : '745589' } ,
      { id : 2 ,  nombre : 'Isela Rodríguez' ,
      matrícula : '855449' } ,
      { id : 3 ,  nombre : 'Esteban' ,
      matrícula : '0021554' }
    ] ) ;
    esto _ alumnos  =  esto . alumnoServicio . getAlumos ( ) ;
    esto _ estado  = 'guardar' ;

  }

  ngOnInit ( )  {
  }

  público  guardar ( ) {
    if (  ( este . nombre  ==  indefinido  ||  este . nombre  ==  ''  )  || 
      ( this . matricula  ==  indefinido  ||  this . matricula  ==  '' )  )  {
      esto _ error  =  verdadero ;
      volver ;
    }  
    let  alumno : Alumno = {
      nombre : este . nombre ,
      matricula : esta . matrícula
    } ;
    if  ( this . estado  === 'actualizar' ) {
      alumno _ identificación  =  esto . idActualizar ;
      esto _ alumnos  =  esto . alumnoServicio . actualizado ( alumno ) ;
    }
    if ( this . estado  ===  'guardar' ) {
      esto _ alumnoServicio . agregar alumno ( alumno ) ;
      esto _ alumnos  =  esto . alumnoServicio . getAlumos ( ) ;
    }
    esto _ cancelar ( ) ;
  }

  public  cancelar ( ) {
    esto _ estado  =  'guardar' ;
    esto _ matricula  =  '' ;
    esto _ nombre  =  '' ;
    esto _ error  =  falso ;
  }

  público  eliminar ( id : número ) {
    esto _ alumnoServicio . borrarAlumno ( id ) ;
    esto _ alumnos  =  esto . alumnoServicio . getAlumos ( ) ;
  }
  público  editar ( alumno : alumno ) {
    esto _ estado  =  'actualizar' ;
    esto _ matrícula  =  alumno . matrícula ;
    esto _ nombre  =  alumno . nombre ;
    esto _ idActualizar  =  alumno . identificación ;
  }

} 

@@ -14,6 +14,10 @@ const rutas: Rutas = [
  {
    camino : 'presupuesto' ,
    loadChildren : ( )  =>  import ( './presupuesto/presupuesto.module' ) . luego (  m  =>  m . PresupuestoPáginaModule )
  } ,
  {
    ruta : 'alumnos' ,
    loadChildren : ( )  =>  import ( './alumnos/alumnos.module' ) . luego (  m  =>  m . AlumnosPageModule )
  }
] ;

@@ -23,4 +27,4 @@ const rutas: Rutas = [
  ] ,
  exportaciones : [ RouterModule ]
} )
exportar  clase  AppRoutingModule  {  }
exportar  clase  AppRoutingModule  {  } 

< ion-grid  *ngIf =" listaalumnos.longitud>0 " >
  < fila de iones >
      < ion-col  size =" 4 " > Matricula </ ion-col >
      < ion-col  size =" 4 " > Nombre </ ion-col >
      < ion-col  tamaño =" 2 " > </ ion-col >
      < ion-col  tamaño =" 2 " > </ ion-col >
  </ fila de iones >
  < ion-row  *ngFor =" dejar alumno de alumnosList " >
      < ion-col  tamaño =" 4 " >
          {{alumno.matricula}}
      </ ion-col >
      < ion-col  tamaño =" 4 " >
          {{alumno.nombre}}
      </ ion-col >
      < ion-col  size =" 3 " (clic) =" editar.emit(alumno) " > < a > Editar </ a > </ ion-col >
      < ion-col  size =" 1 " (clic) =" eliminar.emit(alumno.id) " > < a > X </ a > </ ion-col >
  </ fila de iones >
</ rejilla de iones > 

importar  {  ComponentFixture ,  TestBed ,  waitForAsync  }  desde  '@angular/core/testing' ;
importar  {  IonicModule  }  desde  '@ionic/angular' ;

import  {  DatosAlumnoComponent  }  from  './datos-alumno.component' ;

describe ( 'DatosAlumnoComponente' ,  ( )  =>  {
  let  componente : DatosAlumnoComponent ;
  let  fixture : ComponentFixture < DatosAlumnoComponent > ;

  antes de Cada ( esperarAsync ( ( ) => {  
    banco de pruebas configureTestingModule ( {
      declaraciones : [  DatosAlumnoComponent  ] ,
      importaciones : [ IonicModule . para Raíz ( ) ]
    } ) . compilarComponentes ( ) ;

    accesorio  =  TestBed . createComponent ( ComponenteDatosAlumno ) ;
    componente  =  accesorio . componenteInstancia ;
    accesorio _ detectar cambios ( ) ;
  } ) ) ;

  it ( 'debería crear' ,  ( )  =>  {
    esperar ( componente ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

import  {  Component ,  EventEmitter ,  Input ,  OnInit ,  Output  }  from  '@angular/core' ;
importar  {  alumno  }  de  'src/app/models/alumno.model' ;

@ componente ( {
  selector : 'aplicacion-datos-alumno' ,
  templateUrl : './datos-alumno.component.html' ,
  styleUrls : [ './datos-alumno.component.scss' ] ,
} )
exportar  clase  DatosAlumnoComponent  implementa  OnInit  {

  @ Entrada ( )  lista de alumnos : Alumno [ ] ;
  @ Output ( )  eliminar : any  =  new  EventEmitter < Alumno [ ] > ( ) ;
  @ Salida ( )  editar :   cualquiera  =  new  EventEmitter < número > ( ) ;

  constructor ( )  {  }

  ngOnInit ( )  { }

} 

importar  {  NgModule  }  desde  '@angular/core' ;
import  {  Rutas ,  RouterModule  }  desde  '@angular/router' ;

importar  {  PáginaInicio  }  desde  './inicio.page' ;

const  rutas : Rutas  =  [
  {
    camino : '' ,
    componente : página de inicio
  }
] ;

@NgModule ( { _
  importaciones : [ RouterModule . forChild ( rutas ) ] ,
  exportaciones : [ RouterModule ] ,
} )
exportar  clase  InicioPageRoutingModule  { }

importar  {  NgModule  }  desde  '@angular/core' ;
importar  {  CommonModule  }  desde  '@angular/common' ;
importar  {  FormsModule  }  desde  '@angular/forms' ;

importar  {  IonicModule  }  desde  '@ionic/angular' ;

import  {  InicioPageRoutingModule  }  from  './inicio-routing.module' ;

importar  {  PáginaInicio  }  desde  './inicio.page' ;

@NgModule ( { _
  importaciones : [
    módulo común ,
    Módulo de formularios ,
    módulo iónico ,
    InicioPageRoutingModule
  ] ,
  declaraciones : [ InicioPage ]
} )
exportar  clase  InicioPageModule  { }

< cabeza de iones >
  < barra de herramientas de iones >
    < ion-title > inicio </ ion-title >
  </ ion-barra de herramientas >
</ cabeza de iones >

< contenido de iones >

</ contenido de iones >

importar  {  ComponentFixture ,  TestBed ,  waitForAsync  }  desde  '@angular/core/testing' ;
importar  {  IonicModule  }  desde  '@ionic/angular' ;

importar  {  PáginaInicio  }  desde  './inicio.page' ;

describe ( 'PáginaInicio' ,  ( )  =>  {
  let  componente : InicioPage ;
  let  fixture : ComponentFixture < InicioPage > ;

  antes de Cada ( esperarAsync ( ( ) => {  
    banco de pruebas configureTestingModule ( {
      declaraciones : [  PáginaInicio  ] ,
      importaciones : [ IonicModule . para Raíz ( ) ]
    } ) . compilarComponentes ( ) ;

    accesorio  =  TestBed . crearComponente ( PáginaInicio ) ;
    componente  =  accesorio . componenteInstancia ;
    accesorio _ detectar cambios ( ) ;
  } ) ) ;

  it ( 'debería crear' ,  ( )  =>  {
    esperar ( componente ) . aBeTruthy ( ) ;
  } ) ;
} ) ;
importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;

@ componente ( {
  selector : 'app-inicio' ,
  templateUrl : './inicio.page.html' ,
  styleUrls : [ './inicio.page.scss' ] ,
} )
export  class  InicioPage  implementa  OnInit  {

  constructor ( )  {  }

  ngOnInit ( )  {
  }

}

 interfaz de  exportación Alumno {
    matricula : cadena ;
    nombre : cadena ;
    identificación ?: número ;
  } 


importar  {  NgModule  }  desde  '@angular/core' ;
import  {  Rutas ,  RouterModule  }  desde  '@angular/router' ;

importar  {  RecieverPage  }  desde  './reciever.page' ;

const  rutas : Rutas  =  [
  {
    camino : '' ,
    componente : ReceiverPage
  }
] ;

@NgModule ( { _
  importaciones : [ RouterModule . forChild ( rutas ) ] ,
  exportaciones : [ RouterModule ] ,
} )
 clase de  exportación ReceiverPageRoutingModule  { }


 importar  {  NgModule  }  desde  '@angular/core' ;
importar  {  CommonModule  }  desde  '@angular/common' ;
importar  {  FormsModule  }  desde  '@angular/forms' ;

importar  {  IonicModule  }  desde  '@ionic/angular' ;

import  {  RecieverPageRoutingModule  }  from  './reciever-routing.module' ;

importar  {  RecieverPage  }  desde  './reciever.page' ;

@NgModule ( { _
  importaciones : [
    módulo común ,
    Módulo de formularios ,
    módulo iónico ,
    RecieverPageRoutingModuleRecieverPageRoutingModule
  ] ,
  declaraciones : [ RecieverPage ]
} )
 clase de  exportación ReceiverPageModule  { }

}

< cabeza de iones >
  < barra de herramientas de iones >
    < ion-title > receptor </ ion-title >
  </ ion-barra de herramientas >
</ cabeza de iones >

< contenido de iones >

</ contenido de iones >

importar  {  ComponentFixture ,  TestBed ,  waitForAsync  }  desde  '@angular/core/testing' ;
importar  {  IonicModule  }  desde  '@ionic/angular' ;

importar  {  RecieverPage  }  desde  './reciever.page' ;

describir ( 'RecieverPage' ,  ( )  =>  {
  dejar  componente : ReceiverPage ;
  let  fixture : ComponentFixture < RecieverPage > ;

  antes de Cada ( esperarAsync ( ( ) => {  
    banco de pruebas configureTestingModule ( {
      declaraciones : [  RecieverPage  ] ,
      importaciones : [ IonicModule . para Raíz ( ) ]
    } ) . compilarComponentes ( ) ;

    accesorio  =  TestBed . createComponent ( RecieverPage ) ;
    componente  =  accesorio . componenteInstancia ;
    accesorio _ detectar cambios ( ) ;
  } ) ) ;

  it ( 'debería crear' ,  ( )  =>  {
    esperar ( componente ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;

@ componente ( {
  selector : 'aplicación-receptor' ,
  templateUrl : './receptor.page.html' ,
  URL de estilo : [ './receptor.página.scss' ] ,
} )
 clase de  exportación ReceiverPage implementa OnInit  {  

  constructor ( )  {  }

  ngOnInit ( )  {
  }

}

importar  {  TestBed  }  desde  '@angular/core/testing' ;

import  {  AlumnoService  }  from  './alumno.service' ;

describir ( 'AlumnoService' ,  ( )  =>  {
  let  servicio : AlumnoService ;

  antes de cada ( ( )  =>  {
    banco de pruebas configureTestingModule ( { } ) ;
    servicio  =  TestBed . inyectar ( AlumnoService ) ;
  } ) ;

  it ( 'debe ser creado' ,  ( )  =>  {
    esperar ( servicio ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

importar  {  Inyectable  }  desde  '@angular/core' ;
import  {  Alumno  }  from  '../models/alumno.model' ;

@ Inyectable ( {
  proporcionado en : 'raíz'
} )
exportar  clase  AlumnoService  {

   alumnos privados : Alumno [ ] = [ ] ;

  constructor ( )  {  }

  public  agregarAlumno ( alumno : Alumno ) {
    if ( this . alumnos . longitud > 0 ) {
      alumno _ identificación  =  esto . alumnos . longitud  +  1  ;
    }  más  {
      alumno _ identificación  =  1 ;
    }
    esto _ alumnos . empujar ( alumno ) ;
  }

  public  borrarAlumno ( id : numero ) {
    esto _ alumnos  =
    esto _ alumnos . filter ( ( al => al . id != id ) ) ;
  }

  public  getAlumos ( ) : Alumno [ ] {
    devolver  esto . alumnos ;
  }

  public  setAlumnos ( alumnos : Alumno [ ] ) {
    esto _ alumnos  =  alumnos ;
  }

   actualización pública ( alumno : Alumno ) : Alumno [ ] {
    esto _ alumnos . filtro (
      ( al ) => al . id == alumno . identificación
    ) . mapa ( al => {
      al . matrícula = alumno . matrícula ;
      al . nombre  =  alumno . nombre ;
    } ) ;
    devolver  esto . getAlumos ( ) ;
  }
} 
importar  {  TestBed  }  desde  '@angular/core/testing' ;

importar  {  ServicioCService  }  desde  './servicio-c.service' ;

describir ( 'ServicioCService' ,  ( )  =>  {
  dejar  servicio : ServicioCService ;

  antes de cada ( ( )  =>  {
    banco de pruebas configureTestingModule ( { } ) ;
    servicio  =  TestBed . inyectar ( ServicioCService ) ;
  } ) ;

  it ( 'debe ser creado' ,  ( )  =>  {
    esperar ( servicio ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

importar  {  Inyectable  }  desde  '@angular/core' ;

@ Inyectable ( {
  proporcionado en : 'raíz'
} )
exportar  clase  ServicioCService  {

  constructor ( )  {  }
}