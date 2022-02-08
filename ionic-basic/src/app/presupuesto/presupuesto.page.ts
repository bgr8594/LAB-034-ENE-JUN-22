import { Component, OnInit } from '@angular/core';

@Component({
	selector: 'app-presupuesto',
	templateUrl: './presupuesto.page.html',
	styleUrls: ['./presupuesto.page.scss'],
})
export class PresupuestoPage implements OnInit {


	public gastos: string[] = ['Directos', 'Fijos', 'Variables'];
	public selected: any;
	public amount: number;
	public results: string;
	public errors: string='light';
	public desc: string;
	public dictGastos: object[] = [];

	constructor() {}

	ngOnInit() {}

	customPopoverOptions: any = {
		header: 'Gastos',
		subHeader: 'Seleccion de tipo de gastos',
		message: 'Seleccione un unico tipo de gasto.'
	};

	cambioValor(value) {
		console.log(value);
	}

	eliminarGasto(id) {
		this.dictGastos = this.dictGastos.filter(obj => obj["id"] !== id);
	}

	guardar() {
		if(this.amount != null && this.selected != null && this.desc != null) {
			this.errors = 'success';
			this.results = 'Tipo de gasto seleccionado: ' + this.selected + '\nMonto: ' + this.amount + "\nDescripción: " + this.desc;
			this.dictGastos.push({"id": this.dictGastos.length, "tipo": this.selected, "amount": this.amount, "desc": this.desc})
			console.log(this.dictGastos)
		} else {
			this.errors = 'danger';
			this.results = "¡Debe completar el formulario!";
		}
	}  

}
