#include "Jugador.h"

Jugador::Jugador(string nombreJugador, char fichaAsignada, int colorAsig){
	nombre = nombreJugador;
	ficha = fichaAsignada;
	color = colorAsig;
};

string Jugador::mostrarNombre(){
	return nombre;
};
char Jugador::mostrarFicha(){
	return ficha; 
};
int Jugador::mostrarColor(){
	return color;
}
