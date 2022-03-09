import { Injectable } from '@angular/core';
import { Receta } from '../models/receta.model';

@Injectable({
  providedIn: 'root'
})
export class RecetasService {

  recetas: Receta[]=[
    {
      id: 1, 
      nombre: 'Tacos de asada ', 
      image: 'https://www.gastrolabweb.com/recetas/2022/1/25/se-va-hacer-no-se-va-hacer-receta-para-preparar-unos-tacos-de-carne-asada-19983.html#&gid=1&pid=1',
      ingredientes: ["torillas","carne de su pereferencia", "salsa de su eleccion", "queso", "aguacate","tomate","cebolla","chile"]
    },
    {
      id: 2, 
      nombre: 'Ensalada de pollo buffalo', 
      image: 'https://juegoscocinarpasteleria.org/wp-content/uploads/2021/02/Ensalada-Crujiente-De-Pollo-Buffalo.jpg',
      ingredientes: ['100 gramos de lechuga',
      '100 gramos de queso panela',
      '50 gramos de tiritas de torilla',
      '200 Gramos de Pechuga de pollo cortada en cubos',
      '100 mililitros de salsa buffalo',
      '50 mililitros de aderezo ranch',
      '1/2 aguacate',
      '1 Zanahoria cortadas en tiras'
      ]
    },
    {
      id: 3, 
      nombre: 'Spaguetti a la boloñesa', 
      image: 'https://saboryestilo.com.mx/wp-content/uploads/2020/12/espagueti-a-la-bolonesa.jpg',
      ingredientes: [
        '1 paquete de Spaguetti'
        ,'100 mililitros de salsa de tomate'
        ,'2 hojitas de yerbabuena'
        ,'150 gramos de carne molida'
      ]
    },
    {
      id: 4, 
      nombre: 'Camarones Rellenos', 
      image: 'https://img-global.cpcdn.com/recipes/fc32f4d8d58a250c/1200x630cq70/photo.jpg',
      ingredientes: [
        '1 kg de camaron'
        ,'1 kg de queso philadelphia'
        ,'50 mililitros de aderezo ranch'
        ,'1 kg de tocino'
        ,'huevos'
        ,'harina'
        ,'polvo de galleta para empanizar'
        
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