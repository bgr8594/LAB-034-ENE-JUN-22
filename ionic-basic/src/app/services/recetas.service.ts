import { Injectable } from '@angular/core';
import { Receta } from '../models/receta.model';

@Injectable({
  providedIn: 'root'
})
export class RecetasService {

  recetas: Receta[]=[
    {
      id: 1, 
      nombre: 'brownie', 
      image: 'https://www.cocinayvino.com/wp-content/uploads/2021/01/www.cocinayvino.com-sencillitos-brownies-a-los-dos-chocolates-brownies-de-chocolate-e1610060835706.jpg',
      ingredientes: ["1/4 cocoa sin endulzar"
      ,"3 tazas + 2 cucharadas harina "
      , "2 gramos de sal"
      , "450 gr de azucar blanca"
      , "280 gr mantequilla sin sal"
      ,"4 huevos"
      , "4 gr vainilla"
      , "250 gr chips de chocolate"]
    },
    {
      id: 2, 
      nombre: 'pozole', 
      image: 'https://img-global.cpcdn.com/recipes/recipes_116031_v1419127785_receta_foto_00116031-hdzuxutbgf0qf577tqri/680x482cq70/pozole-rojo-a-mi-estilo-foto-principal.jpg',
      ingredientes: ['2 kilos de maiz',
      '120 gramos de cal',
      '250 gramos de cabeza de cerdo',
      '250 Gramos de lomo de cerdo',
      'sal']
    },
    {
      id: 3, 
      nombre: 'mole verde', 
      image: 'https://cdn7.kiwilimon.com/recetaimagen/13348/13327.jpg',
      ingredientes: [
        '1/4 de tomatillo'
    ,'5 chiles jalapeños'
    ,'5 chiles serranos'
    ,'1/2 kilo de epazote'
    ,'1/4 manteca de cerdo'
    ,'1 cebolla en cuartos'
    ,'1/2 de pepita de calabaza molida'
      ]
    },
    {
      id: 4, 
      nombre: 'Hot cakes', 
      image: 'https://img-global.cpcdn.com/recipes/2c56079ebad1e20b/400x400cq70/photo.jpg',
      ingredientes: [
        '1/2 taza de harina'
        ,'1/2 cucharadita de sal'
        ,'1 cucharada de polvo para hornear'
        ,'1/2 cucharadita de bicarbonato de sodio'
        ,'2 cucharadas de Azucar'
        ,'1/2 taza de leche'
        ,'1 cucharada de esencia de vainilla'
        ,'3 cucharadas de mantequilla fundida'
      ]
    },
    {
        id: 5, 
        nombre: 'Agua chile', 
        image: 'https://img-global.cpcdn.com/recipes/2c56079ebad1e20b/400x400cq70/photo.jpg',
        ingredientes: [
          '500 gramos de camaron'
          ,'2 pepinos'
          ,'5 chile serrano'
          ,'1 diente de ajo pequeño'
          ,'1 taza de jugo de limon'
          ,'1/2 de cebolla morada pequeña'
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