< cabeza de iones >
< encabezado de iones [translúcido] =" verdadero " > 
  < barra de herramientas de iones >
    < ion-title > presupuesto </ ion-title >
      < título-ion >
          Presupuesto
      </ ion-título >
  </ ion-barra de herramientas >
</ cabeza de iones >

< contenido de iones >

</ contenido de iones >
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
          < ion-button  type =" button " (clic) =" guardar() " > Guardar </ ion-button >
      </ ion-elemento >
      < elemento de iones >
          < ion-label > Resultados </ ion-label >
          < ion-textarea  color =" {{errResultados}} " [(ngModel)] =" resultados " clearOnEdit =" true " readonly =" true " > </ ion-textarea >
      </ ion-elemento >
  </ lista de iones >
</ contenido de iones > 

importar  {  Componente ,  OnInit  }  desde  '@angular/core' ;
@ componente ( {
  selector : 'app-presupuesto' ,
  templateUrl : './presupuesto.page.html' ,
  styleUrls : [ './presupuesto.page.scss' ] ,
} )
export  clase  PresupuestoPage  implementa  OnInit  {


   gastos publicos : string [ ] = [ 'Directos' , 'Fijos' ,  'Variables' ] ;
   valor seleccionado público : cualquiera ;
   monto publico : numero ;
   resultados públicos : cadena ;
  public  errResultados : string = 'light' ;

  constructor ( )  {  }

  ngOnInit ( )  {
  }

  customPopoverOptions : cualquiera  =  {
    header : 'Seleccion de gasots' ,
    subHeader : 'Seleccione el tipo de gasto' ,
    mensaje : 'Solo seleccione un tipo de gasto'
  } ;

  cambioValor ( value ) {
    consola _ registro ( valor ) ;
  }
  Guardar ( ) {
    esto _ resultados  = "" ;
    if ( este . monto != nulo && este . valorSeleccionado ! = nulo ) {  
      esto _ errResultados  =  'éxito' ;
      esto _ resultados  =  'Gasto seleccionado: ' + este . valorseleccionado + '\nMonto:' + esto . monto + '\n' ;
    }
    más {
      esto _ errResultados  =  'peligro' ;
      esto _ resultados  = "No se completaron los campos del formulario" ;
    }
  }  

}