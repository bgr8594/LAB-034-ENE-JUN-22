{
    ruta : 'detalle-receta' ,
    loadChildren : ( )  =>  import ( './detalle-receta/detalle-receta.module' ) . luego (  m  =>  m . DetalleRecetaPageModule )
  } ,
  {
    ruta : 'pestañas' ,
    loadChildren : ( )  =>  importar ( './tabs/tabs.module' ) . entonces (  m  =>  m . TabsPageModule )
  } ,
  {
    ruta : 'menú flotante' ,
    loadChildren : ( )  =>  importar ( './menú-flotante/menú-flotante.módulo' ) . entonces (  m  =>  m . FloatMenuPageModule )
  } ,
  {
    ruta : 'pestañas' ,
    loadChildren : ( )  =>  importar ( './tabs/tabs.module' ) . entonces (  m  =>  m . TabsPageModule )
  }

] ;

< menú-flotante- aplicación > </ menú -flotante-aplicación >
< aplicación de iones >
  < salida del enrutador de iones > </ salida del enrutador de iones >
</ ion-aplicación >
  < ID de salida de enrutador de iones =" principal " > </ salida de enrutador de iones > 
</ ion-aplicación > 

importar  {  AppComponent  }  desde  './app.component' ;
importar  {  AppRoutingModule  }  desde  './app-routing.module' ;
import  {  ComponentesModule  }  desde  './componentes/componentes.module' ;

@NgModule ( { _
  declaraciones : [ AppComponent ] ,
  componentes de entrada : [ ] ,
  importaciones : [ BrowserModule ,  IonicModule . forRoot ( ) ,  AppRoutingModule , HttpClientModule  ] ,
  importaciones : [ ComponentModule , BrowserModule , IonicModule . forRoot ( ) , AppRoutingModule , HttpClientModule ] ,    
  proveedores : [ HttpClientModule , {  proporcionar : RouteReuseStrategy ,  useClass : IonicRouteStrategy  } ] ,
  arranque : [ Componente de la aplicación ] ,
} )

< pag >
  los componentes funcionan!
</ p >

importar  {  ComponentFixture ,  TestBed ,  waitForAsync  }  desde  '@angular/core/testing' ;
importar  {  IonicModule  }  desde  '@ionic/angular' ;

import  {  ComponentesComponent  }  from  './componentes.component' ;

