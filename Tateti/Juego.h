#include <iostream>
#include "Tablero.h"
#include "Jugador.h"


using std::ostream;

class Juego {
private:
	string coordenadas[3][3] = {{"A1 - Presiona: 7","A2 - Presiona: 8","A3 - Presiona: 9"},
								 {"B1 - Presiona: 4","B2 - Presiona: 5","B3 - Presiona: 6"},
								  {"C1 - Presiona: 1","C2 - Presiona: 2","C3 - Presiona: 3"}};
	Tablero TableroJuego;
	Jugador J1, J2;
	int x,y, cuentaingresos;
public:
	Juego();
	void jugar();
	void borrarPantalla();
	void imprimirOpciones();
	void imprimirCabecera();
	bool leerOpcion(char fichaIn);
};
