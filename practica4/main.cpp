#include <stdio.h>
#include <string.h>
#include "printfs.h"


int main () {
  Datos LlamarFuncion;
  char teclaopcion;
  printf("GesFlota: Gestion de Moviemientos de una Flota \n \n");

  printf("     Editar Puerto               (Pulsar P) \n");
  printf("     Editar Buque                (Pulsar B) \n");
  printf("     Estado Buques               (Pulsar E) \n");
  printf("     Operar Buque                (Pulsar O) \n");
  printf("     Estado Mensual Buque        (Pulsar R) \n");
  printf("     Salir                       (Pulsar S) \n \n");

  printf("Teclear una opcion valida (P|B|E|O|R|S)? ");

  while (teclaopcion != 'S') {
    fflush(stdin);
    scanf(" %c", &teclaopcion);
    if (teclaopcion == 'P') {
      LlamarFuncion.editarPuerto();
    }
      else if (teclaopcion == 'B') {
        LlamarFuncion.editarBuque();
      }
      else if (teclaopcion == 'E') {
        LlamarFuncion.estadoBuques();
      }
      else if (teclaopcion == 'O') {

      }
      else if (teclaopcion == 'R') {

      }
      else if (teclaopcion == 'S') {
        continue;
      }
  } //Cierre del while (teclaopcion != 'S')


} //Cierre del main()
