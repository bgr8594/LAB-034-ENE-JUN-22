import { Injectable } from '@angular/core';
import { Receta } from '../models/receta.model';

@Injectable({
  providedIn: 'root'
})
export class RecetasService {

  recetas: Receta[]=[
    {
      id: 1, 
      nombre: 'Sopa de Fideos', 
      image: 'https://images.aws.nestle.recipes/resized/c229011bf7da1f3caf44bc3e563e68b9_sopa_de_fideo_1200_600.jpg',
      ingredientes: ["2 Cucharadas de Aceite de maíz",
      "1 Paquete de Pasta de fideos", 
      "1 1/2 Litros de Caldo de pollo", 
      "3 Jitomates en trozos", 
      "1/4 Cebolla en trozo",
      "1 Diente de Ajo",
      "2 Cubos de Concentrado de Tomate con Pollo",
      "2 Ramitas de Cilantro fresco desinfectado"
      ]
    },
    {
      id: 2, 
      nombre: 'Hamburgesa de Pollo', 
      image: 'https://d1uz88p17r663j.cloudfront.net/resized/CD256A76-811C-6377-B9D8-FF0000673B69-490x252-b-min_1200_600.png',
      ingredientes: ['250 Gramos Pechuga de pollo molidaí',
      '1 Cucharada Perejil fresco picado',
      '1 Cucharada de Consomé de pollo en polvo',
      '1 Pieza Huevo batido',
      '1/4 Cucharadita Sal',
      '1/2 Cucharadita Cebolla en polvo',
      '1 Cucharada Mostaza',
      '3 Cucharadas Aceite de maíz',
      '2 Cucharadas Ajonjolí',
      '1 Cucharada Sazonador Líquido MAGGI'
      ]
    },
    {
      id: 3, 
      nombre: 'Quesadilla de Aguacate y Queso Emmental', 
      image: 'https://i.blogs.es/c88598/quesadillas-aguacate/840_560.jpg',
      ingredientes: [
        "4 Tortillas de trigo",
        "3 Aguacates maduros",
        "1 Tomate grande",
        "2 Cucharadas de cilantro fresco",
        "2 Cucharadas de salsa picante (Opcional)",
        "Jugo de medio limon",
        "Queso emmental rallado (Al gusto)",
        "Ajo granulado",
        "Pimienta molida",
        "Sal",
        "Aceite de oliva virgen extra"
      ]
    },
    {
      id: 4, 
      nombre: 'Cake Pops', 
      image: 'https://i.ytimg.com/vi/GZQ-z2ODMLM/hqdefault.jpg',
      ingredientes: [
        "Panque",
        "Queso Crema",
        "Crema de Avellanas con Cacao",
        "Chocolate semi-amargo para fundir",
        "Palillos de madera",
        "Topping para decorar (Opcional)"
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