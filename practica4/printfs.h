
#include "funciones.h"

void Datos::editarPuerto () {

  int teclaopcion;
  printf("Editar Puerto:\n\n");

  printf("       Identificador (numero entre 1 y 10)? ");
  fflush(stdin);
  scanf(" %d", &teclaopcion);
  identificadorPuerto(teclaopcion);
  fflush(stdin);
  printf("       Nombre (entre 1 y 20 caracteres)? ");
  NombrePuerto(teclaopcion);

  printf("       Tipo (Y-Yacimiento, R-Refineria, D-Deposito)? ");
  tipodeP(teclaopcion);
  fflush(stdin);
}

void Datos::editarBuque() {
  int teclaselecionP;
  char teclaopcion;
  printf("Editar Buque:\n\n");

  printf("       Identificador (letra entre A y E)? ");
  fflush(stdin);
  scanf(" %c", &teclaopcion);
  identificadorB(teclaopcion);

  printf("       Nombre (entre 1 y 20)? ");
  NombreB(teclaopcion);
  Fecha (teclaopcion);
  printf("       Puertos posibles para la ubicacion inicial del buque: \n");
  Puertosdisponibles();
  printf("       Identificador de puerto inicio? ");
  scanf(" %d", &teclaselecionP);
  selecionPinicio(teclaopcion, teclaselecionP);
  fflush(stdin);
}

void Datos::estadoBuques() {

  printf("Id    Nombre       Puerto          Ultima Fecha        Carga\n\n");
  VerestadoBuques();
  fflush(stdin);
}
