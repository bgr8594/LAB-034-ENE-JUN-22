</ ion-texto >
      </ ion-elemento >
      < ion-elemento-divisor >
          < ion-button  type =" enviar " type =" enviar " [deshabilitado] =" !(ionicForm.valid) " color =" primario " tamaño =" más grande " > Alta destino </ ion-button >
          < ion-button  type =" enviar " type =" enviar " [deshabilitado] =" !(ionicForm.valid) " color =" primario " tamaño =" más grande " > {{estado}} </ ion-button >
          < ion-button  *ngIf =" editando " type =" button " color =" peligro " size =" mayor " (click) =" cancelarEdicion() " > Cancelar </ ion-button >
      </ ion-elemento-divisor >
  </ formulario >

@@ -33,6 +34,12 @@ <h5>Campo necesario</h5>
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
@@ -42,9 +49,15 @@ <h5>Campo necesario</h5>
          </ ion-col >
          < ion-col >
              < ion-texto >
                  En construccion <!-- {{lugar.ubicacion}} -->
                  {{lugar.ubicacion}}
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

lugar : Lugar  =  nuevo  Lugar ( ) ;
  destinos : cualquier [ ]  =  [ ] ;
  forma iónica : grupo de formas ;
  estado : string  = "Alto destino" ;
  editando : booleano =  falso ;

  constructor ( private  lugarService : LugarService ,
    privado  formBuilder : FormBuilder )  {  }

  ngOnInit ( )  {
      esto _ construirForm ( ) ;
      esto _ lugarServicio . getLugares ( this . destinos ) ;
      esto _ lugarServicio . obtenerCambiosLugares ( ) . suscribirse ( resp  =>  {
        esto _ destinos  =  resp . mapa ( ( e : cualquiera )  =>  {
          volver  {
            identificación : e . carga útil doctor _ identificación ,
            nombre : e . carga útil doctor _ datos ( ) . nombre
          }
        } ) ;
        consola _ registro ( resp ) ;
      } ,  error  =>  {
        consola _ error ( error ) ;
      } ) ;
  }

  altaLugar ( ) {
    esto _ lugarServicio . altaLugar ( este . lugar ) ;
    esto _ lugarServicio . getLugares ( this . destinos ) ;
    // this.lugarService.getLugares(this.destinos);
    esto _ Forma iónica . restablecer ( ) ;
  }

  enviarFormulario ( ) {
    if ( este . ionicForm . válido ) {
      esto _ lugar _ nombre  =  esto . Forma iónica . obtener ( 'nombre' ) . valor ;
      esto _ altaLugar ( ) ;
      if ( ! esta . editando ) {
        esto _ lugar _ nombre  =  esto . Forma iónica . obtener ( 'nombre' ) . valor ;
        esto _ lugarServicio . altaLugar ( este . lugar ) . luego ( ( e : cualquiera ) => {
          esto _ Forma iónica . restablecer ( ) ;
        } ) . atrapar ( e => {
          consola _ error ( e ) ;
        } ) ;        
      }  más {
        esto _ lugar _ nombre  =  esto . Forma iónica . obtener ( 'nombre' ) . valor ;
        esto _ lugarServicio . actualizarLugares ( este . lugar . id ,  este . lugar ) . entonces ( e => {
          esto _ editando =  falso ;
          esto _ estado  =  "Alto destino" ;
          esto _ lugar  =  nuevo  Lugar ( ) ;
          esto _ Forma iónica . restablecer ( ) ;
        } ) . atrapar ( e => {
          consola _ error ( e ) ;
        } ) ;
      }
    }
  }

@@ -47,4 +75,25 @@ exportar clase DestinosPage implementa OnInit {
      esto _ Forma iónica . controla [ nombre del control ] . tocado ;
  }

  editarLugar ( id : any ,  lugar : any )  {
    esto _ editando  =  verdadero ;
    esto _ lugar  =  lugar ;
    esto _ estado  =  "Editar el lugar" ;
    esto _ Forma iónica . obtener ( 'nombre' ) . setValor ( lugar.nombre ) ; _ _
  }

  eliminarLugar ( id : any )  {
    esto _ estado  =  "Alto destino" ;
    esto _ editando  =  falso ;
    esto _ Forma iónica . restablecer ( ) ;
    esto _ lugarServicio . eliminarLugar ( id ) ;
  }

  cancelarEdicion ( ) {
    esto _ estado  =  "Alto destino" ;
    esto _ editando  =  falso ;
    esto _ Forma iónica . restablecer ( ) ;
    esto _ lugar  =  nuevo  Lugar ( ) ;
  }  

} 

exportar  clase  Lugar  {
    nombre : cadena ;
    identificación ?: cadena ;

    ubicacion ?: { latitud : cadena ,  longitud : cadena }

        constructor ( ) {
            esto _ nombre = ''
        }
        public  setUbicacion ( latitud : string ,  Longiutd : string ) {
            esto _ ubicación . latitud =  latitud ;
            esto _ ubicación . longitud  =  Longiutd ;
        }
}

nombre : lugar . nombre ,
ubicacion : { longitud : '' ,  latitud : '' }
} ;
esto _ dbFirestore . colección ( 'lugar' ) . add ( lugarTemp ) ;
devolver esto . dbFirestore . colección ( 'lugar' ) . add ( lugarTemp ) ; 
}

async  getLugares ( destinos : Lugar [ ] ) {
@@ -35,4 +35,17 @@ exportar clase LugarServicio {
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