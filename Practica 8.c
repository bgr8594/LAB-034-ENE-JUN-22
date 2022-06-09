# Este archivo es utilizado por el sistema de compilación para ajustar la salida CSS y JS para admitir los navegadores especificados a continuación.
# Para obtener información adicional sobre las opciones de formato y regla, consulte:
# https://github.com/browserslist/browserslist#consultas

# Para obtener la lista completa de navegadores admitidos por el marco Angular, consulte:
# https://angular.io/guide/browser-support

# Puede ver qué navegadores fueron seleccionados por sus consultas ejecutando:
# lista de navegadores npx

última  1  versión de Chrome 
última  1  versión de Firefox 
últimas  2  versiones principales de Edge  
últimas  2  versiones principales de Safari  
últimas  2  versiones principales de iOS  
 ESR de Firefox
no  IE  11  # Angular admite IE 11 solo como opción. Para participar, elimine el prefijo "no" en esta línea.

# Configuración del editor, consulte https://editorconfig.org
raíz = verdadero

[ * ]
juego de caracteres = utf-8
estilo_guión = espacio
tamaño_guión = 2
insert_final_newline = verdadero
trim_trailing_whitespace = verdadero

[ * .ts ]
quote_type = único

[ * .md ]
max_line_length = desactivado
trim_trailing_whitespace = falso

{
  "raíz" : verdadero ,
  "ignorePatterns" : [ "proyectos/**/*" ] ,
  "anula" : [
    {
      "archivos" : [ "*.ts" ] ,
      "opciones del analizador" : {
        "proyecto" : [ "tsconfig.json" ,  "e2e/tsconfig.json" ] ,
        "crear programa predeterminado" : verdadero
      } ,
      "extiende" : [
        "complemento:@angular-eslint/ng-cli-compat" ,
        "complemento:@angular-eslint/ng-cli-compat--formatting-add-on" ,
        "complemento:@angular-eslint/template/process-inline-templates"
      ] ,
      "reglas" : {
        "@angular-eslint/componente-clase-sufijo" : [
          "error" ,
          {
            "sufijos" : [ "Página" ,  "Componente" ]
          }
        ] ,
        "@angular-eslint/componente-selector" : [
          "error" ,
          {
            "tipo" : "elemento" ,
            "prefijo" : "aplicación" ,
            "estilo" : "caja de kebab"
          }
        ] ,
        "@angular-eslint/directive-selector" : [
          "error" ,
          {
            "tipo" : "atributo" ,
            "prefijo" : "aplicación" ,
            "estilo" : "Caso camello"
          }
        ]
      }
    } ,
    {
      "archivos" : [ "*.html" ] ,
      "extiende" : [ "plugin:@angular-eslint/template/recommended" ] ,
      "reglas" : { }
    }
  ]
}

# Especifica archivos intencionalmente no rastreados para ignorar cuando se usa Git
# http://git-scm.com/docs/gitignore

* ~
* .sw [ mnpcod ]
.tmp
* .tmp
* .tmp. *
* .sublime-proyecto
* .sublime-espacio de trabajo
.DS_Tienda
Pulgares.db
UserInterfaceState.xcuserstate
$RECICLAJE.BIN /

* .registro
registro.txt
npm-debug.log *

/ .angular
/ .idea
/ .ionic
/ .sass-cache
/ .sourcemaps
/ .versiones
/ .vscode
/ cobertura
/ dist
/ node_modules
/ plataformas
/ complementos
/ www
.node_modules

