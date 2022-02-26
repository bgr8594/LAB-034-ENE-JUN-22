import { Injectable } from '@angular/core';
import { Receta } from '../models/receta.model';

@Injectable({
  providedIn: 'root'
})
export class RecetasService {

  recetas: Receta[]=[
    {
      id: 1, 
      nombre: 'Pay de Limon', 
      image: 'https://cdn2.cocinadelirante.com/sites/default/files/styles/gallerie/public/filefield_paths/carlota_de_limon.jpg',
      ingredientes: ["2 tubos de galleta María","1 lata de leche evaporada", "1 lata de leche condensada", "6 limones"]
      },
    {
      id: 2, 
      nombre: 'Pay de Queso', 
      image: 'https://cdn2.cocinadelirante.com/sites/default/files/styles/gallerie/public/images/2019/04/pay-de-queso-sin-horno.jpg',
      ingredientes: ['2 tazas de galletas de vainilla pulverizadas',
      '½ taza de mantequilla derretida',
      '1 ¼ taza de leche condensada',
      '250 gramos de queso crema']
    },
    {
      id: 3, 
      nombre: 'Sopa de Codos', 
      image: 'https://cocinamia.com.mx/wp-content/uploads/2021/01/sopa-de-coditos-2-1100x500.jpg',
      ingredientes: ['500 gramos de pasta de codito o cualquier pasta corta', '1½ tazas de Crema', '1 litro de Agua', '1 litro de Cubito de consomé de pollo', '3 rebanadas de jamón de pavo(gruesas)', '3 rebanadas de Piña', '6 trozos de Tallo de apio', '2 cucharadas soperas de mayonesa', '1 pizca de Sal']
    },
    {
      id: 4, 
      nombre: 'Postre de Manzana', 
      image: 'https://laroussecocina.mx/wp-content/uploads/2021/11/Ensalada-de-manzana.jpg',
      ingredientes: [
        '6 manzanas'
        ,'3 zanahorias, rallada'
        ,'1 taza de pasita'
        ,'1 taza de nuez, en trozo'
        ,'1/2 tazas de azúcar'
        ,'1 taza de crema ácida Lala®'
        ,'1/4 tazas de mayonesa'
        ,'4 rebanadas de piña en almíbar'
        ,'10 cerezas'
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