import { Injectable } from '@angular/core';
import { Observable } from 'rxjs';
import { Lugar } from '../models/lugar.model';
import { HttpClient } from '@angular/common/http';

@Injectable({
  providedIn: 'root'
})

export class LugaresapiService {
  private basePath: string = "https://localhost:8080/post";

  constructor(
    private http: HttpClient
  ) { }

  // Metodos de CRUD api
  getLugaresApi(): Observable<Lugar[]> {
    return this.http.get<any>(`${this.basePath}/list`, {});
  }

  altaLugarApi(lugar: Lugar): Observable<any> {
    return this.http.post<any>(`${this.basePath}/add`, lugar);
  }

  borrarLugarApi(id: string): Observable<any> {
    return this.http.delete<any>(`${this.basePath}/${id}/delete`, {});
  }
  
  editarLugarApi(id: string, lugar: Lugar): Observable<any> {
    return this.http.put<any>(`${this.basePath}/${id}/update`, lugar, {});
  }
}
