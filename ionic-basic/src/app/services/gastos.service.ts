import { Injectable } from '@angular/core';
import { Gastos } from '../models/gastos.model';

@Injectable({
  providedIn: 'root'
})
export class GastosService {

  gastos: Gastos[]=[];

  constructor() { }

  agregar(gasto: Gastos){
    if(this.gastos.length==0){
      gasto.id = 1;
    } else{
      gasto.id = this.gastos.length + 1;
    }
    this.gastos.push(gasto);
  }

  borrarGasto(idGasto: number){
    this.gastos = 
    this.gastos.filter((gasto)=>gasto.id!=idGasto);
  }

  getGastos(){
    return this.gastos;
  }

}