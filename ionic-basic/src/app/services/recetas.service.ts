import { Injectable } from '@angular/core';
import { Receta } from '../models/receta.model';

@Injectable({
  providedIn: 'root'
})
export class RecetasService {

  recetas: Receta[]=[
    {
      id: 1, 
      nombre: 'Licuado de platano', 
      image: 'https://www.mexicoenmicocina.com/wp-content/uploads/2018/01/licuado-de-platano-1-468x375.jpg',
      ingredientes: ["1/2L Leche",
      "1 Platano", 
      "1Cdta Azucar", 
      "Miel al gusto", 
      "Canela al gusto"]
    },
    {
      id: 2, 
      nombre: 'Brownies', 
      image: 'https://cdn2.cocinadelirante.com/sites/default/files/styles/gallerie/public/images/2019/01/como-hacer-los-brownies-perfectos.jpg',
      ingredientes: ['1/2 Taza de chispas de chocolate',
      '1/2 Taza de mantequilla derretida (sin sal)',
      '1 Taza de azucar',
      '2 huevos',
      '1 Yema de huevo',
      '3/4 Taza de harina',
      '1/4 Taza de cacao en polvo',
      'Sal al gusto']
    },
    {
      id: 3, 
      nombre: 'Fresas con Crema', 
      image: 'https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTEkjzTDo7uu7CUBXO14xGtlPx5L2cL4G-3i1UVEkg5BCYEVN3H8zlvXpgqz-TVFeKPi_s&usqp=CAU',
      ingredientes: [
        '1/2L Crema'
        ,'400g Fresas congeladas'
        ,'3cdta Azucar'
        ,'Crema batida'
        ,'1/5 Taza de Agua'
        ,'1/3 Taza  de Leche'
      ]
    },
    {
      id: 4, 
      nombre: 'Galletas Caseras', 
      image: 'https://mandolina.co/wp-content/uploads/2020/11/galletas-chispas-de-chocolateSin-ti%CC%81tulo.jpg',
      ingredientes: [
        '2 Tazas de Harina Vegetal'
        ,'1 Taza de Azucar'
        ,'1/2 Taza de Mantequilla vegetal (o aceite de coco)'
        ,'1/4 Taza de Leche'
        ,'1cdta de Vainilla'
        ,'Toppings al gusto (Chocolate, Nueces, Arandanos, etc)'

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