{
  "$esquema" : " ./node_modules/@angular/cli/lib/config/schema.json " ,
  "versión" : 1 ,
  "proyecto predeterminado" : " aplicación " ,
  "newProjectRoot" : " proyectos " ,
  "proyectos" : {
    "aplicación" : {
      "raíz" : " " ,
      "sourceRoot" : " origen " ,
      "tipo de proyecto" : " aplicación " ,
      "prefijo" : " aplicación " ,
      "esquemas" : {},
      "arquitecto" : {
        "construir" : {
          "constructor" : " @angular-devkit/build-angular:navegador " ,
          "opciones" : {
            "ruta de salida" : " www " ,
            "índice" : " src/index.html " ,
            "principal" : " src/main.ts " ,
            "polyfills" : " src/polyfills.ts " ,
            "tsConfig" : " tsconfig.app.json " ,
            "activos" : [
              {
                "globo" : " **/* " ,
                "entrada" : " origen/activos " ,
                "salida" : " activos "
              },
              {
                "globo" : " **/*.svg " ,
                "entrada" : " node_modules/ionicons/dist/ionicons/svg " ,
                "salida" : " ./svg "
              }
            ],
            "estilos" : [ " src/theme/variables.scss " , " src/global.scss " ],
            "guiones" : [],
            "mucho" : falso ,
            "vendorChunk" : verdadero ,
            "ExtractLicenses" : falso ,
            "buildOptimizer" : falso ,
            "sourceMap" : verdadero ,
            "optimización" : falso ,
            "Chunks con nombre" : verdadero
          },
          "configuraciones" : {
            "producción" : {
              "reemplazos de archivo" : [
                {
                  "reemplazar" : " src/environments/environment.ts " ,
                  "con" : " src/environments/environment.prod.ts "
                }
              ],
              "optimización" : verdadero ,
              "outputHashing" : " todos " ,
              "sourceMap" : falso ,
              "Chunks con nombre" : falso ,
              "mucho" : cierto ,
              "ExtractLicenses" : verdadero ,
              "vendorChunk" : falso ,
              "buildOptimizer" : verdadero ,
              "presupuestos" : [
                {
                  "tipo" : " inicial " ,
                  "advertencia máxima" : " 2mb " ,
                  "Error máximo" : " 5mb "
                }
              ]
            },
            "ci" : {
              "progreso" : falso
            }
          }
        },
        "servir" : {
          "constructor" : " @angular-devkit/build-angular:dev-server " ,
          "opciones" : {
            "browserTarget" : " aplicación: compilación "
          },
          "configuraciones" : {
            "producción" : {
              "browserTarget" : " aplicación: compilación: producción "
            },
            "ci" : {
              "progreso" : falso
            }
          }
        },
        "extraer-i18n" : {
          "constructor" : " @angular-devkit/build-angular:extract-i18n " ,
          "opciones" : {
            "browserTarget" : " aplicación: compilación "
          }
        },
        "prueba" : {
          "constructor" : " @angular-devkit/build-angular:karma " ,
          "opciones" : {
            "principal" : " src/test.ts " ,
            "polyfills" : " src/polyfills.ts " ,
            "tsConfig" : " tsconfig.spec.json " ,
            "karmaConfig" : " karma.conf.js " ,
            "estilos" : [],
            "guiones" : [],
            "activos" : [
              {
                "glob" : " favicon.ico " ,
                "entrada" : " origen/ " ,
                "salida" : " / "
              },
              {
                "globo" : " **/* " ,
                "entrada" : " origen/activos " ,
                "salida" : " /activos "
              }
            ]
          },
          "configuraciones" : {
            "ci" : {
              "progreso" : falso ,
              "reloj" : falso
            }
          }
        },
        "pelusa" : {
          "constructor" : " @angular-eslint/constructor:lint " ,
          "opciones" : {
            "lintFilePatterns" : [
              " src/**/*.ts " ,
              " src/**/*.html "
            ]
          }
        },
        "e2e" : {
          "constructor" : " @angular-devkit/build-angular:transportador " ,
          "opciones" : {
            "transportadorConfig" : " e2e/transportador.conf.js " ,
            "devServerTarget" : " aplicación:servir "
          },
          "configuraciones" : {
            "producción" : {
              "devServerTarget" : " aplicación:servicio:producción "
            },
            "ci" : {
              "devServerTarget" : " aplicación: servir: ci "
            }
          }
        },
        "construcción iónica-cordova" : {
          "constructor" : " @ionic/angular-toolkit:cordova-build " ,
          "opciones" : {
            "browserTarget" : " aplicación: compilación "
          },
          "configuraciones" : {
            "producción" : {
              "browserTarget" : " aplicación: compilación: producción "
            }
          }
        },
        "servicio-ionic-cordova" : {
          "constructor" : " @ionic/angular-toolkit:cordova-serve " ,
          "opciones" : {
            "cordovaBuildTarget" : " aplicación: ionic-cordova-build " ,
            "devServerTarget" : " aplicación:servir "
          },
          "configuraciones" : {
            "producción" : {
              "cordovaBuildTarget" : " aplicación: ionic-cordova-build: producción " ,
              "devServerTarget" : " aplicación:servicio:producción "
            }
          }
        }
      }
    }
  },
  "cli" : {
    "defaultCollection" : " @ionic/angular-toolkit "
  },
  "esquemas" : {
    "@ionic/angular-toolkit: componente" : {
      "estiloext" : " scss "
    },
    "@ionic/angular-toolkit:página" : {
      "estiloext" : " scss "
    }
  }
}

