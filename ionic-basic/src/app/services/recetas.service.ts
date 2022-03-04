import { Injectable } from '@angular/core';
import { Receta } from '../models/receta.model';

@Injectable({
  providedIn: 'root'
})
export class RecetasService {

  recetas: Receta[]=[
    {
      id: 1, 
      nombre: 'Pay de limon', 
      image: '',
      ingredientes: ["90 gramos margarina","30 piezas galletas dulces molidas", "1 sobre grenetina sin sabor", "1/4 taza jugo de limón", "1 1/2 tazas leche evaporada","1/2 taza leche condensada"]
    },
    {
      id: 2, 
      nombre: 'Agua de limon con fresa', 
      image: '',
      ingredientes: ['1 taza de fresa',
      '1/2 tazas de azúcar',
      '8 tazas de agua',
      '1/2 tazas de jugo de limón amarillo',
      '1/2 tazas de jugo de arándano',
      'al gusto de hielo',
      'al gusto de limón amarillo, en rodajas']
    },
    {
      id: 3, 
      nombre: 'Pastel de 3 leches', 
      image: '',
      ingredientes: [
        '3/4 Taza de Aceite de maíz'
,'1 Cucharadita de Esencia de vainilla'
,'5 Huevos'
,'1 Taza de Leche Evaporada '
,'1/2 Taza de Azúcar'
,'1 Cucharadita de Polvo para hornear'
,'1 1/2 Tazas de Harina para hot cakes'
,'1 Lata de Leche Condensada '
,'1 1/2 Tazas de Leche Evaporada'
,'1/2 Taza de Crema batida'
,'1/2 Taza de Fresas desinfectadas y cortadas en cuartos'
      ]
    },
    {
      id: 4, 
      nombre: 'Pay de mango', 
      image: '',
      ingredientes: [
        '15 Piezas Galletas con relleno sabor limón, molidas'
        ,'1 Barra Mantequilla derretido (90 g)'
        ,'3 Piezas Mango'
        ,'1 Lata Leche Condensada'
        ,'1 1/2 Sobre Grenetina (7 g c/u),hidratada en ¼ taza de agua y disuelta a baño María'

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
