#pragma once
#include "typedefs.h"

void Datos::identificadorPuerto(int tecla) { //Funcion que asigna un identificador al puerto.

  switch (tecla) {
    case 1:
      IDPuerto[0] = 1;
      break;
    case 2:
      IDPuerto[1] = 2;
      break;
    case 3:
      IDPuerto[2] = 3;
      break;
    case 4:
      IDPuerto[3] = 4;
      break;
    case 5:
      IDPuerto[4] = 5;
      break;
    case 6:
      IDPuerto[5] = 6;
      break;
    case 7:
      IDPuerto[6] = 7;
      break;
    case 8:
      IDPuerto[7] = 8;
      break;
    case 9:
      IDPuerto[8] = 9;
      break;
    case 10:
      IDPuerto[9] = 10;
      break;
  } //Cierre el switch
}// Cierre del void general::identificadorP

int Datos::NombrePuerto(int tecla) { //Funcion para leer el nombre del puerto

  switch (tecla) {
    case 1:
      fflush(stdin);
      scanf("%[^\n]", &nombreP[0]);
      indicador[0] = true;
      break;
    case 2:
      fflush(stdin);
      scanf("%[^\n]", &nombreP[1]);
      indicador[1] = true;
      break;
    case 3:
      fflush(stdin);
      scanf("%[^\n]", &nombreP[2]);
      indicador[2] = true;
      break;
    case 4:
      fflush(stdin);
      scanf("%[^\n]", &nombreP[3]);
      indicador[3] = true;
      break;
    case 5:
      fflush(stdin);
      scanf("%[^\n]", &nombreP[4]);
      indicador[4] = true;
      break;
    case 6:
      fflush(stdin);
      scanf("%[^\n]", &nombreP[5]);
      indicador[5] = true;
      break;
    case 7:
      fflush(stdin);
      scanf("%[^\n]", &nombreP[6]);
      indicador[6] = true;
      break;
    case 8:
      fflush(stdin);
      scanf("%[^\n]", &nombreP[7]);
      indicador[7] = true;
      break;
    case 9:
      fflush(stdin);
      scanf("%[^\n]", &nombreP[8]);
      indicador[8] = true;
      break;
    case 10:
      fflush(stdin);
      scanf("%[^\n]", &nombreP[9]);
      indicador[9] = true;
      break;
  }
}

