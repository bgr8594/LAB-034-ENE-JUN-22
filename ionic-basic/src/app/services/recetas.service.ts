import { Injectable } from '@angular/core';
import { Receta } from '../models/receta';

@Injectable({
  providedIn: 'root'
})
export class RecetasService {

  recetas: Receta[]=[
    {
      id: 1, 
      nombre: 'Pastel de Carne', 
      image: 'https://antojandoando.com/wp-content/uploads/2015/10/pastel-carne-feat-pq.jpg',
      ingredientes: ["1 1/2 libras carne molida sin grasa","1 cebolla cabezona pequeña (de huevo) picada", "3 dientes de ajo picados o machacados", "1-3 taza salsa de tomate o ketchup", "1 taza pan rallado panko","hierbas al gusto", "perejil picado", "2 huevos batidos", "3/4 cucharadas de sal", "pimienta negra molida", "1/2 taza queso parmesano"]
    },
    {
      id: 2, 
      nombre: 'Pasta Alfredo', 
      image: 'https://www.tureceta.net/wp-content/uploads/2019/12/Pasta-Alfredo-1024x576.jpg',
      ingredientes: ['200g de queso crema en cubos medianos',
      '1 cucharada de mantequilla',
      '1 cucharadita de ajo picado',
      '1 taza de caldo de pollo',
      '1/4 taza de queso parmesano',
      'sal y pimienta al gusto',
      '1 paquete de 250g de pasta larga cocida']
    },
    {
      id: 3, 
      nombre: 'Chile Relleno', 
      image: 'https://www.vidactual.com/rcpmaker/wp-content/uploads/2018/10/Chile-relleno-de-panela.jpg',
      ingredientes: [
        '1 chile poblano, asado, limpio y sin semilla'
,'100 gramos de queso panela en trozos'
,'1 1/4 cucharadas de fecula de maiz regular (maizena)'
,'1 clara de huevo'
,'1/4 tazas de aceite'
,'1 jitomate partido en cuartos'
,'1/4 cebolla en trozos'
,'1 diente de ajo'
,'1 cubo de caldo de pollo (Knorr Suiza)'
,'1/4 tazas de agua'
      ]
    },
    {
      id: 4, 
      nombre: 'Pollo a la Reina', 
      image: 'https://img-global.cpcdn.com/recipes/4f27014902ef8423/1200x630cq70/photo.jpg',
      ingredientes: [
        '180 de queso crema (Philadelphia)'
        ,'1 1/2 tazas de caldo de pollo (Knorr Suiza)'
        ,'Sal y pimienta al gusto'
        ,'1 pieza de muslo o pierna'
        ,'1/2 taza de tocino picado'
        ,'1/2 piezas de chile guajilo picado en tiras finas'
        ,'1/4 piezas de cebolla blanca picada en medias lunas'
        ,'1 champiñon picado en medias lunas'
        ,'1 cucharada de jerez'
      ]
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
