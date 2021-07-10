#ifndef __TABLERO_H_
#define __TABLERO_H_
#include <iostream>
#include <ctype.h> 
#include <time.h>     

#define ERROR_MINA_ENCONTRADA 1
#define ERROR_ESPACIO_YA_DESCUBIERTO 2
#define ERROR_NINGUNO 3

#define ESPACIO_SIN_DESCUBRIR '.'
#define ESPACIO_DESCUBIERTO ' '
#define MINA '*'
using namespace std;
class Tablero{
public:
    int cantidad_minas;
    int filas;
    int columnas;
    char **tablero;
    int deberiaMostrarMinas = 0;

    Tablero(int _filas,int _columnas,int _cantidad_minas);
    
    int obtenerMinasCercanas(int fila, int columna);

    int aleatorioEnRango(int minimo, int maximo);

    void colocarMinasAleatoriamente();

    void imprimirSeparadorEncabezado();

    void imprimirSeparadorFilas();

    void imprimirEncabezado();

    char enteroACaracter(int numero);

    void imprimirTablero();

    int abrirCasilla(char filaLetra, int columna);

    int noHayCasillasSinAbrir();
    //funcion para probar
    void colocarMina(int fila_pos, int columna_pos);
    
    friend ostream& operator << (ostream &o, Tablero &p){
        p.imprimirEncabezado();
        p.imprimirSeparadorEncabezado();
    
        char letra = 'A';
        int l;
        for (l = 0; l < p.filas; l++) {
            int m;
            o<<"| "<<(letra)<<" ";
            letra++;
            for (m = 0; m < p.columnas; m++) {
                char verdaderaLetra = ESPACIO_SIN_DESCUBRIR;
                char letraActual = p.tablero[l][m];
                if (letraActual == MINA) {
                    verdaderaLetra = ESPACIO_SIN_DESCUBRIR;
                } else if (letraActual == ESPACIO_DESCUBIERTO) {
                    int minasCercanas = p.obtenerMinasCercanas(l, m);
                    verdaderaLetra = p.enteroACaracter(minasCercanas);
                }
                o<<"| "<<(verdaderaLetra)<<" ";
                if (m + 1 == p.columnas) {
                    o<<("|");
                }
            }
            o<<endl;
            p.imprimirSeparadorFilas();
            }
            return o;
        } 


};
  
#endif