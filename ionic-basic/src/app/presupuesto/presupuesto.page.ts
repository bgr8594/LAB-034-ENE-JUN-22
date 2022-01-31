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

	guardar() {
		if(this.amount != null && this.selected != null) {
			this.errors = 'success';
			this.results = 'Tipo de gasto seleccionado: ' + this.selected + ' \nMonto: ' + this.amount;
		} else {
			this.errors = 'danger';
			this.results = "¡Debe completar el formulario!";
		}
	}  

}