importar  {  CapacitorConfig  }  desde  '@capacitor/cli' ;

const  config : CapacitorConfig  =  {
  ID de aplicación : ' io.ionic.arrancador ' ,
  appName : 'ionic-basic' ,
  dirección web : 'www' ,
  tiempo de ejecución web incluido : falso
} ;

exportar  configuración predeterminada  ;

// @ts- cheque
// Archivo de configuración del transportador, consulte el enlace para obtener más información
// https://github.com/angular/transportador/blob/master/lib/config.ts

const  { SpecReporter , StacktraceOption }  =  require ( 'jasmine-spec-reporter' ) ;

/**
* @type { import("transportador").Config }
*/
exportaciones _ configuración  =  {
  allScriptsTimeout : 11000 ,
  especificaciones : [
    './src/**/*.e2e-spec.ts'
  ] ,
  capacidades : {
    nombre del navegador : 'chrome'
  } ,
  DirectConnect : verdadero ,
  SELENIUM_PROMISE_MANAGER : falso ,
  baseUrl : 'http://localhost:4200/' ,
  marco : 'jazmín' ,
  jasmineNodeOpts : {
    mostrarColores : verdadero ,
    intervalo de tiempo de espera predeterminado : 30000 ,
    imprimir : función ( )  { }
  } ,
  enPreparar ( )  {
    requiere ( 'ts-node' ) . registrar ( {
      proyecto : require ( 'ruta' ) . unirse ( __dirname ,  './tsconfig.json' )
    } ) ;
    jazmín _ getEnv ( ) . addReporter ( nuevo  SpecReporter ( {
      especificación : {
        displayStacktrace : StacktraceOption . BONITA
      }
    } ) ) ;
  }
} ;

importar  {  AppPage  }  desde  './app.po' ;

describe ( 'nueva aplicación' ,  ( )  =>  {
  dejar  página : AppPage ;

  antes de cada ( ( )  =>  {
    página  =  nueva página  de aplicación ( ) ;
  } ) ;

  it ( 'debe estar en blanco' ,  ( )  =>  {
    página _ navegar a ( ) ;
    esperar ( página . getParagraphText ( ) ) . toContain ( 'Comenzar con los componentes de la interfaz de usuario de Ionic' ) ;
  } ) ;
} ) ;

importar  {  navegador ,  por ,  elemento  }  de  'transportador' ;

 clase de  exportación AppPage  {
  navegar a ( )  {
    volver  al navegador . obtener ( '/' ) ;
  }

  obtenerTextoDePárrafo ( )  {
     elemento de retorno ( por . deepCss ( 'app-root ion-content' ) ) . obtenerTexto ( ) ;
  }
}

{
    "extiende" : "../tsconfig.json" ,
    "opciones del compilador" : {
      "outDir" : "../out-tsc/e2e" ,
      "módulo" : "commonjs" ,
      "objetivo" : "es2018" ,
      "tipos" : [
        "jazmín" ,
        "nodo"
      ]
    }
  }

  {
    "nombre" : " iónico-básico " ,
    "integraciones" : {
      "condensador" : {}
    },
    "tipo" : " angular "
  }

  // Archivo de configuración de Karma, ver enlace para más información
// https://karma-runner.github.io/1.0/config/configuration-file.html