int Datos::tipodeP (int tecla) { //Funcion para definir el tipo de puerto

  char teclatipoP;
  switch (tecla) {
    case 1:
      scanf(" %c", &teclatipoP);
      if (teclatipoP == 'Y' ) {
        TipoP[0] = Yacimiento;
      }
        else if (teclatipoP == 'R' ) {
          TipoP[0] = Refineria;
        }
        else if (teclatipoP == 'D') {
          TipoP[0] = Deposito;
        }
      break;

    case 2:
      scanf(" %c", &teclatipoP);
      if (teclatipoP == 'Y' ) {
        TipoP[1] = Yacimiento;
      }
        else if (teclatipoP == 'R' ) {
          TipoP[1] = Refineria;
        }
        else if (teclatipoP == 'D') {
          TipoP[1] = Deposito;
        }
      break;

    case 3:
      scanf(" %c", &teclatipoP);
      if (teclatipoP == 'Y' ) {
        TipoP[2] = Yacimiento;
      }
        else if (teclatipoP == 'R' ) {
          TipoP[2] = Refineria;
        }
        else if (teclatipoP == 'D') {
          TipoP[2] = Deposito;
        }
      break;

    case 4:
    scanf(" %c", &teclatipoP);
      if (teclatipoP == 'Y' ) {
        TipoP[3] = Yacimiento;
      }
        else if (teclatipoP == 'R' ) {
          TipoP[3] = Refineria;
        }
        else if (teclatipoP == 'D') {
          TipoP[3] = Deposito;
        }
      break;

    case 5:
      scanf(" %c", &teclatipoP);
      if (teclatipoP == 'Y' ) {
        TipoP[4] = Yacimiento;
      }
        else if (teclatipoP == 'R' ) {
          TipoP[4] = Refineria;
        }
        else if (teclatipoP == 'D') {
          TipoP[4] = Deposito;
        }
      break;

    case 6:
    scanf(" %c", &teclatipoP);
      if (teclatipoP == 'Y' ) {
        TipoP[5] = Yacimiento;
      }
        else if (teclatipoP == 'R' ) {
          TipoP[5] = Refineria;
        }
        else if (teclatipoP == 'D') {
          TipoP[5] = Deposito;
        }
      break;

    case 7:
      scanf(" %c", &teclatipoP);
      if (teclatipoP == 'Y' ) {
        TipoP[6] = Yacimiento;
      }
        else if (teclatipoP == 'R' ) {
          TipoP[6] = Refineria;
        }
        else if (teclatipoP == 'D') {
          TipoP[6] = Deposito;
        }
      break;

    case 8:
      scanf(" %c", &teclatipoP);
      if (teclatipoP == 'Y' ) {
        TipoP[7] = Yacimiento;
      }
        else if (teclatipoP == 'R' ) {
          TipoP[7] = Refineria;
        }
        else if (teclatipoP == 'D') {
          TipoP[7] = Deposito;
        }
      break;

    case 9:
      scanf(" %c", &teclatipoP);
      if (teclatipoP == 'Y' ) {
        TipoP[8] = Yacimiento;
      }
        else if (teclatipoP == 'R' ) {
          TipoP[8] = Refineria;
        }
        else if (teclatipoP == 'D') {
          TipoP[8] = Deposito;
        }
      break;

    case 10:
      scanf(" %c", &teclatipoP);
      if (teclatipoP == 'Y' ) {
        TipoP[9] = Yacimiento;
      }
        else if (teclatipoP == 'R' ) {
          TipoP[9] = Refineria;
        }
        else if (teclatipoP == 'D') {
          TipoP[9] = Deposito;
        }
      break;
  } //Cierre del switch


} //Cierre del int tipodeP (int tecla)

char Datos::identificadorB (char tecla) { //Funcion que asigna un identificador a un buque.

  switch (tecla) {
    case 'A':
      IDBuque[0] = 'A';
      break;
    case 'B':
      IDBuque[1] = 'B';
      break;
    case 'C':
      IDBuque[2] = 'C';
      break;
    case 'D':
      IDBuque[3] = 'D';
      break;
    case 'E':
      IDBuque[4] = 'E';
      break;
  } //Cierre del switch

} //Cierre del identificadorB (char tecla)


char Datos::NombreB (char tecla) { //Funcion para guardar los nombres del buque segun el identificador.

  switch (tecla) {
    case 'A':
      fflush(stdin);
      scanf("%[^\n]", &nombreB[0]);
      indicadorB[0] = true;

      break;
    case 'B':
      fflush(stdin);
      scanf("%[^\n]", &nombreB[1]);
      indicadorB[1] = true;
      break;
    case 'C':
      fflush(stdin);
      scanf("%[^\n]", &nombreB[2]);
      indicadorB[2] = true;
      break;
    case 'D':
      fflush(stdin);
      scanf("%[^\n]", &nombreB[3]);
      indicadorB[3] = true;
      break;
    case 'E':
      fflush(stdin);
      scanf("%[^\n]", &nombreB[4]);
      indicadorB[4] = true;
      break;
  } //Cierre del switch
} //Cierre del char general::NombreB (char tecla)


