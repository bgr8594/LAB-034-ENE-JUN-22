import { Injectable } from '@angular/core';
import { Receta } from '../models/receta.model';

@Injectable({
  providedIn: 'root'
})
export class RecetasService {

  receta: Receta[]=[
    {
      id: 1,
      nombre: 'Hamburguesa',
      image:'https://www.hogar.mapfre.es/media/2018/09/hamburguesa-sencilla.jpg',
      ingredintes: [
        'Pan',
        'Carne',
        'Queso',
        'Jamon',
        'Tomate',
        'Lechuga'
      ]
    },
    {
      id: 2,
      nombre: 'sandwich',
      image: 'https://cdn1.cocina-familiar.com/recetas/sandwich-de-huevo-con-jamon-y-queso.JPG',
      ingredintes: [
        'Pan de barra',
        'Jamon',
        'Queso amarillo',
        'Mayonesa'
      ]
    },
    {
      id: 3,
      nombre: 'sushi',
      image: 'https://i.blogs.es/c8fea2/food-3581341_1920/1366_2000.jpg',
      ingredintes: [
        'Arroz blanco',
        'Apio',
        'Alga',
        'Queso philadelphia',
        'Aguacate',
        'Camaron'
      ]
    }
  ];

  constructor() { }

  getReceta(idReceta: number){
    return {...this.receta.find(
      (receta: Receta) =>{
        return receta.id ===idReceta
      }
    )};
  }

  getRecetas(){
    return[...this.receta];
  }
}
