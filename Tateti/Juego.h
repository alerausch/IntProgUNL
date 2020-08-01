#ifndef JUEGO_H
#define JUEGO_H

#include <iostream>
#include <string>
#include "Tablero.h"
#include "Jugador.h"


class Juego {
private:
	//tablero de opciones
	string opciones[3][3] = {{"A1 - Presiona: 7","A2 - Presiona: 8","A3 - Presiona: 9"},
								{"B1 - Presiona: 4","B2 - Presiona: 5","B3 - Presiona: 6"},
								{"C1 - Presiona: 1","C2 - Presiona: 2","C3 - Presiona: 3"}};
	
	//declaración de objeto Tablero
	Tablero TableroJuego;
	
	//declaración de 2 objetos Jugador
	Jugador J1, J2;
	int x,y;
public:
	//constructor nulo
	Juego();
	
	//métodos varios
	void jugar();
	void borrarPantalla();
	void imprimirOpciones();
	void imprimirCabecera();
	bool leerOpcion(char fichaIn);
};


#endif