char Datos::Fecha (char tecla) { //Funcion para guardar las fechas por identificador.

  switch (tecla) {
    case 'A':
      printf("       Fecha inicio: Dia? ");
      scanf(" %d", &dia[0]);
      printf("       Fecha inicio: Mes? ");
      scanf(" %d", &mes[0]);
      printf("       Fecha inicio: Anno? ");
      scanf(" %d", &anno[0]);
      break;

    case 'B':
      printf("       Fecha inicio: Dia? ");
      scanf(" %d", &dia[1]);
      printf("       Fecha inicio: Mes? ");
      scanf(" %d", &mes[1]);
      printf("       Fecha inicio: Anno? ");
      scanf(" %d", &anno[1]);
      break;

    case 'C':
      printf("       Fecha inicio: Dia? ");
      scanf(" %d", &dia[2]);
      printf("       Fecha inicio: Mes? ");
      scanf(" %d", &mes[2]);
      printf("       Fecha inicio: Anno? ");
      scanf(" %d", &anno[2]);
      break;

    case 'D':
      printf("       Fecha inicio: Dia? ");
      scanf(" %d", &dia[3]);
      printf("       Fecha inicio: Mes? ");
      scanf(" %d", &mes[3]);
      printf("       Fecha inicio: Anno? ");
      scanf(" %d", &anno[3]);
      break;

    case 'E':
      printf("       Fecha inicio: Dia? ");
      scanf(" %d", &dia[4]);
      printf("       Fecha inicio: Mes? ");
      scanf(" %d", &mes[4]);
      printf("       Fecha inicio: Anno? ");
      scanf(" %d", &anno[4]);
      break;
  } //Cierre del switch.

} //Cierre del char general::Fecha (char tecla)


