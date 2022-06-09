exportar  interfaz  Gasto  {
    monto : numero ;
    descripcion : cadena ;
    tipo : cadena ;
    identificación ?: número ;
  } 

  < encabezado de iones  [translúcido] =" verdadero " >
  < barra de herramientas de iones >
      < título-ion >
          Presupuesto
      </ ion-título >
  </ ion-barra de herramientas >
</ cabeza de iones >

< contenido de iones  [pantalla completa] =" verdadero " >
  < Colapso del encabezado de iones  =" condensar " >
      < barra de herramientas de iones >
          < ion-title  size =" large " > Presupuesto </ ion-title >
      </ ion-barra de herramientas >
    < barra de herramientas de iones >
        < título-ion >
            Presupuesto
        </ ion-título >
    </ ion-barra de herramientas >
  </ cabeza de iones >
  < lista de iones >
      < encabezado de lista de iones >

  < contenido de iones  [pantalla completa] =" verdadero " >
    < Colapso del encabezado de iones  =" condensar " >
        < barra de herramientas de iones >
            < ion-title  size =" large " > Presupuesto </ ion-title >
        </ ion-barra de herramientas >
    </ cabeza de iones >
    < lista de iones >
        < encabezado de lista de iones >
            < etiqueta de iones >
                tipo de astos y monto
            </ ion-etiqueta >
        </ encabezado-lista-de-iones >
        < elemento de iones >
            < ion-label > Gastos </ ion-label >
            < ion-select  [(ngModel)] =" valor seleccionado " multiple =" false " (ionChange) =" cambioValor(selectedValue) " >
                < ion-select-option  [valor] =" opción " *ngFor =" let opción de gastos " > {{opción}}
                </ ion-seleccionar-opción >
            </ selección de iones >

        </ ion-elemento >
        < elemento de iones >
            < etiqueta de iones >
                monto:
            </ ion-etiqueta >
            < ion-input  type =" number " [(ngModel)] =" monto " placeholder =" Ingrese el monto " > </ ion-input >
        </ ion-elemento >
        < elemento de iones >
          < etiqueta de iones >
              tipo de astos y monto
              Descripción:
          </ ion-etiqueta >
      </ encabezado-lista-de-iones >
      < elemento de iones >
          < ion-label > Gastos </ ion-label >
          < ion-select  [(ngModel)] =" valor seleccionado " multiple =" false " (ionChange) =" cambioValor(selectedValue) " >
              < ion-select-option  [valor] =" opción " *ngFor =" let opción de gastos " > {{opción}}
              </ ion-seleccionar-opción >
          </ selección de iones >
          < ion-input  type =" text " [(ngModel)] =" descripcion " placeholder =" Ingrese la descripcion " > </ ion-input >
      </ ion-elemento >
      < elemento de iones >
          < etiqueta de iones >
              monto:
          </ ion-etiqueta >
          < ion-input  type =" number " [(ngModel)] =" monto " placeholder =" Ingrese el monto " > </ ion-input >
      </ ion-elemento >
      < elemento de iones >
          < ion-button  type =" button " (clic) =" guardar() " > Guardar </ ion-button >
      </ ion-elemento >
      < elemento de iones >
          < ion-label > Resultados </ ion-label >
          < ion-textarea  color =" {{errResultados}} " [(ngModel)] =" resultados " clearOnEdit =" true " readonly =" true " > </ ion-textarea >
      </ ion-elemento >
  </ lista de iones >
</ contenido de iones > 
        < elemento de iones >
            < ion-button  type =" button " (clic) =" guardar() " > Guardar </ ion-button >
        </ ion-elemento >
        < elemento de iones >
            < ion-label > Resultados </ ion-label >
            < ion-textarea  color =" {{errResultados}} " [(ngModel)] =" resultados " clearOnEdit =" true " readonly =" true " > </ ion-textarea >
        </ ion-elemento >
    </ lista de iones >
    < ion-grid  *ngIf =" gasotsList.length>0 " >
      < fila de iones >
          < ion-col  tamaño =" 1 " > id </ ion-col >
          < ion-col  size =" 5 " > Descripcion </ ion-col >
          < tamaño ion-col  =" 2 " > Monto </ ion-col >
          < ion-col  tamaño =" 3 " > Tipo </ ion-col >
          < ion-col  tamaño =" 1 " > </ ion-col >
      </ fila de iones >
      < ion-row  *ngFor =" let gasto of gasotsList " >
          < ion-col  tamaño =" 1 " >
              {{gasto.id}}
          </ ion-col >
          < ion-col  tamaño =" 5 " >
              {{gasto.descripcion}}
          </ ion-col >
          < ion-col  tamaño =" 2 " >
              {{gasto.monto}}
          </ ion-col >
          < ion-col  tamaño =" 3 " >
              {{gasto.tipo}}
          </ ion-col >
          < tamaño ion-col  =" 1 " (clic) =" borrarGasto(gasto.id) " > X </ ion-col >
      </ fila de iones >
  </ rejilla de iones >
  </ contenido de iones > 

  @@ -1,4 +1,6 @@
importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;
import  {  Gasto  }  from  '../models/gastos.models' ;
import  {  GastosService  }  from  '../services/gastos.service' ;

@ componente ( {
  selector : 'app-presupuesto' ,
@@ -11,10 +13,12 @@ export clase PresupuestoPage implementa OnInit {
   gastos publicos : string [ ] = [ 'Directos' , 'Fijos' ,  'Variables' ] ;
   valor seleccionado público : cualquiera ;
   monto publico : numero ;
  public  gasotsList : Gasto [ ] = [ ] ;
   resultados públicos : cadena ;
   descripción pública : cadena ;
  public  errResultados : string = 'light' ;

  constructor ( )  {  }
  constructor ( private gastosService : GastosService ) { }   

  ngOnInit ( )  {
  }
@@ -28,16 +32,30 @@ export clase PresupuestoPage implementa OnInit {
  cambioValor ( value ) {
    consola _ registro ( valor ) ;
  }

  Guardar ( ) {
    esto _ resultados  = "" ;
    if ( este . monto != nulo && este . valorSeleccionado ! = nulo ) {  
    if ( this . monto != null  &&  this . selectedValue != null && this . descripcion != null ) {   
      esto _ errResultados  =  'éxito' ;
      esto _ resultados  =  'Gasto seleccionado: ' + este . valorseleccionado + '\nMonto:' + esto . monto + '\n' ;
      esto _ resultados  =  'Gasto seleccionado: ' + este . valorseleccionado + '\nMonto:' + esto . monto + '\n' +
      'Descripción: ' + esto . descripcion ;
      sea  ​​gasto : Gasto  =  {
      descripcion : este . descripción ,
      tipo : esto . valorseleccionado ,
      monto : esto . cantidad
    }
      esto _ gastosServicio . agregar ( gasto ) ;
      esto _ gasotsList  =  esto . gastosServicio . obtenerGastos ( ) ;
    }
    más {
      esto _ errResultados  =  'peligro' ;
      esto _ resultados  = "No se completaron los campos del formulario" ;
    }
  }  
  }

  borrarGasto ( idGasto : numero ) {
    esto _ gastosServicio . borrarGasto ( idGasto ) ;
    esto _ gasotsList  =  esto . gastosServicio . obtenerGastos ( ) ;
  }

}

importar  {  TestBed  }  desde  '@angular/core/testing' ;

import  {  GastosService  }  from  './gastos.service' ;

describe ( 'GastosServicio' ,  ( )  =>  {
  dejar  servicio : GastosService ;

  antes de cada ( ( )  =>  {
    banco de pruebas configureTestingModule ( { } ) ;
    servicio  =  TestBed . inyectar ( GastosService ) ;
  } ) ;

  it ( 'debe ser creado' ,  ( )  =>  {
    esperar ( servicio ) . aBeTruthy ( ) ;
  } ) ;
} ) ;

importar  {  Inyectable  }  desde  '@angular/core' ;
import  {  Gasto  }  from  '../models/gastos.models' ;

@ Inyectable ( {
  proporcionado en : 'raíz'
} )
exportar  clase  GastosService  {

  gastos : Gasto [ ] = [ ] ;

  constructor ( )  {  }

  agregar ( gasto : Gasto ) {
    if ( este . gastos . longitud == 0 ) {
      gasto _ identificación  =  1 ;
    }  más {
      gasto _ identificación  =  esto . gastos _ longitud  +  1 ;
    }
    esto _ gastos _ empujar ( gasto ) ;
  }

  borrarGasto ( idGasto : numero ) {
    esto _ gastos  = 
    esto _ gastos _ filtro ( ( gasto ) => gasto . id != idGasto ) ;
  }

  obtenerGastos ( ) {
    devolver  esto . gastos ;
  }

} 
