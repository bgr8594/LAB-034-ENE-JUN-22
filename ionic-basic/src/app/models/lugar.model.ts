export class Lugar {
    nombre: string;
    id?: string;
    latitud: number; 
    longitud: number;

    ubicacion?:{latitud:string, longitud:string}



        constructor(){

            this.nombre=''

        }

        public setUbicacion(latitud: string, Longiutd: string){

            this.ubicacion.latitud= latitud;

            this.ubicacion.longitud = Longiutd;

        }

}