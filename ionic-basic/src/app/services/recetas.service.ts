import { Injectable } from '@angular/core';
import { Receta } from '../models/receta.model';

@Injectable({
  providedIn: 'root'
})
export class RecetasService {

  recetas: Receta[]=[
    {
      id: 1, 
      nombre: 'Tamal', 
      image: 'https://i.blogs.es/31eb08/tamal_pollo_v2-2019/1024_2000.jpg',
        ingredientes: ['250 gramos de manteca de cerdo'
      ,'500 gramos de harina para tamales'
      ,'1 taza de caldo de pollo'
      ,'1 cucharada de sal'
      ,'1 cucharada de pimienta'
      ,'1 litro de agua'
      ,'500 gramos de tomate verde'
      ,'3 cucharadas de aceite'
      ,'1/4 de cebolla'
      ,'1 pechuga de pollo sin hueso, cocida y desmenuzada'
      ,'10 hojas de maíz, remojadas en agua']
    },
    {
      id: 2, 
      nombre: 'Hamburguesa', 
      image: 'https://cdn2.cocinadelirante.com/sites/default/files/images/2018/09/receta-super-facil-de-carne-para-hamburguesa-suave.jpg',
      ingredientes: ['500 gramos de carne de res molida',
      '250 gramos de carne de cerdo molida',
      '150 gramos de tocino, picado',
      '1 huevo',
      '1 cucharada de mostaza',
      '1/2 taza de pan molido',
      'perejil, picado finamente',
      'Sal',
      'Pimienta',
      ]
    },
    {
      id: 3, 
      nombre: 'Cheese cake', 
      image: 'https://images.aws.nestle.recipes/resized/2017b5b6ae40076cad68b8d8fd489239_373_Cheesecake_sin_Horno_1200_600.jpg',
      ingredientes: [
        '250 gramos de galletas María, molidas'
,'130 gramos de mantequilla sin sal'
,'2 cucharadas de azúcar'
,'4 paquetes de queso crema, a temperatura ambiente'
,'1 1/4 tazas de leche condensada'
,'1/2 tazas de jugo de limón'
,'1 cucharadita de extracto de vainilla'
,'3 sobres de grenetina en polvo sin sabor, hidratada (7 g c/u)'
]
    },
    {
      id: 4, 
      nombre: 'Mangonada', 
      image: 'http://www.2000agro.com.mx/wp-content/uploads/mangonadas-receta01-990x557.jpg',
      ingredientes: [
        '4 tazas de hielo'
        ,'1 Taza de Agua'
        ,'1 Taza de Azúcar'
        ,'5 mangos'
        ,'3/4 Taza de chile en polvo'
        ,'1/2 Taza de piña, enchilada'
        ,'4 pulpas de tamarindo, en rollitos'
        ,'4 paletas enchiladas de pulpa de tamarindo'        
        ,'3/4 Taza de Chamoy líquido'

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
