import { Component, OnInit } from '@angular/core';
import { Router } from '@angular/router';
import { AngularFireAuth } from 'angularfire2/auth';
import { link } from 'fs';

@Component({
  selector: 'app-float-menu',
@@ -9,10 +12,39 @@ import { MenuElement } from 'src/app/models/menu.model';
import { AuthGuard } from '../auth.guard';
import { MenuServiceService } from '../menu-service.services';
})
export class FloatMenuComponent implements OnInit {

  titleMenu: string='home';

  public isLoged : any = false;

  datosMenu: MenuElement[] =[
    {nombre: 'home',enlace:'/home',
    icono:'home-outline'},
    {nombre: 'Alumnos',enlace:'/alumnos'},
    {nombre: 'login',enlace:'/login',
    icono:'log-in-outline'},
    {nombre: 'logout',enlace:'/home',
    icono:'log-out-outline'}
  ];

  constructor(private router: Router, private authGuard: AuthGuard,
    private menuService: MenuServiceService,
    private afAuth: AngularFireAuth) { }

  ngOnInit() {
    this.afAuth.authState.subscribe(user => this.isLoged= user);

    this.menuService.$getTitleMenu.subscribe(data=>{
      console.log(data);
      this.titleMenu =data;
    });
  }

  navegar(link: string, titleMenu: string){
    this.titleMenu =titleMenu;
    this.router.navigate([link]);
  }

  onMenuOpen(){
    if(this.isLoged){
      this.datosMenu =[
        {nombre: 'Alumnos',enlace:'/alumnos',
  icono:'school-outline'},
    {nombre: 'Receteas',enlace:'/receta',
    icono:'restaurant-outline'},
@@ -21,14 +53,20 @@ export class FloatMenuComponent implements OnInit {
  ngOnInit(): void {
    throw new Error('Method not implemented.');
  }
}
    {nombre: 'inicio',enlace:'/inicio',
    icono:'navigate-outline'},
    {nombre: 'Tabs',enlace:'/tabs',
    icono:'folder-outline'}
  ];

  FloatMenuComponent.constructor(private Router: Router) { }

  this.ngOnInit() {}

  this.navegar(link: string){
    this.router.navigate([link]);
    icono:'folder-outline'},
    {nombre: 'login',enlace:'/login',
    icono:'log-in-outline'},
        {nombre: 'logout',enlace:'/home',
        icono:'log-out-outline'},
      ;

    } else{
      this.datosMenu =[
        {nombre: 'login',enlace:'/login',
        icono:'log-in-outline'},
        {nombre: 'logout',enlace:'/home',
        icono:'log-out-outline'}
      ];
    }
  }
}
function private(private: any, router: any, Router: typeof Router) {
  throw new Error('Function not implemented.');
}

