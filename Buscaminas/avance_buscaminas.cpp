
#include <assert.h>  
#include <ctype.h>   
#include <stdlib.h>  
#include <time.h>     
#include <iostream>

#define ERROR_MINA_ENCONTRADA 1
#define ERROR_ESPACIO_YA_DESCUBIERTO 2
#define ERROR_NINGUNO 3
#define COLUMNAS 5
#define FILAS 5
#define ESPACIO_SIN_DESCUBRIR '.'
#define ESPACIO_DESCUBIERTO ' '
#define MINA '*'
#define CANTIDAD_MINAS 5
  
using namespace std;
/*
class tablero{
private:
    char tablero1[FILAS][COLUMNAS];
    int deberiaMostrarMinas = 0;
public:
    tablero();
    int obtenerMinasCercanas(int fila, int columna);
    void iniciarTablero();
    void imprimirSeparadorEncabezado();
    void imprimirSeparadorFilas();
    void imprimirTablero();
};
*/




int obtenerMinasCercanas(int fila, int columna, char tablero[FILAS][COLUMNAS]) {
  int conteo = 0, filaInicio, filaFin, columnaInicio, columnaFin;
  if (fila <= 0) {
    filaInicio = 0;
  } else {
    filaInicio = fila - 1;
  }

  if (fila + 1 >= FILAS) {
    filaFin = FILAS - 1;
  } else {
    filaFin = fila + 1;
  }

  if (columna <= 0) {
    columnaInicio = 0;
  } else {
    columnaInicio = columna - 1;
  }
  if (columna + 1 >= COLUMNAS) {
    columnaFin = COLUMNAS - 1;
  } else {
    columnaFin = columna + 1;
  }
  int m;
  for (m = filaInicio; m <= filaFin; m++) {
    int l;
    for (l = columnaInicio; l <= columnaFin; l++) {
      if (tablero[m][l] == MINA) {
        conteo++;
      }
    }
  }
  return conteo;
}

// Rellena el tablero de espacios sin descubrir
void iniciarTablero(char tablero[FILAS][COLUMNAS]) {
  int l;
  for (l = 0; l < FILAS; l++) {
    int m;
    for (m = 0; m < COLUMNAS; m++) {
      tablero[l][m] = ESPACIO_SIN_DESCUBRIR;
    }
  }
}

void imprimirSeparadorEncabezado() {
  int m;
  for (m = 0; m <= COLUMNAS; m++) {
    cout<<("----");
    if (m + 2 == COLUMNAS) {
      cout<<("-");
    }
  }
  cout<<endl;
}

void imprimirSeparadorFilas() {
  int m;
  for (m = 0; m <= COLUMNAS; m++) {
    cout<<("+---");
    if (m == COLUMNAS) {
      cout<<("+");
    }
  }
  cout<<endl;
}

// Coloca una mina en las coordenadas indicadas
void colocarMina(int fila, int columna, char tablero[FILAS][COLUMNAS]) {
  tablero[fila][columna] = MINA;
}
void imprimirEncabezado() {
  imprimirSeparadorEncabezado();
  cout<<("|   ");
  int l;
  for (l = 0; l < COLUMNAS; l++) {
    cout<<"| "<<(l + 1)<<" ";
    if (l + 1 == COLUMNAS) {
      cout<<("|");
    }
  }
  cout<<endl;
}

char enteroACaracter(int numero) {
  return numero + '0';
}

void imprimirTablero(char tablero[FILAS][COLUMNAS], int deberiaMostrarMinas) {
  imprimirEncabezado();
  imprimirSeparadorEncabezado();
  char letra = 'A';
  int l;
  for (l = 0; l < FILAS; l++) {
    int m;
    cout<<"| "<<(letra)<<" ";
    letra++;
    for (m = 0; m < COLUMNAS; m++) {
      char verdaderaLetra = ESPACIO_SIN_DESCUBRIR;
      char letraActual = tablero[l][m];
      if (letraActual == MINA) {
        verdaderaLetra = ESPACIO_SIN_DESCUBRIR;
      } else if (letraActual == ESPACIO_DESCUBIERTO) {
        int minasCercanas = obtenerMinasCercanas(l, m, tablero);
        verdaderaLetra = enteroACaracter(minasCercanas);
      }
      cout<<"| "<<(verdaderaLetra)<<" ";
      if (m + 1 == COLUMNAS) {
        cout<<("|");
      }
    }
    cout<<endl;
    imprimirSeparadorFilas();
  }
}
int main() {
    char tablero[FILAS][COLUMNAS];
    int deberiaMostrarMinas = 0;

    srand(time(NULL));
    iniciarTablero(tablero);
    //colocarMina(1,3,tablero);
    imprimirTablero(tablero, deberiaMostrarMinas);
    return 0;
}