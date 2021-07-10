#include "tablero.h"

int main() {
  Tablero tablero(6,6,4);
  srand(time(NULL));
  tablero.colocarMinasAleatoriamente();
 
  while (1) {
    //tablero.imprimirTablero();
    cout<<tablero;
    int columna;
    char fila;
    cout<<("Ingresa la fila | columna: ");
    cin>>fila>>columna;
    int status = tablero.abrirCasilla(fila, columna);
    if (tablero.noHayCasillasSinAbrir()) {
      cout<<("Has ganado")<<endl;
    } else if (status == ERROR_ESPACIO_YA_DESCUBIERTO) {
      cout<<("Ya has abierto esta casilla")<<endl;
    } else if (status == ERROR_MINA_ENCONTRADA) {
      cout<<("Has perdido")<<endl;
      break;
    }
  }
  return 0;
}