módulo _ exportaciones  =  función  ( config )  {
    configuración _ conjunto ( {
      ruta base : '' ,
      marcos : [ 'jasmine' ,  '@angular-devkit/build-angular' ] ,
      complementos : [
        require ( 'karma-jasmine' ) ,
        requiere ( 'karma-chrome-launcher' ) ,
        Requerir ( 'karma-jasmine-html-reporter' ) ,
        require ( 'cobertura de karma' ) ,
        requiere ( '@angular-devkit/build-angular/plugins/karma' )
      ] ,
      cliente : {
        jazmín : {
          // puede agregar opciones de configuración para Jasmine aquí
          // las posibles opciones se enumeran en https://jasmine.github.io/api/edge/Configuration.html
          // por ejemplo, puedes deshabilitar la ejecución aleatoria con `random: false`
          // o establece una semilla específica con `seed: 4321`
        } ,
        clearContext : falso  // deja la salida de Jasmine Spec Runner visible en el navegador
      } ,
      jasmineHtmlReportero : {
        suprimirTodo : verdadero  // elimina los rastros duplicados
      } ,
      Reportero de cobertura : {
        dir : require ( 'ruta' ) . unirse ( __dirname ,  './cobertura/ngv' ) ,
        subdirectorio : '.' ,
        reporteros : [
          {  tipo : 'html'  } ,
          {  tipo : 'texto-resumen'  }
        ]
      } ,
      reporteros : [ 'progreso' ,  'kjhtml' ] ,
      puerto : 9876 ,
      colores : verdadero ,
      nivel de registro : config . LOG_INFO ,
      reloj automático : verdadero ,
      navegadores : [ 'Chrome' ] ,
      ejecución única : falso ,
      reiniciar en el cambio de archivo : verdadero
    } ) ;
  } ;

  {
    "nombre" : " iónico-básico " ,
    "versión" : " 0.0.1 " ,
    "autor" : " Marco iónico " ,
    "página de inicio" : " https://ionicframework.com/ " ,
    "guiones" : {
      "ng" : " ng " ,
      "inicio" : " servicio ng " ,
      "construir" : " ng construir " ,
      "prueba" : " prueba ng " ,
      "pelusa" : " ng pelusa " ,
      "e2e" : " ng e2e "
    },
    "privado" : cierto ,
    "dependencias" : {
      "@angular/común" : " ~13.0.0 " ,
      "@angular/núcleo" : " ~13.0.0 " ,
      "@angular/formularios" : " ~13.0.0 " ,
      "@angular/navegador de plataforma" : " ~13.0.0 " ,
      "@angular/plataforma-navegador-dinámico" : " ~13.0.0 " ,
      "@angular/enrutador" : " ~13.0.0 " ,
      "@condensador/aplicación" : " 1.1.0 " ,
      "@condensador/núcleo" : " 3.4.0 " ,
      "@condensador/hápticos" : " 1.1.4 " ,
      "@condensador/teclado" : " 1.2.1 " ,
      "@condensador/barra de estado" : " 1.0.7 " ,
      "@ionic/angular" : " ^6.0.0 " ,
      "fuego angular2" : " ^5.4.2 " ,
      "base de fuego" : " ^7.24.0 " ,
      "rxjs" : " ~6.6.0 " ,
      "tslib" : " ^2.2.0 " ,
      "zona.js" : " ~0.11.4 "
    },
    "Dependencias de desarrollo" : {
      "@angular-devkit/build-angular" : " ~13.0.1 " ,
      "@angular-eslint/constructor" : " ~13.0.1 " ,
      "@angular-eslint/eslint-plugin" : " ~13.0.1 " ,
      "@angular-eslint/eslint-plugin-template" : " ~13.0.1 " ,
      "@angular-eslint/template-parser" : " ~13.0.1 " ,
      "@angular/cli" : " 13.0.4 " ,
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
      "ts-nodo" : " ~8.3.0 " ,
      "mecanografiado" : " ~4.4.4 "
    },
    "description" : " Un proyecto iónico "
  }

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

importar  {  NgModule  }  desde  '@angular/core' ;
import  {  PreloadAllModules ,  RouterModule ,  Routes  }  from  '@angular/router' ;
importar  {  AuthGuard  }  desde  './guards/auth.guard' ;