int Datos::Puertosdisponibles () { // Funcion que imprime los puertos disponibles
//Funcion que imipirme los puertos disponibles para la ubicacion inicial del buque.
  for (int i = 0; i < 20; i++) {

    if (indicador[0] == true) {
      if (TipoP[0] == Yacimiento) {
        printf("     %d - %s       Tipo: Yacimiento\n", IDPuerto[0], nombreP[0]);
      }
        else if (TipoP[0] == Refineria) {
          printf("     %d - %s       Tipo: Refineria\n", IDPuerto[0],nombreP[0]);
        }
        else if (TipoP[0] == Deposito) {
          printf("     %d - %s       Tipo: Deposito\n", IDPuerto[0],nombreP[0]);
        }
      indicador[0] = false;
    }
      else if (indicador[1] == true) {
        if (TipoP[1] == Yacimiento) {
          printf("     %d - %s       Tipo: Yacimiento\n", IDPuerto[1],nombreP[1]);
        }
          else if (TipoP[1] == Refineria) {
            printf("     %d - %s       Tipo: Refineria\n", IDPuerto[1],nombreP[1]);
          }
          else if (TipoP[1] == Deposito) {
            printf("     %d - %s       Tipo: Deposito\n", IDPuerto[1],nombreP[1]);
          }
        indicador[1] = false;
      }
      else if (indicador[2] == true) {
        if (TipoP[2] == Yacimiento) {
          printf("     %d - %s       Tipo: Yacimiento\n", IDPuerto[2],nombreP[2]);
        }
          else if (TipoP[2] == Refineria) {
            printf("     %d - %s       Tipo: Refineria\n", IDPuerto[2],nombreP[2]);
          }
          else if (TipoP[2] == Deposito) {
            printf("     %d - %s       Tipo: Deposito\n", IDPuerto[2],nombreP[2]);
          }
        indicador[2] = false;
      }
      else if (indicador[3] == true) {
        if (TipoP[3] == Yacimiento) {
          printf("     %d - %s       Tipo: Yacimiento\n", IDPuerto[3],nombreP[3]);
        }
          else if (TipoP[3] == Refineria) {
            printf("     %d - %s       Tipo: Refineria\n", IDPuerto[3],nombreP[3]);
          }
          else if (TipoP[3] == Deposito) {
            printf("     %d - %s       Tipo: Deposito\n", IDPuerto[3],nombreP[3]);
          }
        indicador[3] = false;
      }
      else if (indicador[4] == true) {
        if (TipoP[4] == Yacimiento) {
          printf("     %d - %s       Tipo: Yacimiento\n", IDPuerto[4],nombreP[4]);
        }
          else if (TipoP[4] == Refineria) {
            printf("     %d - %s       Tipo: Refineria\n", IDPuerto[4],nombreP[4]);
          }
          else if (TipoP[4] == Deposito) {
            printf("     %d - %s       Tipo: Deposito\n", IDPuerto[4],nombreP[4]);
          }
        indicador[4] = false;
      }
      else if (indicador[5] == true) {
        if (TipoP[5] == Yacimiento) {
          printf("     %d - %s       Tipo: Yacimiento\n", IDPuerto[5],nombreP[5]);
        }
          else if (TipoP[5] == Refineria) {
            printf("     %d - %s       Tipo: Refineria\n", IDPuerto[5],nombreP[5]);
          }
          else if (TipoP[5] == Deposito) {
            printf("     %d - %s       Tipo: Deposito\n", IDPuerto[5],nombreP[5]);
          }
        indicador[5] = false;
      }
      else if (indicador[6] == true) {
        if (TipoP[6] == Yacimiento) {
          printf("     %d - %s       Tipo: Yacimiento\n", IDPuerto[6],nombreP[6]);
        }
          else if (TipoP[6] == Refineria) {
            printf("     %d - %s       Tipo: Refineria\n", IDPuerto[6],nombreP[6]);
          }
          else if (TipoP[6] == Deposito) {
            printf("     %d - %s       Tipo: Deposito\n", IDPuerto[6],nombreP[6]);
          }
        indicador[6] = false;
      }
      else if (indicador[7] == true) {
        if (TipoP[7] == Yacimiento) {
          printf("     %d - %s       Tipo: Yacimiento\n", IDPuerto[7],nombreP[7]);
        }
          else if (TipoP[7] == Refineria) {
            printf("     %d - %s       Tipo: Refineria\n", IDPuerto[7],nombreP[7]);
          }
          else if (TipoP[7] == Deposito) {
            printf("     %d - %s       Tipo: Deposito\n", IDPuerto[7],nombreP[7]);
          }
        indicador[7] = false;
      }
      else if (indicador[8] == true) {
        if (TipoP[8] == Yacimiento) {
          printf("     %d - %s       Tipo: Yacimiento\n", IDPuerto[8],nombreP[8]);
        }
          else if (TipoP[8] == Refineria) {
            printf("     %d - %s       Tipo: Refineria\n", IDPuerto[8],nombreP[8]);
          }
          else if (TipoP[8] == Deposito) {
            printf("     %d - %s       Tipo: Deposito\n", IDPuerto[8],nombreP[8]);
          }
        indicador[8] = false;
      }
      else if (indicador[9] == true) {
        if (TipoP[9] == Yacimiento) {
          printf("     %d - %s       Tipo: Yacimiento\n", IDPuerto[9],nombreP[9]);
        }
          else if (TipoP[9] == Refineria) {
            printf("     %d - %s       Tipo: Refineria\n", IDPuerto[9],nombreP[9]);
          }
          else if (TipoP[9] == Deposito) {
            printf("     %d - %s       Tipo: Deposito\n", IDPuerto[9],nombreP[9]);
          }
        indicador[9] = false;
      }
  }//Cierre del for

  for (int i = 0; i < 20; i++) {
    if (indicador[0] == false) {
      indicador[0] = true;
    }
      else if (indicador[1] == false) {
        indicador[1] = true;
      }
      else if (indicador[2] == false) {
        indicador[2] = true;
      }

      else if (indicador[3] == false) {
        indicador[3] = true;
      }

      else if (indicador[4] == false) {
        indicador[4] = true;
      }

      else if (indicador[5] == false) {
        indicador[5] = true;
      }

      else if (indicador[6] == false) {
        indicador[6] = true;
      }

      else if (indicador[7] == false) {
        indicador[7] = true;
        }

      else if (indicador[8] == false) {
        indicador[8] = true;
      }

      else if (indicador[9] == false) {
        indicador[9] = true;
      }
  }

  //ACORDARSE DE HACER EL REINICIADOR
} // Cierre del int general::Pdisponibles ();

