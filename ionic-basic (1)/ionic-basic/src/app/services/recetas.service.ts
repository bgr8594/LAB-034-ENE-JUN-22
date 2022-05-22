import { Injectable } from '@angular/core';
import { Receta } from '../models/receta.model';

@Injectable({
  providedIn: 'root'
})
export class RecetasService {

  recetas: Receta[]=[
    {
      id: 1, 
      nombre: 'Hamburguesa', 
      image: 'https://i.blogs.es/58e562/hambruguesa/840_560.jpg',
      ingredientes: ["120g Carne picada", "2count Queso cheddar", "Pepinillo", "Cebolla morada","Lechuga"]
    },
    {
      id: 2, 
      nombre: 'Caldo de Pollo', 
      image: 'https://t1.rg.ltmcdn.com/es/posts/8/1/2/caldo_de_pollo_casero_37218_orig.jpg',
      ingredientes: ['1 cubito de rico pollo',
      '500 gramos de Pollo desmenuzado',
      '1 Diente de Ajo picado finamente',
      'Sal',
      'Pimienta',
      '1 Taza de Brócoli cocido y cortado en ramilletes pequeños',
      'Zanahoria picada']
    },
    {
      id: 3, 
      nombre: 'Hot-Dog', 
      image: 'https://www.collinsdictionary.com/images/full/hotdog_156787409_1000.jpg',
      ingredientes: [
        'Pan para Hot-Dog'
,'Salchicha'
,'Catsup'
,'Mayonesa'
      ]
    },
    {
      id: 4, 
      nombre: 'Gelatina', 
      image: 'https://www.eluniversal.com.mx/sites/default/files/2019/11/29/gelatina.jpeg',
      ingredientes: [
        'Grenetina'
        ,'Agua caliente'
        ,'Azucar'
      ]
    },
    {
      id: 5,
      nombre: 'Nieve',
      image: 'https://gourmetdemexico.com.mx/wp-content/uploads/2018/04/helados-de-sabores-.jpg',
      ingredientes: [
        'Saborizante de la nieve de nuestra eleccion',
        'Hielo',
        'Chocolate'
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