const  rutas : Rutas  =  [
  {
    camino : 'casa' ,
    loadChildren : ( )  =>  import ( './home/home.module' ) . luego (  m  =>  m . HomePageModule )
  } ,
  {
    camino : '' ,
    redirigir a : 'casa' ,
    pathMatch : 'completo'
  } ,
  {
    ruta : 'presupuesto' ,  canActivate : [ AuthGuard ] ,
    loadChildren : ( )  =>  import ( './presupuesto/presupuesto.module' ) . luego (  m  =>  m . PresupuestoPáginaModule )
  } ,
  {
    ruta : 'alumnos' ,  canActivate : [ AuthGuard ] ,
    loadChildren : ( )  =>  import ( './alumnos/alumnos.module' ) . luego (  m  =>  m . AlumnosPageModule )
  } ,
  {
    ruta : 'inicio' ,  canActivate : [ AuthGuard ] ,
    loadChildren : ( )  =>  importar ( './inicio/inicio.module' ) . luego (  m  =>  m . InicioPageModule )
  } ,
  {
    ruta : 'receptor' ,  canActivate : [ AuthGuard ] ,
    loadChildren : ( )  =>  import ( './receptor/receptor.módulo' ) . luego (  m  =>  m . ReceiverPageModule )
  } ,
  {
    ruta : 'receta' ,  canActivate : [ AuthGuard ] ,
    loadChildren : ( )  =>  importar ( './receta/receta.module' ) . luego (  m  =>  m . RecetaPageModule )
  } ,
  {
    ruta : 'detalle-receta' ,  canActivate : [ AuthGuard ] ,
    loadChildren : ( )  =>  import ( './detalle-receta/detalle-receta.module' ) . luego (  m  =>  m . DetalleRecetaPageModule )
  } ,
  {
    ruta : 'pestañas' ,  canActivate : [ AuthGuard ] ,
    loadChildren : ( )  =>  importar ( './tabs/tabs.module' ) . entonces (  m  =>  m . TabsPageModule )
  } ,
  {
    ruta : 'registrarse' ,
    loadChildren : ( )  =>  importar ( './registrar/registrar.módulo' ) . luego (  m  =>  m . RegisterPageModule )
  } ,
  {
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

< menú-flotante- aplicación > </ menú -flotante-aplicación >
< aplicación de iones >
  < ID de salida de enrutador de iones  =" principal " > </ salida de enrutador de iones >
</ ion-aplicación > 

importar  {  CUSTOM_ELEMENTS_SCHEMA  }  desde  '@angular/core' ;
importar  {  TestBed ,  waitForAsync  }  desde  '@angular/core/testing' ;

importar  {  AppComponent  }  desde  './app.component' ;

describir ( 'AppComponent' ,  ( )  =>  {

  antes de Cada ( esperarAsync ( ( ) => {  

    banco de pruebas configureTestingModule ( {
      declaraciones : [ AppComponent ] ,
      esquemas : [ CUSTOM_ELEMENTS_SCHEMA ] ,
    } ) . compilarComponentes ( ) ;
  } ) ) ;

  it ( 'debería crear la aplicación' ,  ( )  =>  {
    const  fixture  =  TestBed . crear componente ( componente de aplicación ) ;
     aplicación  const =  accesorio . elemento de depuración . componenteInstancia ;
    esperar ( aplicación ) . aBeTruthy ( ) ;
  } ) ;
  // TODO: ¡añadir más pruebas!

} ) ;

importar  {  Componente  }  desde  '@angular/core' ;

@ componente ( {
  selector : 'raíz de la aplicación' ,
  templateUrl : 'aplicación.componente.html' ,
  URL de estilo : [ 'aplicación.componente.scss' ] ,
} )
exportar  clase  AppComponent  {
  constructor ( )  { }
}
importar  {  NgModule  }  desde  '@angular/core' ;
importar  {  ModuloNavegador  }  desde  '@angular/plataforma-navegador' ;
importar  {  RouteReuseStrategy  }  desde  '@angular/router' ;
importar  {  HttpClientModule  }  desde  '@angular/common/http' ;
importar  {  IonicModule ,  IonicRouteStrategy ,  NavParams  }  desde  '@ionic/angular' ;

importar  {  AppComponent  }  desde  './app.component' ;
importar  {  AppRoutingModule  }  desde  './app-routing.module' ;
import  {  ComponentesModule  }  desde  './componentes/componentes.module' ;
importar  { AngularFireModule }  desde  'angularfire2' ;
importar  { AngularFireAuthModule }  desde  'angularfire2/auth' ;
import  {  entorno  }  desde  'src/environments/environment' ;

@NgModule ( { _
  declaraciones : [ AppComponent ] ,
  componentes de entrada : [ ] ,
  importaciones : [ ComponentModule ,  BrowserModule ,  IonicModule . para Raíz ( ) ,  AppRoutingModule , HttpClientModule ,
    AngularFireModule . initializeApp ( entorno . firebaseConfig ) ,
    AngularFireAuthModule  ] ,
  proveedores : [ NavParams ,  HttpClientModule , {  proporcionar : RouteReuseStrategy ,  useClass : IonicRouteStrategy  } ] ,
  arranque : [ Componente de la aplicación ] ,
} )
 clase de  exportación AppModule  { }

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

// Variables iónicas y tematización. Para obtener más información, consulte:
// http://ionicframework.com/docs/theming/

/** Variables CSS iónicas **/
:raíz {
    /** primario **/
    --ion-color-primario: #3880ff;
    --ion-color-primary-rgb: 56, 128, 255;
    --ion-color-primario-contraste: #ffffff;
    --ion-color-primario-contraste-rgb: 255, 255, 255;
    --ion-color-primary-shade: #3171e0;
    --ion-color-primary-tint: #4c8dff;
  
    /** secundario **/
    --ion-color-secundario: #3dc2ff;
    --ion-color-secundario-rgb: 61, 194, 255;
    --ion-color-secundario-contraste: #ffffff;
    --ion-color-secundario-contraste-rgb: 255, 255, 255;
    --ion-color-secundario-tono: #36abe0;
    --ion-color-secundario-tinte: #50c8ff;
  
    /** terciario **/
    --ion-color-terciario: #5260ff;
    --ion-color-terciario-rgb: 82, 96, 255;
    --ion-color-terciario-contraste: #ffffff;
    --ion-color-terciario-contraste-rgb: 255, 255, 255;
    --ion-color-terciario-sombra: #4854e0;
    --ion-color-terciario-tint: #6370ff;
  
    /** éxito **/
    --ion-color-éxito: #2dd36f;
    --ion-color-éxito-rgb: 45, 211, 111;
    --ion-color-éxito-contraste: #ffffff;
    --ion-color-éxito-contraste-rgb: 255, 255, 255;
    --ion-color-success-shade: #28ba62;
    --ion-color-success-tint: #42d77d;
  
    /** advertencia **/
    --advertencia de color de iones: #ffc409;
    --ion-color-advertencia-rgb: 255, 196, 9;
    --contraste de advertencia de color de iones: #000000;
    --ion-color-advertencia-contraste-rgb: 0, 0, 0;
    --ion-color-warning-shade: #e0ac08;
    --tinte de advertencia de color de iones: #ffca22;
  
    /** peligro **/
    --ion-color-peligro: #eb445a;
    --ion-color-peligro-rgb: 235, 68, 90;
    --ion-color-peligro-contraste: #ffffff;
    --ion-color-peligro-contraste-rgb: 255, 255, 255;
    --ion-color-peligro-sombra: #cf3c4f;
    --ion-color-peligro-tinte: #ed576b;
  
    /** oscuro **/
    --ion-color-oscuro: #222428;
    --ion-color-oscuro-rgb: 34, 36, 40;
    --ion-color-oscuro-contraste: #ffffff;
    --ion-color-oscuro-contraste-rgb: 255, 255, 255;
    --ion-color-dark-shade: #1e2023;
    --ion-color-dark-tint: #383a3e;
  
    /** medio **/
    --medio de color de iones: #92949c;
    --ion-color-medio-rgb: 146, 148, 156;
    --ion-color-medio-contraste: #ffffff;
    --ion-color-medio-contraste-rgb: 255, 255, 255;
    --ion-color-medio-sombra: #808289;
    --ion-color-medio-tinte: #9d9fa6;
  
    /** luz **/
    --ion-color-luz: #f4f5f8;
    --ion-color-luz-rgb: 244, 245, 248;
    --ion-color-luz-contraste: #000000;
    --ion-color-luz-contraste-rgb: 0, 0, 0;
    --ion-color-light-shade: #d7d8da;
    --ion-color-light-tint: #f5f6f9;
  }
  
  @media (prefiere-esquema-de-color: oscuro) {
    /*
     * Colores oscuros
     * -------------------------------------------
     */
  
    cuerpo {
      --ion-color-primario: #428cff;
      --ion-color-primario-rgb: 66,140,255;
      --ion-color-primario-contraste: #ffffff;
      --ion-color-primario-contraste-rgb: 255,255,255;
      --ion-color-primary-shade: #3a7be0;
      --ion-color-primary-tint: #5598ff;
  
      --ion-color-secundario: #50c8ff;
      --ion-color-secundario-rgb: 80,200,255;
      --ion-color-secundario-contraste: #ffffff;
      --ion-color-secundario-contraste-rgb: 255,255,255;
      --ion-color-secundario-tono: #46b0e0;
      --ion-color-secundario-tinte: #62ceff;
  
      --ion-color-terciario: #6a64ff;
      --ion-color-terciario-rgb: 106,100,255;
      --ion-color-terciario-contraste: #ffffff;
      --ion-color-terciario-contraste-rgb: 255,255,255;
      --ion-color-terciario-sombra: #5d58e0;
      --ion-color-terciario-tint: #7974ff;
  
      --ion-color-éxito: #2fdf75;
      --ion-color-éxito-rgb: 47,223,117;
      --ion-color-éxito-contraste: #000000;
      --ion-color-éxito-contraste-rgb: 0,0,0;
      --ion-color-success-shade: #29c467;
      --ion-color-success-tint: #44e283;
  
      --advertencia de color de iones: #ffd534;
      --ion-color-advertencia-rgb: 255,213,52;
      --contraste de advertencia de color de iones: #000000;
      --ion-color-advertencia-contraste-rgb: 0,0,0;
      --ion-color-warning-shade: #e0bb2e;
      --ion-color-warning-tint: #ffd948;
  
      --ion-color-peligro: #ff4961;
      --ion-color-peligro-rgb: 255,73,97;
      --ion-color-peligro-contraste: #ffffff;
      --ion-color-peligro-contraste-rgb: 255,255,255;
      --ion-color-danger-shade: #e04055;
      --ion-color-peligro-tinte: #ff5b71;
  
      --ion-color-oscuro: #f4f5f8;
      --ion-color-oscuro-rgb: 244,245,248;
      --ion-color-oscuro-contraste: #000000;
      --ion-color-oscuro-contraste-rgb: 0,0,0;
      --ion-color-dark-shade: #d7d8da;
      --ion-color-dark-tint: #f5f6f9;
  
      --medio de color de iones: #989aa2;
      --ion-color-medio-rgb: 152,154,162;
      --ion-color-medio-contraste: #000000;
      --ion-color-medio-contraste-rgb: 0,0,0;
      --ion-color-medio-sombra: #86888f;
      --ion-color-medio-tinte: #a2a4ab;
  
      --ion-color-luz: #222428;
      --ion-color-luz-rgb: 34,36,40;
      --ion-color-luz-contraste: #ffffff;
      --ión-color-luz-contraste-rgb: 255,255,255;
      --ion-color-light-shade: #1e2023;
      --ion-color-light-tint: #383a3e;
    }
  
    /*
     * Tema oscuro de iOS
     * -------------------------------------------
     */
  
    cuerpo .ios {
      --ion-fondo-color: #000000;
      --ión-fondo-color-rgb: 0,0,0;
  
      --ion-texto-color: #ffffff;
      --ion-texto-color-rgb: 255,255,255;
  
      --ion-color-paso-50: #0d0d0d;
      --ion-color-paso-100: #1a1a1a;
      --ion-color-paso-150: #262626;
      --ion-color-paso-200: #333333;
      --ion-color-paso-250: #404040;
      --ion-color-paso-300: #4d4d4d;
      --ion-color-paso-350: #595959;
      --ion-color-paso-400: #666666;
      --ion-color-paso-450: #737373;
      --ion-color-paso-500: #808080;
      --ion-color-paso-550: #8c8c8c;
      --ion-color-paso-600: #999999;
      --ion-color-paso-650: #a6a6a6;
      --ion-color-paso-700: #b3b3b3;
      --ion-color-paso-750: #bfbfbf;
      --ion-color-paso-800: #cccccc;
      --ion-color-paso-850: #d9d9d9;
      --ion-color-paso-900: #e6e6e6;
      --ion-color-paso-950: #f2f2f2;
  
      --ion-elemento-fondo: #000000;
  
      --fondo de la tarjeta de iones: #1c1c1d;
    }
  
    .ios ion-modal {
      --ion-background-color: var(--ion-color-step-100);
      --ion-toolbar-background: var(--ion-color-step-150);
      --ion-toolbar-border-color: var(--ion-color-step-250);
    }
  
  
    /*
     * Diseño de materiales Tema oscuro
     * -------------------------------------------
     */
  
    cuerpo .md {
      --ion-fondo-color: #121212;
      --ión-fondo-color-rgb: 18,18,18;
  
      --ion-texto-color: #ffffff;
      --ion-texto-color-rgb: 255,255,255;
  
      --ion-border-color: #222222;
  
      --ion-color-paso-50: #1e1e1e;
      --ion-color-paso-100: #2a2a2a;
      --ion-color-paso-150: #363636;
      --ion-color-paso-200: #414141;
      --ion-color-paso-250: #4d4d4d;
      --ion-color-paso-300: #595959;
      --ion-color-paso-350: #656565;
      --ion-color-paso-400: #717171;
      --ion-color-paso-450: #7d7d7d;
      --ion-color-paso-500: #898989;
      --ion-color-paso-550: #949494;
      --ion-color-paso-600: #a0a0a0;
      --ion-color-paso-650: #acacac;
      --ion-color-paso-700: #b8b8b8;
      --ion-color-paso-750: #c4c4c4;
      --ion-color-paso-800: #d0d0d0;
      --ion-color-paso-850: #dbdbdb;
      --ion-color-paso-900: #e7e7e7;
      --ion-color-paso-950: #f3f3f3;
  
      --ion-elemento-fondo: #1e1e1e;
  
      --ion-toolbar-fondo: #1f1f1f;
  
      --ion-tab-bar-fondo: #1f1f1f;
  
      --ion-toolbar-background: var(--ion-color-secundario);
  
      --fondo de la tarjeta de iones: #1e1e1e;
    }
  } 


  /**
* Evita que la detección de cambios angulares
* ejecutándose con ciertas devoluciones de llamadas de componentes web
*/
// eslint-disable-next-line no-underscore-dangle
( ventana  como  cualquiera ) . __Zone_disable_customElements  =  verdadero ;

/* Para obtener más información sobre este archivo, consulte: https://angular.io/config/tsconfig. */
{
    "extiende" : " ./tsconfig.json " ,
    "opciones del compilador" : {
      "outDir" : " ./out-tsc/app " ,
      "tipos" : []
    },
    "archivos" : [
      " fuente/principal.ts " ,
      " src/polyfills.ts "
    ],
    "incluir" : [
      " src/**/*.d.ts "
    ]
  }
  /* Para obtener más información sobre este archivo, consulte: https://angular.io/config/tsconfig. */
{
    "compilarOnSave" : falso ,
    "opciones del compilador" : {
      "baseUrl" : "./" ,
      "outDir" : "./dist/out-tsc" ,
      "sourceMap" : verdadero ,
      "declaración" : falso ,
      "Iteración de nivel inferior" : verdadero ,
      "decoradores experimentales" : verdadero ,
      "moduleResolution" : "nodo" ,
      "importHelpers" : verdadero ,
      "objetivo" : "es2015" ,
      "módulo" : "es2020" ,
      "lib" : [ "es2018" ,  "dom" ]
    } ,
    "opciones de compilador angular" : {
      "habilitarI18nLegacyMessageIdFormat" : falso ,
      "strictInjectionParameters" : verdadero ,
      "strictInputAccessModifiers" : verdadero ,
      "plantillas estrictas" : verdadero
    }
  }

  /* Para obtener más información sobre este archivo, consulte: https://angular.io/config/tsconfig. */
{
    "extiende" : " ./tsconfig.json " ,
    "opciones del compilador" : {
      "outDir" : " ./out-tsc/spec " ,
      "tipos" : [
        " jazmín "
      ]
    },
    "archivos" : [
      " src/prueba.ts " ,
      " src/polyfills.ts "
    ],
    "incluir" : [
      " src/**/*.spec.ts " ,
      " src/**/*.d.ts "
    ]
  }
