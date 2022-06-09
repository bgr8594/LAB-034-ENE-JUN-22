{
    ruta : 'receptor' ,
    loadChildren : ( )  =>  import ( './receptor/receptor.módulo' ) . luego (  m  =>  m . ReceiverPageModule )
  } ,
  {
    ruta : 'receta' ,
    loadChildren : ( )  =>  importar ( './receta/receta.module' ) . luego (  m  =>  m . RecetaPageModule )
  } ,
  {
    ruta : 'detalle-receta' ,
    loadChildren : ( )  =>  import ( './detalle-receta/detalle-receta.module' ) . luego (  m  =>  m . DetalleRecetaPageModule )
  }

] ;

importar  {  NgModule  }  desde  '@angular/core' ;
import  {  Rutas ,  RouterModule  }  desde  '@angular/router' ;

import  {  DetalleRecetaPage  }  from  './detalle-receta.page' ;

const  rutas : Rutas  =  [
  {
    ruta : ':idReceta' ,
    componente : DetalleRecetaPage
  }
] ;


importar  {  NgModule  }  desde  '@angular/core' ;
import  {  Rutas ,  RouterModule  }  desde  '@angular/router' ;

import  {  DetalleRecetaPage  }  from  './detalle-receta.page' ;

const  rutas : Rutas  =  [
  {
    ruta : ':idReceta' ,
    componente : DetalleRecetaPage
  }
] ;

@NgModule ( { _
  importaciones : [ RouterModule . forChild ( rutas ) ] ,
  exportaciones : [ RouterModule ] ,
} )
exportar  clase  DetalleRecetaPageRoutingModule  { }

importar  {  NgModule  }  desde  '@angular/core' ;
importar  {  CommonModule  }  desde  '@angular/common' ;
importar  {  FormsModule  }  desde  '@angular/forms' ;

importar  {  IonicModule  }  desde  '@ionic/angular' ;

import  {  DetalleRecetaPageRoutingModule  }  from  './detalle-receta-routing.module' ;

import  {  DetalleRecetaPage  }  from  './detalle-receta.page' ;

@NgModule ( { _
  importaciones : [
    módulo común ,
    Módulo de formularios ,
    módulo iónico ,
    DetalleRecetaPageRoutingModule
  ] ,
  declaraciones : [ DetalleRecetaPage ]
} )
exportar  clase  DetalleRecetaPageModule  { } 

< cabeza de iones >
  < barra de herramientas de iones >
    < ranura de botón de iones  =" inicio " >
      < ion-back-button  defaultHref =" /receta " > </ ion-back-button >
  </ botón de iones >
    < ion-title > detalle-receta </ ​​ion-title >
  </ ion-barra de herramientas >
</ cabeza de iones >

< contenido de iones >
  < rejilla de iones >
    < fila de iones >
        < ion-col >
            < ion-img  [src] =" receta.imagen " > </ ion-img >
        </ ion-col >
    </ fila de iones >
    < fila de iones >
        < ion-col >
            < lista de iones >
                < ion-item  *ngFor =" let ingrediente de receta.ingredientes " >
                    {{ingrediente}}
                </ ion-elemento >
            </ lista de iones >
        </ ion-col >
    </ fila de iones >
</ rejilla de iones >
</ contenido de iones > 

importar  {  ComponentFixture ,  TestBed ,  waitForAsync  }  desde  '@angular/core/testing' ;
importar  {  IonicModule  }  desde  '@ionic/angular' ;

import  {  DetalleRecetaPage  }  from  './detalle-receta.page' ;

