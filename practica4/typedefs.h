
typedef int IDpuertos;
typedef char Nombre[19];
typedef char BuqueinicioPuerto[19];
typedef enum TipoPuerto {Yacimiento, Refineria, Deposito};
typedef char IDbuque;
typedef char Nombrebuque[19];
typedef int fechas;

typedef struct Datos {
  IDpuertos IDPuerto[9];
  Nombre nombreP[9];
  TipoPuerto TipoP[9];
  BuqueinicioPuerto BuqueInicioPuerto[4];

  IDbuque IDBuque[4];
  Nombrebuque nombreB[4];
  fechas dia[4];
  fechas mes[4];
  fechas anno[4];

  void editarPuerto();
  int indicador[10];
  void identificadorPuerto (int tecla);

  int NombrePuerto(int tecla);
  int tipodeP (int tecla);
  void editarBuque();
  int indicadorB[4];
  char identificadorB (char tecla);
  char NombreB (char tecla);
  char Fecha (char tecla);
  int Puertosdisponibles ();

  char selecionPinicio (char selecion, int teclaselecionP);
  void estadoBuques();
  void VerestadoBuques();
};