describe ( 'ComponentesComponente' ,  ( )  =>  {
  let  componente : ComponentesComponent ;
  let  fixture : ComponentFixture < ComponentesComponent > ;

  antes de Cada ( esperarAsync ( ( ) => {  
    banco de pruebas configureTestingModule ( {
      declaraciones : [  ComponentesComponent  ] ,
      importaciones : [ IonicModule . para Raíz ( ) ]
    } ) . compilarComponentes ( ) ;

    accesorio  =  TestBed . crearComponente ( ComponenteComponente ) ;
    componente  =  accesorio . componenteInstancia ;
    accesorio _ detectar cambios ( ) ;
  } ) ) ;

  it ( 'debería crear' ,  ( )  =>  {
    esperar ( componente ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;

@ componente ( {
  selector : 'app-componentes' ,
  templateUrl : './componentes.component.html' ,
  styleUrls : [ './componentes.component.scss' ] ,
} )
exportar  clase  ComponentesComponent  implementa  OnInit  {

  constructor ( )  {  }

  ngOnInit ( )  { }

}

importar  {  NgModule  }  desde  '@angular/core' ;
importar  {  CommonModule  }  desde  '@angular/common' ;
importar  {  FloatMenuComponent  }  desde  '../float-menu/float-menu.component' ;


@NgModule ( { _
  declaraciones : [ FloatMenuComponent ] ,
  exportaciones : [ FloatMenuComponent ] ,
  importaciones : [
    CommonModule
  ]
} )
exportar  clase  ComponentesModule  {  } 

< cabeza de iones >
  < barra de herramientas de iones >
  < estilo de la barra de herramientas de iones =" margen superior: 40px; " > 
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

    importar  {  NgModule  }  desde  '@angular/core' ;
import  {  Rutas ,  RouterModule  }  desde  '@angular/router' ;

importar  {  FloatMenuPage  }  desde  './float-menu.page' ;

const  rutas : Rutas  =  [
  {
    camino : '' ,
    componente : FloatMenuPage
  }
] ;

@NgModule ( { _
  importaciones : [ RouterModule . forChild ( rutas ) ] ,
  exportaciones : [ RouterModule ] ,
} )
 clase de  exportación FloatMenuPageRoutingModule  { }

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

importar  {  ComponentFixture ,  TestBed ,  waitForAsync  }  desde  '@angular/core/testing' ;
importar  {  IonicModule  }  desde  '@ionic/angular' ;

importar  {  FloatMenuComponent  }  desde  './float-menu.component' ;

describir ( 'Componente de menú flotante' ,  ( )  =>  {
  dejar  componente : FloatMenuComponent ;
  let  fixture : ComponentFixture < FloatMenuComponent > ;

  antes de Cada ( esperarAsync ( ( ) => {  
    banco de pruebas configureTestingModule ( {
      declaraciones : [  FloatMenuComponent  ] ,
      importaciones : [ IonicModule . para Raíz ( ) ]
    } ) . compilarComponentes ( ) ;

    accesorio  =  TestBed . crear componente ( componente de menú flotante ) ;
    componente  =  accesorio . componenteInstancia ;
    accesorio _ detectar cambios ( ) ;
  } ) ) ;

  it ( 'debería crear' ,  ( )  =>  {
    esperar ( componente ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;
importar  {  Router  }  desde  '@angular/router' ;
importar  {  MenuElement  }  desde  'src/app/models/menu.model' ;

@ componente ( {
  selector : 'aplicación-menú-flotante' ,
  templateUrl : './float-menu.component.html' ,
  styleUrls : [ './float-menu.component.scss' ] ,
} )
 la clase de  exportación FloatMenuComponent  implementa  OnInit  {

  datosMenu : MenuElement [ ]  = [
    { nombre : 'casa' , enlace : '/casa' ,
    icono : 'home-outline' } ,
    { nombre : 'Alumnos' , enlace : '/alumnos' ,
  icono : 'esquema-escolar' } ,
    { nombre : 'Recetas' , enlace : '/receta' ,
    icono : 'esquema-restaurante' } ,
    { nombre : 'Presupuesto' , enlace : '/presupuesto' ,
    icono : 'cash-outline' } ,
    { nombre : 'inicio' , enlace : '/inicio' ,
    icono : 'navegar-contorno' } ,
    { nombre : 'Tabs' , enlace : '/tabs' ,
    icono : 'carpeta-esquema' }
  ] ;

  constructor ( enrutador privado  : Enrutador ) { }  

  ngOnInit ( )  { }

  navegar ( enlace : cadena ) {
    esto _ enrutador _ navegar ( [ enlace ] ) ;
  }
} 

importar  {  NgModule  }  desde  '@angular/core' ;
importar  {  CommonModule  }  desde  '@angular/common' ;
importar  {  FormsModule  }  desde  '@angular/forms' ;

importar  {  IonicModule  }  desde  '@ionic/angular' ;

import  {  FloatMenuPageRoutingModule  }  from  './float-menu-routing.module' ;

importar  {  FloatMenuPage  }  desde  './float-menu.page' ;

@NgModule ( { _
  importaciones : [
    módulo común ,
    Módulo de formularios ,
    módulo iónico ,
    FloatMenuPageRoutingModule
  ] ,
  declaraciones : [ FloatMenuPage ]
} )
exportar  clase  FloatMenuPageModule  { }

< cabeza de iones >
  < barra de herramientas de iones >
    < ion-title > menú flotante </ ion-title >
  </ ion-barra de herramientas >
</ cabeza de iones >

< contenido de iones >

</ contenido de iones >

importar  {  ComponentFixture ,  TestBed ,  waitForAsync  }  desde  '@angular/core/testing' ;
importar  {  IonicModule  }  desde  '@ionic/angular' ;

importar  {  FloatMenuPage  }  desde  './float-menu.page' ;

describir ( 'FloatMenuPage' ,  ( )  =>  {
  dejar  componente : FloatMenuPage ;
  let  fixture : ComponentFixture < FloatMenuPage > ;

  antes de Cada ( esperarAsync ( ( ) => {  
    banco de pruebas configureTestingModule ( {
      declaraciones : [  FloatMenuPage  ] ,
      importaciones : [ IonicModule . para Raíz ( ) ]
    } ) . compilarComponentes ( ) ;

    accesorio  =  TestBed . crear componente ( Página de menú flotante ) ;
    componente  =  accesorio . componenteInstancia ;
    accesorio _ detectar cambios ( ) ;
  } ) ) ;

  it ( 'debería crear' ,  ( )  =>  {
    esperar ( componente ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;

@ componente ( {
  selector : 'aplicación-menú-flotante' ,
  templateUrl : './float-menu.page.html' ,
  styleUrls : [ './float-menu.page.scss' ] ,
} )
 la clase de  exportación FloatMenuPage  implementa  OnInit  {

  constructor ( )  {  }

  ngOnInit ( )  {
  }

}

< encabezado de iones  [translúcido] =" verdadero " >
  < barra de herramientas de iones >
  < estilo de la barra de herramientas de iones =" margin-top:40px; " > 
    < título-ion >
      Vacío
    </ ion-título >
@@ -17,4 +17,4 @@
    < fuerte > ¿Listo para crear una aplicación? </ fuerte >
    < p > Comience con Ionic < a  target =" _blank " rel =" noopener noreferrer " href =" https://ionicframework.com/docs/components " > Componentes de la interfaz de usuario </ a > </ p >
  </ div >
</ contenido de iones >
</ contenido de iones > 

exportar  interfaz  MenuElement {
    nombre : cadena ;
    enlace : cadena ;
    icono : cuerda ;
} 

importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;
import  {  Receta  }  from  '../models/receta.model' ;
import  {  RecetasService  }  from  '../services/recetas.service' ;

@ componente ( {
  selector : 'app-receta' ,
@@ -7,9 +9,12 @@ importar { Componente, OnInit } desde '@angular/core';
} )
 clase de  exportación RecetaPage  implementa  OnInit  {

  constructor ( )  {  }
  recetas : Receta [ ] ;

  constructor ( private  recetaService : RecetasService )  {  }

  ngOnInit ( )  {
    esto _ recetas  =  esto . servicio de recetas . obtenerRecetas ( ) ;
  }

}
} 

importar  {  NgModule  }  desde  '@angular/core' ;
import  {  Rutas ,  RouterModule  }  desde  '@angular/router' ;

importar  {  TabsPage  }  desde  './tabs.page' ;

const  rutas : Rutas  =  [
  {
    camino : '' ,
    componente : TabsPage ,
    niños : [
      {
        ruta : 'alumnos' ,
        loadChildren : ( )  =>  import ( '../alumnos/alumnos.module' ) . luego ( m => m . AlumnosPageModule )
      }
      ,
      {
        ruta : 'recetas' ,
        loadChildren : ( )  =>  import ( '../receta/receta.module' ) . luego ( m => m . RecetaPageModule )
      } ,
      {
        camino : 'presupuesto' ,
        loadChildren : ( )  =>  import ( '../presupuesto/presupuesto.module' ) . luego ( m => m . PresupuestoPáginaModule )
      } ,
      {
        camino : '' ,
        redirectTo : '/tabs/alumnos' ,
        pathMatch : 'completo'
      }
    ]
  } ,
  {
    camino : '' ,
    redirectTo : '/tabs/alumnos' ,
    pathMatch : 'completo'
  }
] ;

@NgModule ( { _
  importaciones : [ RouterModule . forChild ( rutas ) ] ,
  exportaciones : [ RouterModule ] ,
} )
 clase de  exportación TabsPageRoutingModule  { } 
 importar  {  NgModule  }  desde  '@angular/core' ;
 importar  {  CommonModule  }  desde  '@angular/common' ;
 importar  {  FormsModule  }  desde  '@angular/forms' ;
 
 importar  {  IonicModule  }  desde  '@ionic/angular' ;
 
 importar  {  TabsPageRoutingModule  }  desde  './tabs-routing.module' ;
 
 importar  {  TabsPage  }  desde  './tabs.page' ;
 
 @NgModule ( { _
   importaciones : [
     módulo común ,
     Módulo de formularios ,
     módulo iónico ,
     TabsPageRoutingModule
   ] ,
   declaraciones : [ TabsPage ]
 } )
 exportar  clase  TabsPageModule  { } 

 < iones-pestañas >
  < ranura de la barra de pestañas de iones  =" parte inferior " >
      < ion-tab-button  tab =" alumnos " >
          < ion-icon  nombre =" contorno-escuela " > </ ion-icon >
          < ion-label > Alumnos </ ion-label >
      </ ion-tab-botón >

      < ion-tab-button  tab =" recetas " >
          < ion-icon  nombre =" restaurant-outline " > </ ion-icon >
          < ion-label > Recetas </ ion-label >
      </ ion-tab-botón >
      < ion-tab-button  tab =" presupuesto " >
        < ion-icon  nombre =" cash-outline " > </ ion-icon >
        < ion-label > Presupuesto </ ion-label >
    </ ion-tab-botón >
  </ ion-tab-bar >
</ iones-pestañas > 

importar  {  ComponentFixture ,  TestBed ,  waitForAsync  }  desde  '@angular/core/testing' ;
importar  {  IonicModule  }  desde  '@ionic/angular' ;

importar  {  TabsPage  }  desde  './tabs.page' ;

describir ( 'Página de pestañas' ,  ( )  =>  {
  dejar  componente : TabsPage ;
  let  fixture : ComponentFixture < TabsPage > ;

  antes de Cada ( esperarAsync ( ( ) => {  
    banco de pruebas configureTestingModule ( {
      declaraciones : [  TabsPage  ] ,
      importaciones : [ IonicModule . para Raíz ( ) ]
    } ) . compilarComponentes ( ) ;

    accesorio  =  TestBed . crear componente ( página de pestañas ) ;
    componente  =  accesorio . componenteInstancia ;
    accesorio _ detectar cambios ( ) ;
  } ) ) ;

  it ( 'debería crear' ,  ( )  =>  {
    esperar ( componente ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;

@ componente ( {
  selector : 'pestañas de la aplicación' ,
  templateUrl : './tabs.page.html' ,
  URL de estilo : [ './tabs.page.scss' ] ,
} )
 clase de  exportación TabsPage  implementa  OnInit  {

  constructor ( )  {  }

  ngOnInit ( )  {
  }

} 