char Datos::selecionPinicio (char selecion, int selecionP) {
//Selecciona el puerto de inicio del buque, este apartado todavia no tiene mucha utilidad aun.

  if (selecion == 'A') {
    switch (selecionP) {
      case 1:
        strcpy(BuqueInicioPuerto[0], nombreP[0]);
        break;
      case 2:
        strcpy(BuqueInicioPuerto[0], nombreP[1]);
        break;
      case 3:
        strcpy(BuqueInicioPuerto[0], nombreP[2]);
        break;
      case 4:
        strcpy(BuqueInicioPuerto[0], nombreP[3]);
        break;
      case 5:
        strcpy(BuqueInicioPuerto[0], nombreP[4]);
        break;
      case 6:
        strcpy(BuqueInicioPuerto[0], nombreP[5]);
        break;
      case 7:
        strcpy(BuqueInicioPuerto[0], nombreP[6]);
        break;
      case 8:
        strcpy(BuqueInicioPuerto[0], nombreP[7]);
        break;
      case 9:
        strcpy(BuqueInicioPuerto[0], nombreP[8]);
        break;
      case 10:
        strcpy(BuqueInicioPuerto[0], nombreP[9]);
        break;
    }
  }
    else if (selecion == 'B') {
      switch (selecionP) {
        case 1:
          strcpy(BuqueInicioPuerto[1], nombreP[0]);
          break;
        case 2:
          strcpy(BuqueInicioPuerto[1], nombreP[1]);
          break;
        case 3:
          strcpy(BuqueInicioPuerto[1], nombreP[2]);
          break;
        case 4:
          strcpy(BuqueInicioPuerto[1], nombreP[3]);
          break;
        case 5:
          strcpy(BuqueInicioPuerto[1], nombreP[4]);
          break;
        case 6:
          strcpy(BuqueInicioPuerto[1], nombreP[5]);
          break;
        case 7:
          strcpy(BuqueInicioPuerto[1], nombreP[6]);
          break;
        case 8:
          strcpy(BuqueInicioPuerto[1], nombreP[7]);
          break;
        case 9:
          strcpy(BuqueInicioPuerto[1], nombreP[8]);
          break;
        case 10:
          strcpy(BuqueInicioPuerto[1], nombreP[9]);
          break;
      }
    }
    else if (selecion == 'C') {
      switch (selecionP) {
        case 1:
          strcpy(BuqueInicioPuerto[2], nombreP[0]);
          break;
        case 2:
          strcpy(BuqueInicioPuerto[2], nombreP[1]);
          break;
        case 3:
          strcpy(BuqueInicioPuerto[2], nombreP[2]);
          break;
        case 4:
          strcpy(BuqueInicioPuerto[2], nombreP[3]);
          break;
        case 5:
          strcpy(BuqueInicioPuerto[2], nombreP[4]);
          break;
        case 6:
          strcpy(BuqueInicioPuerto[2], nombreP[5]);
          break;
        case 7:
          strcpy(BuqueInicioPuerto[2], nombreP[6]);
          break;
        case 8:
          strcpy(BuqueInicioPuerto[2], nombreP[7]);
          break;
        case 9:
          strcpy(BuqueInicioPuerto[2], nombreP[8]);
          break;
        case 10:
          strcpy(BuqueInicioPuerto[2], nombreP[9]);
          break;
      }
    }
    else if (selecion == 'D') {
      switch (selecionP) {
        case 1:
          strcpy(BuqueInicioPuerto[3], nombreP[0]);
          break;
        case 2:
          strcpy(BuqueInicioPuerto[3], nombreP[1]);
          break;
        case 3:
          strcpy(BuqueInicioPuerto[3], nombreP[2]);
          break;
        case 4:
          strcpy(BuqueInicioPuerto[3], nombreP[3]);
          break;
        case 5:
          strcpy(BuqueInicioPuerto[3], nombreP[4]);
          break;
        case 6:
          strcpy(BuqueInicioPuerto[3], nombreP[5]);
          break;
        case 7:
          strcpy(BuqueInicioPuerto[3], nombreP[6]);
          break;
        case 8:
          strcpy(BuqueInicioPuerto[3], nombreP[7]);
          break;
        case 9:
          strcpy(BuqueInicioPuerto[3], nombreP[8]);
          break;
        case 10:
          strcpy(BuqueInicioPuerto[3], nombreP[9]);
          break;
      }
    }
    else if (selecion == 'E') {
      switch (selecionP) {
        case 1:
          strcpy(BuqueInicioPuerto[4], nombreP[0]);
          break;
        case 2:
          strcpy(BuqueInicioPuerto[4], nombreP[1]);
          break;
        case 3:
          strcpy(BuqueInicioPuerto[4], nombreP[2]);
          break;
        case 4:
          strcpy(BuqueInicioPuerto[4], nombreP[3]);
          break;
        case 5:
          strcpy(BuqueInicioPuerto[4], nombreP[4]);
          break;
        case 6:
          strcpy(BuqueInicioPuerto[4], nombreP[5]);
          break;
        case 7:
          strcpy(BuqueInicioPuerto[4], nombreP[6]);
          break;
        case 8:
          strcpy(BuqueInicioPuerto[4], nombreP[7]);
          break;
        case 9:
          strcpy(BuqueInicioPuerto[4], nombreP[8]);
          break;
        case 10:
          strcpy(BuqueInicioPuerto[4], nombreP[9]);
          break;
      }
    }
}

