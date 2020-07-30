#include "Tablero.h"
#include <iostream>
using namespace std;

Tablero::Tablero(){
	cuentaFichas = 0;
};

bool Tablero::revisarTateti(char fichaIn){
	int hayTateti= false;
	if (cuentaFichas >= 5){
		//reviso horizontales	
		if ( (fichaIn==tablero[2][4]) && (fichaIn==tablero[2][8]) && (fichaIn==tablero[2][12])){
			hayTateti= true;
		}
		if ( (fichaIn==tablero[4][4]) && (fichaIn==tablero[4][8]) && (fichaIn==tablero[4][12])){
			hayTateti= true;
		}
		if ( (fichaIn==tablero[6][4]) && (fichaIn==tablero[6][8]) && (fichaIn==tablero[6][12])){
			hayTateti= true;
		}
		//reviso verticales	
		if ( (fichaIn==tablero[2][4]) && (fichaIn==tablero[4][4]) && (fichaIn==tablero[6][4])){
			hayTateti= true;
		}
		if ( (fichaIn==tablero[2][8]) && (fichaIn==tablero[4][8]) && (fichaIn==tablero[6][8])){
			hayTateti= true;
		}
		if ( (fichaIn==tablero[2][12]) && (fichaIn==tablero[4][12]) && (fichaIn==tablero[6][12])){
			hayTateti= true;
		}
	}
	if (hayTateti){
		return true;
	}else{
		return false;
	}
}

void Tablero::borrarBoton(int x, int y){
	minitablero[x][y]= ' ';
};

bool Tablero::revisarPosicion(int x, int y){
	if (minitablero[x][y]!=' '){
		return true;
	}else{
		return false;
	}
};

bool Tablero::revisarCompleto(){
	if (cuentaFichas==9){
		return true;
	}else{
		return false;
	}
}
void Tablero::dibujarTablero(){
	for (int i=0; i<8; i++){
		cout<<"     ";
		for (int j=0; j<15; j++){
			cout<<tablero[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
};
void Tablero::insertarFicha(int x, int y, char fichaIn){
	tablero[x][y]= fichaIn;
	cuentaFichas++;
}
