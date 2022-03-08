import { Injectable } from '@angular/core';
import { Receta } from '../models/receta.model';

@Injectable({
  providedIn: 'root'
})
export class RecetasService {

  recetas: Receta[]=[
    {
      id: 1, 
      nombre: 'Pizza', 
      image: 'https://cdn2.cocinadelirante.com/sites/default/files/styles/gallerie/public/images/2017/04/pizzapepperoni0.jpg',
      ingredientes: ["queso","salsa", "peperoni", "harina", "especies","sal"]
    },
    {
      id: 2, 
      nombre: 'Chop suey de pollo', 
      image: 'https://images.aws.nestle.recipes/resized/b87c22a3bd854277162d8389432399f8_chop_suey_400_1200_600.jpg',
      ingredientes: ['2 Cucharadas de Aceite de ajonjolí',
      '1/2 Cebolla fileteada',
      '1 Diente de Ajo picado finamente',
      '400 Gramos de Pechuga de pollo cortada en cubos',
      '1 Pimiento morrón rojo cortado en bastones',
      '1 Taza de Brócoli cocido y cortado en ramilletes pequeños',
      '1/2 Taza de Apio cortado en medias lunas',
      '2 Zanahorias cortadas en tiras',
      '2 Tazas de Germen de soya',
      '1 Calabaza cortada en tiras',
      '1 Cucharada de Sal con ajo en polvo',
      '5 Cucharadas de Salsa de Soya MAGGI']
    },
    {
      id: 3, 
      nombre: 'Pollo a la mexicana', 
      image: 'https://d1uz88p17r663j.cloudfront.net/resized/08d45a55fe49e611abde012a9b72d8bb_POLLO_A_LA_MEXICANA_150_1200_600.jpg',
      ingredientes: [
        '1/2 Cebolla asada'
        ,'2 Dientes de Ajo asados'
        ,'4 Jitomates asados'
        ,'1/2 Taza de Agua'
        ,'2 Cubos de Concentrado de Tomate con Pollo CONSOMATE'
        ,'2 Cucharadas de Aceite de maíz'
        ,'1/2 Cebolla fileteada'
        ,'5 Muslos o piernas de pollo cocidos'
        ,'3 Jitomates cortados en cubos pequeños'
        ,'2 Chiles jalapeño cortados en tiras'
        ,'2 Ramitas de Cilantro fresco desinfectadas y picadas finamente'
      ]
    },
    {
      id: 4, 
      nombre: 'Paletas de fresa con chamoy', 
      image: 'https://images.aws.nestle.recipes/resized/f1b3167c3cff6274361a3f7a87974be2_paletas_de_fresa_con_chamoy_1200_600.jpg',
      ingredientes: [
        '2 Tazas de Fresas congeladas'
        ,'1 1/2 Tazas de Agua'
        ,'1/2 Taza de Azúcar'
        ,'8 Vasos de plástico (4 oz c/u)'
        ,'8 Vasos de plástico (1 oz c/u)'
        ,'8 Palitos de madera para paleta'
        ,'1/2 Taza de Concentrado de jamaica'
        ,'4 Cucharadas de Chile con limón en polvo'
        ,'1 Cucharada de Jugo MAGGI'
        ,'1/4 Taza de Chamoy líquido'

      ]
    },
    {
        id: 5,
        nombre: 'Hamburguesa',
        image: 'https://www.laobreria.com/wp-content/uploads/2020/10/90300180_1426685970867094_1131264290930556928_o.jpg',
        ingredientes: [
            '500g. de carne de ternera de calidad',
            '1 diente de ajo',
            '1 huevo',
            'Hojas de albahaca fresca',
            '4 cda. queso parmesano rallado',
            'Cebolla confitada',
            'Sal y pimienta recien molida',
            'Rucula',
            'Queso de cabra',
            'Pan de hamburquesa',
            'Aceite de oliva extra virgen'
        ]
    },
    {
        id: 6,
        nombre: 'Costilla a la Diabla',
        image: 'https://www.lamorena.com.mx/images/recetas/platos_fuertes/costilla_cerdo_diabla.png',
        ingredientes: [
            '800g de costilla de cerdo',
            'Chiles chipotles adobados',
            '1/2 cebolla finamente picada',
            '2 dientes de ajo picados',
            '4 cucharadas de salsa inglesa',
            '2 cucharadas de salsa de tomate',
            '2 cucharadas de miel de abeja',
            '2 cucharadas de azucar morena',
            '1/2 taza de cerveza clara',
            '1 cucharadita de mostaza'
        ]
    },
    {
        id: 7,
        nombre: 'Costillas con BBQ',
        image: 'https://www.lamorena.com.mx/images/recetas/2021/receta-interior.png',
        ingredientes: [
            '250g de costilla de cerdo',
            'Sal de ajo y pimienta al gusto',
            '1/2 taza de salsa BBQ',
            '1 lata de chipotle molido',
            '1 manzana'
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