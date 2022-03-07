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
      nombre: '*Nuevo* Lasaña', 
      image: 'https://www.recetasderechupete.com/wp-content/uploads/2021/04/Lasana-de-carne-rellena-bolonesa-7.png',
      ingredientes: [
        '500 g. de carne'
        ,'2 pimientos rojos'
        ,'2 zanahorias'
        ,'2 dientes de ajo'
        ,'150 g. de bacon o panceta'
        ,'2 cebollas grandes'
        ,'250 g. de tomate natural'
        ,'250 ml de vino blanco'
        ,'100 ml. de aceite de oliva virgen extra'
        ,'1 cucharita colmada de orégano seco '

      ]
    },
    {
      id: 6, 
      nombre: '*Nuevo* Espaguetis rojos', 
      image: 'https://t2.rg.ltmcdn.com/es/posts/7/2/6/espagueti_rojo_con_crema_74627_orig.jpg',
      ingredientes: [
        '200g de espaguetis'
        ,'1/2 cebolla'
        ,'2 dientes de ajo'
        ,'400g de tomate triturado'
        ,'100ml de nata para cocinar (crema de leche)'
        ,'1 cucharadita de pimentón dulce'
        ,'1 cucharadita de orégano seco'
        ,'100ml del caldo donde cozamos los espaguetis'
        ,'sal y pimienta'
        ,'Opcionalmente queso rallado'

      ]
    },
    {
      id: 7, 
      nombre: '*Nuevo* Ratatouille', 
      image: 'https://cdn7.recetasdeescandalo.com/wp-content/uploads/2018/07/Ratatouille-la-receta-de-la-pelicula.-Deliciosas-verduras-al-horno.jpg',
      ingredientes: [
        '3 tomates pera'
        ,'1 berenjena.'
        ,'1 calabacín.'
        ,'200 gr de salsa de tomate o tomate frito'
        ,'Tomillo seco o las hierbas que prefieras (romero, orégano…)'
        ,'Aceite de oliva virgen extra, pimienta negra recién molida y sal.'
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