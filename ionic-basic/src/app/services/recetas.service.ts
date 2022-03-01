import { Injectable } from '@angular/core';
import { Receta } from '../models/receta.model';

@Injectable({
  providedIn: 'root'
})
export class RecetasService {

  recetas: Receta[]=[
    {
      id: 1, 
      nombre: 'Rollitos de pollo con salsa de champiñones', 
      image: 'https://cdn7.kiwilimon.com/recetaimagen/27190/25223.jpg',
      ingredientes: ["1 Paquete de pasta para lasaña","1 Cucharada de aceite", "2 Cucharadas de aceite de oliva", "2 tazas de pechuga de pollo cocida", "1 Taza de champiñones","1 Taza de queso manchego"]
    },
    {
      id: 2, 
      nombre: 'Chiles en nogada', 
      image: 'https://cdn7.kiwilimon.com/recetaimagen/14881/7199.jpg',
      ingredientes: ['2 Cucharadas de Manteca de cerdo',
      '8 chiles poblanos',
      '100 gr de cebolla picada',
      '400 gr de carne de res molida',
      '400 gr de carne de cerdo molida',
      '220 gr de queso crema Philadelphia',
      '80 gr de azucar',
      '400 ml de vino blanco',
      'Nueces moscadas al gusto',
      '50 gr de azucar',
      '200 gr de manzana golden pelada y cortada en cubos',
      '5 gr de canela en polvo']
    },
    {
      id: 3, 
      nombre: 'Hamburguesa rellena de queso envuelta en tocino', 
      image: 'https://cdn7.kiwilimon.com/recetaimagen/39046/50460.jpg',
      ingredientes: [
        '500 gr de carne molida de res'
,'500 gr de carne molida de cerdo'
,'1 Cda de cebolla en polvo'
,'1 Cda de ajo en polvo'
,'2 Huevos'
,'1/2 Tazas de pan molido'
,'Suficiente queso cheddar'
,'4 Bollos de hamburguesas'
,'Suficiente catsup'
,'Suficiente cebolla morada'
,'Suficiente mayonesa'
      ]
    },
    {
      id: 4, 
      nombre: 'Rosca de tacos de bistec', 
      image: 'https://cdn7.kiwilimon.com/recetaimagen/38988/50340.jpg',
      ingredientes: [
        '500 gr de bistec de res'
        ,'1/2 frascos de salsa verde habanero'
        ,'1/2 cebollas'
        ,'1/2 tazas de cilantro'
        ,'1 aguacate'
        ,'Suficiente limon'
        
      ]
    },
    {
        id: 5, 
        nombre: 'Hot dog con nachos', 
        image: 'https://cdn7.kiwilimon.com/recetaimagen/27037/26085.jpg',
        ingredientes: [
            '1 cda de aceite'
            ,'4 salchichas'
            ,'1/2 bolsas de totopo para nacho'
            ,'4 pan para hot dog'
            ,'1 jitomate partido'
            ,'3 chiles verdes'
            ,'1/2 cda de sal'
            ,'1/2 cda de pimienta'
            ,'Suficiente catsup'
            ,'Suficiente cebolla morada'
            ,'Suficiente mayonesa'
          
        ]
      },
      {
        id: 6, 
        nombre: 'Pizza al sarten de carnes frias', 
        image: 'https://cdn7.kiwilimon.com/recetaimagen/38758/49861.jpg',
        ingredientes: [
            '1 paquete de harina para pizza'
            ,'1 taza de agua tibia'
            ,'Suficiente harina'
            ,'1 taza de queso manchego rallado'
            ,'1/4 taza de pepperoni'
            ,'1/4 de tazas de jamon en cubos'
            ,'1/4 tazas de salchicha en rodajas'
            ,'1/4 tazas de pimiento morron verde en tiritas'
            ,'1/4 de tazas de pimiento morron amarillo en tiras'
            ,'Suficiente hojuelas de chile'
          
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