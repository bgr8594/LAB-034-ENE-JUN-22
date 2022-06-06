import { Injectable } from '@angular/core';
import { Alumno } from '../models/alumno.model';

@Injectable({
  providedIn: 'root'
})
export class AlumnoService {
  setAlumnos(arg0: { id: number; nombre: string; matricula: string; }[]) {
    throw new Error('Method not implemented.');
  }
  actualiza(alumno: Alumno): Alumno[] {
    throw new Error('Method not implemented.');
  }
  agregarAlumno(alumno: Alumno) {
    throw new Error('Method not implemented.');
  }
  getAlumos(): import("../models/alumno.model").Alumno[] {
    throw new Error('Method not implemented.');
  }
  borrarAlumno(id: number) {
    throw new Error('Method not implemented.');
  }

  constructor() { }
}
