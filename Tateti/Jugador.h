#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
using namespace std;

class Jugador {
private:
	string nombre;
	char ficha;
	int color;
public:
	//constructor nulo
	Jugador (){};
	
	//constructor con parametros
	Jugador(string nombreJugador, char fichaAsignada, int colorAsig);
	
	//metodos de recuperación de atributos
	string mostrarNombre();
	int mostrarColor();
	char mostrarFicha();
};

#endif

