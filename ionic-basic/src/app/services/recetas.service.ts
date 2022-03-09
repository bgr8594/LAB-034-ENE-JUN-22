import { Injectable } from '@angular/core';
import { Receta } from '../models/receta.model';

@Injectable({
  providedIn: 'root'
})
export class RecetasService {

  recetas: Receta[]=[
    {
      id: 1, 
      nombre: 'Lasaña', 
      image: 'https://assets.unileversolutions.com/recipes-v2/109130.jpg?imwidth=1600',
      ingredientes: ["Tomate","Aceite", "Cebolla", "Oregano", "Especies","Ajo","Carne molida","Laminas de pasta","Queso rallado"]
    },
    {
      id: 2, 
      nombre: 'Hamburguesas', 
      image: 'https://cdn1.cocina-familiar.com/recetas/thumb/como-hacer-hamburguesas-caseras.JPG',
      ingredientes: ["700 gr. de carne picada de ternera",
        "300 gr. de carne picada de cerdo",
        "2 claras de huevo",
        "100 ml. de leche",
        "Pan rallado",
        "Perejil",
        "Ajo en polvo",
        "Sal"]
    },
    {
      id: 3, 
      nombre: 'Hot cakes', 
      image: 'https://images.aws.nestle.recipes/resized/4ba3978c241c628affcaf5c4e837270e_hot_cakes_clasicos_-_desayuno_1200_600.jpg',
      ingredientes: [
        "3/4 Taza de Leche Evaporada",
        "1 Huevo",
        "2 Cucharadas de Mantequilla fundida",
        "1 Cucharadita de Esencia de vainilla",
        "1 Taza de Harina para hot cakes",
        "2 Cucharadas de Mantequilla",
        "1/2 Taza de Moras azules",
        "1/2 Taza de Fresas desinfectadas y cortadas en cuartos",
        "6 Hojas de Menta fresca desinfectadas",
        "1 Envase de Leche Condensada"]
    },
    {
      id: 4, 
      nombre: 'Buñuelos', 
      image: 'https://cdn7.kiwilimon.com/recetaimagen/13495/640x426/5992.jpg.webp',
      ingredientes: [
        "4 huevos",
        "1/4 tazas de azúcar refinada",
        "1 taza de aceite vegetal",
        "2 tazas de harina blanca",
        "1 cucharadita de polvo para hornear",
        "1 cucharadita de sal de mesa",
        "1 taza de azúcar refinada",
        "1 cucharadita de canela en polvo",
        "aceite de canola, extra para freir"
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