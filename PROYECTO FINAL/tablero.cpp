#include "tablero.h"
#include <iostream>
#include <iostream>
#include <ctype.h> 
#include <time.h>     
using namespace std;
Tablero::Tablero(int _filas,int _columnas,int _cantidad_minas){
        filas=_filas;
        columnas=_columnas;
        cantidad_minas=_cantidad_minas;
        tablero=new char* [filas];  //https://www.zator.com/Cpp/E4_9_20c.htm
        for (int j = 0; j < filas; j++)     //
            tablero[j] = new char [columnas];

        int l;
        for (l = 0; l < filas; l++) {
            int m;
            for (m = 0; m < columnas; m++) {
                tablero[l][m] = ESPACIO_SIN_DESCUBRIR;
            }
        }        
    }

int Tablero::obtenerMinasCercanas(int fila, int columna) {
        int conteo = 0, filaInicio, filaFin, columnaInicio, columnaFin;
        if (fila <= 0) {
            filaInicio = 0;
        } else {
            filaInicio = fila - 1;
        }
        if (fila + 1 >= filas) {
            filaFin = filas - 1;
        } else {
            filaFin = fila + 1;
        }
        if (columna <= 0) {
            columnaInicio = 0;
        } else {
            columnaInicio = columna - 1;
        }
        if (columna + 1 >= columnas) {
            columnaFin = columnas - 1;
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

int Tablero::aleatorioEnRango(int minimo, int maximo) {
        return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
    }

void Tablero::colocarMinasAleatoriamente() {
        int l;
        for (l = 0; l < cantidad_minas; l++) {
            int fila = aleatorioEnRango(0, filas - 1);
            int columna = aleatorioEnRango(0, columnas - 1);
            colocarMina(fila, columna);
        }
    }

void Tablero::imprimirSeparadorEncabezado() {
        int m;
        for (m = 0; m <= columnas; m++) {
            cout<<("----");
            if (m + 2 == columnas) {
            cout<<("-");
            }
        }
        cout<<endl;
    }
void Tablero::imprimirSeparadorFilas() {
        int m;
        for (m = 0; m <= columnas; m++) {
            cout<<("+---");
            if (m == columnas) {
            cout<<("+");
            }
        }
        cout<<endl;
    }
void Tablero::imprimirEncabezado() {
    imprimirSeparadorEncabezado();
    cout<<("|   ");
    int l;
    for (l = 0; l < columnas; l++) {
        cout<<"| "<<(l + 1)<<" ";
        if (l + 1 == columnas) {
            cout<<("|");
        }
    }
    cout<<endl;
}    
char Tablero::enteroACaracter(int numero) {
        return numero + '0';
    }

void Tablero::imprimirTablero() {
        imprimirEncabezado();
        imprimirSeparadorEncabezado();
        char letra = 'A';
        int l;
        for (l = 0; l < filas; l++) {
            int m;
            cout<<"| "<<(letra)<<" ";
            letra++;
            for (m = 0; m < columnas; m++) {
                char verdaderaLetra = ESPACIO_SIN_DESCUBRIR;
                char letraActual = tablero[l][m];
                if (letraActual == MINA) {
                    verdaderaLetra = ESPACIO_SIN_DESCUBRIR;
                } else if (letraActual == ESPACIO_DESCUBIERTO) {
                    int minasCercanas = obtenerMinasCercanas(l, m);
                    verdaderaLetra = enteroACaracter(minasCercanas);
                }
                cout<<"| "<<(verdaderaLetra)<<" ";
                if (m + 1 == columnas) {
                    cout<<("|");
                }
            }
            cout<<endl;
            imprimirSeparadorFilas();
        }
    } 

int Tablero::abrirCasilla(char filaLetra, int columna) {

        filaLetra = toupper(filaLetra); // para volverla mayuscula
        columna--;
        int fila = filaLetra - 'A';
       
        if (tablero[fila][columna] == MINA) {
            return ERROR_MINA_ENCONTRADA;
        }
        if (tablero[fila][columna] == ESPACIO_DESCUBIERTO) {
            return ERROR_ESPACIO_YA_DESCUBIERTO;
        }
        tablero[fila][columna] = ESPACIO_DESCUBIERTO;
        return ERROR_NINGUNO;
    }

int Tablero::noHayCasillasSinAbrir() {
        int l;
        for (l = 0; l < filas; l++) {
            int m;
            for (m = 0; m < columnas; m++) {
            char actual = tablero[l][m];
            if (actual == ESPACIO_SIN_DESCUBRIR) {
                return 0;
            }
            }
        }
        return 1;
    }
    
void Tablero::colocarMina(int fila_pos, int columna_pos) {
        tablero[fila_pos][columna_pos] = MINA;
    }