describir ( 'DetalleRecetaPage' ,  ( )  =>  {
  let  componente : DetalleRecetaPage ;
  let  fixture : ComponentFixture < DetalleRecetaPage > ;

  antes de Cada ( esperarAsync ( ( ) => {  
    banco de pruebas configureTestingModule ( {
      declaraciones : [  DetalleRecetaPage  ] ,
      importaciones : [ IonicModule . para Raíz ( ) ]
    } ) . compilarComponentes ( ) ;

    accesorio  =  TestBed . createComponent ( DetalleRecetaPage ) ;
    componente  =  accesorio . componenteInstancia ;
    accesorio _ detectar cambios ( ) ;
  } ) ) ;

  it ( 'debería crear' ,  ( )  =>  {
    esperar ( componente ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;
import  {  ActivatedRoute ,  Router  }  from  '@angular/router' ;
import  {  Receta  }  from  '../models/receta.model' ;
import  {  RecetasService  }  from  '../services/recetas.service' ;

@ componente ( {
  selector : 'app-detalle-receta' ,
  templateUrl : './detalle-receta.page.html' ,
  styleUrls : [ './detalle-receta.page.scss' ] ,
} )
exportar  clase  DetalleRecetaPage  implementa  OnInit  {

  idReceta : numero ;
  receta : Receta ;

  constructor ( private  recetaService : RecetasService , 
     enrutador privado : enrutador ,  activar enrutador privado  : ruta activada ) { }  

  ngOnInit ( )  {
    esto _ activarRouter . paramMap . suscribirse ( paramMap => {
      esto _ idReceta  =  Número . parseInt ( paramMap . get ( 'idReceta' ) ) ;
      esto _ receta  =  esto . servicio de recetas . getReceta ( this . idReceta ) ;
    } ) ;
  }

} 

exportar  interfaz  Receta {
    identificación : número ;
    nombre : cadena ; 
    imagen : cadena ;
    ingredientes : cadena [ ] ; 
} 

importar  {  NgModule  }  desde  '@angular/core' ;
import  {  Rutas ,  RouterModule  }  desde  '@angular/router' ;

importar  {  RecetaPage  }  desde  './receta.page' ;

const  rutas : Rutas  =  [
  {
    camino : '' ,
    componente : RecetaPage
  }
] ;

@NgModule ( { _
  importaciones : [ RouterModule . forChild ( rutas ) ] ,
  exportaciones : [ RouterModule ] ,
} )
exportar  clase  RecetaPageRoutingModule  { } 

importar  {  NgModule  }  desde  '@angular/core' ;
importar  {  CommonModule  }  desde  '@angular/common' ;
importar  {  FormsModule  }  desde  '@angular/forms' ;

importar  {  IonicModule  }  desde  '@ionic/angular' ;

import  {  RecetaPageRoutingModule  }  from  './receta-routing.module' ;

importar  {  RecetaPage  }  desde  './receta.page' ;

@NgModule ( { _
  importaciones : [
    módulo común ,
    Módulo de formularios ,
    módulo iónico ,
    RecetaPageRoutingModule
  ] ,
  declaraciones : [ RecetaPage ]
} )
exportar  clase  RecetaPageModule  { }

< cabeza de iones >
  < barra de herramientas de iones >
    < ion-title > receta </ ​​ion-title >
  </ ion-barra de herramientas >
</ cabeza de iones >

< contenido de iones >
  < lista de iones >
    < ion-item  *ngFor =" let receta de recetas " [routerLink] =" ['/detalle-receta', receta.id] " >
        {{receta.nombre}}
    </ ion-elemento >
</ lista de iones >
</ contenido de iones > 

importar  {  ComponentFixture ,  TestBed ,  waitForAsync  }  desde  '@angular/core/testing' ;
importar  {  IonicModule  }  desde  '@ionic/angular' ;

importar  {  RecetaPage  }  desde  './receta.page' ;

describir ( 'RecetaPage' ,  ( )  =>  {
  let  componente : RecetaPage ;
  let  fixture : ComponentFixture < RecetaPage > ;

  antes de Cada ( esperarAsync ( ( ) => {  
    banco de pruebas configureTestingModule ( {
      declaraciones : [  RecetaPage  ] ,
      importaciones : [ IonicModule . para Raíz ( ) ]
    } ) . compilarComponentes ( ) ;

    accesorio  =  TestBed . createComponent ( RecetaPage ) ;
    componente  =  accesorio . componenteInstancia ;
    accesorio _ detectar cambios ( ) ;
  } ) ) ;

  it ( 'debería crear' ,  ( )  =>  {
    esperar ( componente ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;

@ componente ( {
  selector : 'app-receta' ,
  templateUrl : './receta.page.html' ,
  styleUrls : [ './receta.page.scss' ] ,
} )
 clase de  exportación RecetaPage  implementa  OnInit  {

  constructor ( )  {  }

  ngOnInit ( )  {
  }

}

importar  {  TestBed  }  desde  '@angular/core/testing' ;

importar  {  RecetasService  }  desde  './recetas.service' ;

describir ( 'RecetasService' ,  ( )  =>  {
  dejar  servicio : RecetasService ;

  antes de cada ( ( )  =>  {
    banco de pruebas configureTestingModule ( { } ) ;
    servicio  =  TestBed . inyectar ( RecetasService ) ;
  } ) ;

  it ( 'debe ser creado' ,  ( )  =>  {
    esperar ( servicio ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

importar  {  Inyectable  }  desde  '@angular/core' ;
import  {  Receta  }  from  '../models/receta.model' ;

@ Inyectable ( {
  proporcionado en : 'raíz'
} )
export  class  RecetasService  {

  recetas : Receta [ ] = [
    {
      identificación : 1 , 
      nombre : 'Hamburguesa' , 
      imagen : 'https://i.blogs.es/58e562/hambruguesa/840_560.jpg' ,
      ingredientes : [ "120g Carne picada" ,  "2count Queso cheddar" ,  "Pepinillo" ,  "Cebolla morada" , "Lechuga" ]
    } ,
    {
      identificación : 2 , 
      nombre : 'Caldo de Pollo' , 
      imagen : 'https://t1.rg.ltmcdn.com/es/posts/8/1/2/caldo_de_pollo_casero_37218_orig.jpg' ,
      ingredientes : [ '1 cubito de rico pollo' ,
      '500 gramos de Pollo desmenuzado' ,
      '1 Diente de Ajo picado finalmente' ,
      'sal' ,
      'Pimienta' ,
      '1 Taza de Brócoli cocido y cortado en ramilletes pequeños' ,
      'Zanahoria picada' ]
    } ,
    {
      identificación : 3 , 
      nombre : 'Hot-Dog' , 
      imagen : 'https://www.collinsdictionary.com/images/full/hotdog_156787409_1000.jpg' ,
      ingredientes : [
        'Pan para perrito caliente'
, 'Salchichas'
, 'salsa de tomate'
, 'Mayonesa'
      ]
    } ,
    {
      identificación : 4 , 
      nombre : 'Gelatina' , 
      imagen : 'https://www.eluniversal.com.mx/sites/default/files/2019/11/29/gelatina.jpeg' ,
      ingredientes : [
        'Grenetina'
        , 'Agua caliente'
        , 'Azúcar'
      ]
    } ,
    {
      identificación : 5 ,
      nombre : 'Nieve' ,
      imagen : 'https://gourmetdemexico.com.mx/wp-content/uploads/2018/04/helados-de-sabores-.jpg' ,
      ingredientes : [
        'Saborizante de la nieve de nuestra eleccion' ,
        'Hielo' ,
        'Chocolate'
      ]
    }
  ] ;

  constructor ( )  {  }

  getReceta ( idReceta : numero ) {
    volver  { ... esto . Recetas . encontrar (
      ( receta : Receta )  => {
        devolver  receta . id  === idReceta
      }
    ) } ;
  }

  obtenerRecetas ( ) {
    volver  [ ... esto . recetas ] ;
  }

} 
