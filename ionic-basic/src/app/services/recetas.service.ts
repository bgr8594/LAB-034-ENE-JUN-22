import { Injectable } from '@angular/core';
import { Receta } from '../models/receta.model';

@Injectable({
  providedIn: 'root'
})
export class RecetasService {
  recetas: Receta[]=[
    {
      id: 1, 
      nombre: 'Crema de calabaza', 
      image: 'https://wl-genial.cf.tsp.li/resize/728x/jpg/51e/ae7/689f145b41abb18cc7e262e911.jpg',
      ingredientes: ["1 Calabaza","2 Cebollas","2 Dientes de ajo", "1 Cucharada de mantequilla","Almendras laminadas para decorar"]
    },
    {
      id: 2, 
      nombre: 'Salmon al horno', 
      image: 'https://wl-genial.cf.tsp.li/resize/728x/jpg/030/e5a/b7febd56d7a087336e3bc41b7e.jpg',
      ingredientes: ["500 g. de Salmon","1 Limon","1 Cucharadita de eneldo","1 Cucharadita de Pimienta","Alcaparras al gusto"]
    },
    {
      id: 3, 
      nombre: 'Tartaletas de manzana', 
      image: 'https://wl-genial.cf.tsp.li/resize/728x/jpg/8b1/3d6/be1d03551d9e80321ef028ab21.jpg',
      ingredientes: ["3 Manzanas","250 g. de Hojaldre","2 Cucharadas de Mantequila","1 Cucharada de Azucar Moreno"] 
     },
    {
      id: 4, 
      nombre: 'Tostada de queso brie', 
      image: 'https://wl-genial.cf.tsp.li/resize/728x/jpg/1c5/ccb/d107325b8389a233a0229eee0f.jpg',
      ingredientes: ["1 Cebolla Grande","1 Cucharada de Mantequilla","Pan Cortado en rebanadas","Queso Brie","Rodajas de tomate (Opcional)"]
     },
     {
       id:5,
       nombre: 'Coliflor al horno',
       image:'https://wl-genial.cf.tsp.li/resize/728x/jpg/5dc/edc/64b1ed5598af0dc6e5072ba597.jpg',
       ingredientes: ["1 Coliflor","1 Cebolleta","1 Huevo Grande","300 g. Pan Rallado","Queso Parmesano"]
     },
     {
      id: 6,
      nombre: 'Pasta con camarones al ajo',
      image: 'https://wl-genial.cf.tsp.li/resize/728x/jpg/c28/d91/db186353b18aa639dcee805b12.jpg',
      ingredientes: ["600 g. de Camarones","400 g. de Espagueti","3 Dientes de ajo Picados","1 Chile Picado","3 cdas. de Perejil Picado"] 
     }
   ];
  constructor() { }

   getReceta(idReceta: number){
     return {...this.recetas.find(
       (receta: Receta) =>{
         return receta.id ===idReceta
       }
     )};
   }

   getRecetas(){
     return [...this.recetas];
   }
 }