void Datos::VerestadoBuques() {
//Falta hacer la carga del buque
  for (int Contador = 0; Contador <= 6; Contador++) {
    if (indicadorB[0]== true) {
      printf("%c    %s       %s          %d/%d/%d        Carga\n\n", IDBuque[0], nombreB[0], BuqueInicioPuerto[0], dia[0], mes[0], anno[0]);
      indicadorB[0] = false;
    }
      else if (indicadorB[1] == true) {
        printf("%c    %s       %s          %d/%d/%d        Carga\n\n", IDBuque[1], nombreB[1], BuqueInicioPuerto[1], dia[1], mes[1], anno[1]);
        indicadorB[1] = false;
      }
      else if (indicadorB[2] == true) {
        printf("%c    %s       %s          %d/%d/%d        Carga\n\n", IDBuque[2], nombreB[2], BuqueInicioPuerto[2], dia[2], mes[2], anno[2]);
        indicadorB[2] = false;
      }
      else if (indicadorB[3] == true) {
        printf("%c    %s       %s          %d/%d/%d        Carga\n\n", IDBuque[3], nombreB[3], BuqueInicioPuerto[3], dia[3], mes[3], anno[3]);
        indicadorB[3] = false;
      }
      else if (indicadorB[4] == true) {
        printf("%c    %s       %s          %d/%d/%d        Carga\n\n", IDBuque[4], nombreB[4], BuqueInicioPuerto[4], dia[4], mes[4], anno[4]);
        indicadorB[4] = false;
      }
  }

  for (int ContadorReiniciador = 0; ContadorReiniciador <= 6; ContadorReiniciador++) {
    if (indicadorB[0]== false) {
      indicadorB[0] = true;
    }
      else if (indicadorB[1] == false) {
        indicadorB[1] = true;
      }
      else if (indicadorB[2] == false) {
        indicadorB[2] = true;
      }
      else if (indicadorB[3] == false) {
        indicadorB[3] = true;
      }
      else if (indicadorB[4] == false) {
        indicadorB[4] = true;
      }
  }

}

