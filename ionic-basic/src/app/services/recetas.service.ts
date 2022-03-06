import { Injectable } from '@angular/core';
import { Receta } from '../models/receta.model';

@Injectable({
  providedIn: 'root'
})
export class RecetasService {

  recetas: Receta[]=[
    {
        id: 1,
        nombre: 'Helado de Chocolate',
        image: 'https://i.blogs.es/159ea0/helado-chocolate/1366_2000.jpg',
        ingredientes: [
            '250 gramos de chocolate negro (mínimo 70% de cacao)'
            ,'Una cucharada de café soluble'
            ,'Medio litro de leche'
            ,'100 gramos de azúcar'
            ,'4 yemas de huevo'
            ,'40 gramos de clara de huevo pasteurizada'
        ]
    },
    {
        id: 2,
        nombre: 'Pay de Queso',
        image: 'https://i0.wp.com/hornomx.com/wp-content/uploads/2020/07/mexican-cheesecake-recipe-hornomx-side.jpg?resize=1024%2C683&ssl=1',
        ingredientes: [
            '1 1/4 taza de galletas tipo Marías molidas'
            ,'1/3 taza + 1 cda de mantequilla sin sal'
            ,'190 gramos de queso crema'
            ,'30 gramos de queso suave salado (opcional)'
            ,'4 huevos'
            ,'390 gramos de leche condensada'
            ,'360 gramos de leche evaporada'
            ,'20 ml de extracto de vainilla'
            ,'Una pizca de sal'
        ]
    },
    {
        id: 3,
        nombre: 'Burritos mexicanos',
        image: 'https://saborgourmet.com/wp-content/uploads/burritos-mexicanos-recetas-e1386961194834.jpg',
        ingredientes: [
            '3 tazas de harina'
            ,'1 cucharadita de polvo de hornear'
            ,'100 gramos de manteca vegetal'
            ,'1 cucharadaita de sal'
            ,'1 1/4 tazas de agua'
            ,'Hojas de lechuga francesa'
            ,'Tiras de arrachera'
            ,'Chorizo'
            ,'Tomate en tiras'
            ,'Aguacate'
            ,'Frijoles refritos'
            ,'Queso amarillo rallado'
        ]
    },
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