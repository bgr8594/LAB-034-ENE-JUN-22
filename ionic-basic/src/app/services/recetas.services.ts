import { Injectable } from '@angular/core';
import { Receta } from '../models/receta.model';

@Injectable({
  providedIn: 'root'
})
export class RecetasService {

  recetas: Receta[]=[
    {
      id: 1, 
      nombre: 'Pay de queso', 
      image: 'https://mandolina.co/wp-content/uploads/2020/10/Rebanada-de-tarta-de-queso.jpg',
      ingredientes: ["1 paquete de galletas maria",
      "1/2 taza de mantequilla, derretida", 
      "1 lata de leche condensada", 
      "1 lata de leche evaporada", 
      "3 huevos",
      "1 barra de queso crema"] 
    },
    {
      id: 2, 
      nombre: 'Hamburguesas Caseras', 
      image: 'https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTwYUGd0zdS0FzU6UQAU5IpigH-5PrOTu3I4w&usqp=CAU',
      ingredientes: ['500 g de carne de ternera de calidad',
      '1 diente de ajo',
      '1 huevo',
      'Hojas de albahaca fresca',
      '4 cucharadas de queso parmesano rallado',
      'Lechuga y tomate',
      'Cebolla confitada',
      'Sal y pimienta negra recien molida',
      'Pan para hamburguesas',
      'Aceite de oliva virgen extra.'
      ]
    },
    {
      id: 3, 
      nombre: 'Tacos al pastor', 
      image: 'https://www.comedera.com/wp-content/uploads/2017/08/tacos-al-pastor-receta.jpg',
      ingredientes: [
        '1 Kg de lomo de cerdo','2 chiles chipotles',
        '3 dientes de ajo','2 tomates','2 hojas de laurel',
        '1 cebolla','120 ml de vinagre de manzana','120 ml de agua',
        '1 cucharadita de pimienta negra molida',
        'Guarnicion: cilantro fresco, limas, cebolla y tomate',
        '16 tortillas de maiz'
      ]
    },
    {
      id: 4, 
      nombre: 'Empanadas de cajeta', 
      image: 'https://cdn2.cocinadelirante.com/sites/default/files/images/2019/09/empanada-de-cajeta.jpg',
      ingredientes: [
        '3 tazas de Harina de trigo','1/4 taza de azucar',
        '1 pizca de sal','225 gramos de mantequilla',
        '2 unidades de huevo','1 lata de leche condensada',
      ]
    },
    {
      id: 5, 
      nombre: 'Chilaquiles rojos', 
      image: 'https://i.blogs.es/25527f/chilaquiles-rojos-tradicionales-receta-facil-cocina-mexicana/1366_2000.jpg',
      ingredientes: [
        '150 ml de aceite','400 gr de totopos para chilaquiles',
        '200 ml de crema acida','250 gr de queo fresco demoronado',
        '1/2 cebolla fileteada','2 tazas de frijoles negros refritos'
      ] 
    },
    {
      id: 6, 
      nombre: 'Ensalada de frutas', 
      image: 'https://myplate-prod.azureedge.net/sites/default/files/styles/recipe_525_x_350_/public/2021-01/Fruit%20Salad%20with%20Yogurt.jpg?itok=eHnJvlJu',
      ingredientes: [
        '1/4 piña miel','2 manzanas',
        '2 naranjos','2 platanos','2 tazas de fresas',
        '1 taza de nuez picada','1 taza de uva pasa',
        '2 tazas de yogurth natural','5 cucharadas de azucar'
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