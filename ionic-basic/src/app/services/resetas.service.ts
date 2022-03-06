import { Injectable } from '@angular/core';
import { Receta } from '../models/receta.model';

@Injectable({
  providedIn: 'root'
})
export class RecetasService {

  recetas: Receta[]=[
    {
      id: 1, 
      nombre: 'TATER TOTS', 
      image: 'https://holycowvegan.net/wp-content/uploads/2018/01/one-pot-vegan-tater-tot-casserole-hotdish-1.jpg´,
      ingredientes: ["3-papas medianas",
      "1-cuchara de harina",
      "1-cucharadita de ajo en polvo",
      "1-cucharadita de cebolla en polvo",
      "1-cuchara de oregano",
      "1-cuchara de pimienton dulce",
      "sal y pimienta al gusto"]
    },
    {
      id: 2, 
      nombre: 'carrilleras al vino tinto', 
      image: 'https://i.blogs.es/115a45/carrilleras_vino/450_1000.jpg',
      ingredientes: ['1k-de carrilleras de cerdo',
      'aceite (lo que veas comveniente)',
      '3-dientes de ajo',
      '1-cebolla picada',
      '1-cebollin',
      '1-Pimiento verde',
      '1-pimiento rojo',
      '1-zanahoria',
      '100ml-de vino tinto',
    'sal y pimienta al gusto']
    },
    {
      id: 3, 
      nombre: 'lentejas con choriso', 
      image: 'https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRCIClOxmgJBW6Ld8Abr0UMIC8JumT1lKiQOw&usqp=CAU',
      ingredientes: [
        'aceite (lo que veas conveniente)'
,'1 Dientes de Ajo asados'
,'1/2 ó 1/4 de cebolla picada'
,'1 pimiento'
,'sal'
,'1 zanahoria'
,'300gr de lentejas'
,'3 ó 4 hojas de laurel'
,'1/2 choriso por persona'
,'2 papa'
,'1 cuchara de pimienton dulse en polvo']
    },
    {
      id: 4, 
      nombre: 'pollo a la cerveza', 
      image: 'https://live.mrf.io/statics/i/ps/www.cocinacaserayfacil.net/wp-content/uploads/2018/06/Pollo-a-la-cerveza-guisado.jpg?width=1200&enable=upscale',
      ingredientes: [
        '2 dientes de ajo'
        ,'2 hojas de laurel'
        ,'1/2 cebolla'
        ,'1/2 cebollin'
        ,'1 zanahoria'
        ,'1 pimiento rojo'
        ,'2 cucharas de harina'
        ,'1 cuchara de romero'
        ,'1 Cuchara de tornillo'
        ,'1 a 4 cuharas de salsa de soja'
        ,'1L de cerveza'
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