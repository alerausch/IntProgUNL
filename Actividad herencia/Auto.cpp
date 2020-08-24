#include "Auto.h"
#include <cstdlib>
#include <conio2.h>

#include <iostream>
#include <cstdio>
using namespace std;

/*
// CONSTRUCTOR
*/

Auto::Auto(int vel, int x0, int y0){
	
	velocidad = vel;
	paso=CLOCKS_PER_SEC/velocidad; //cada cuanto se permite mover la pelotita 16 veces por segundo
	tempo=clock(); //inicializamos tempo con el reloj
	
	int Color = (rand()%15)+1;
	
	matriz[0][0]=0;  color[0][0] = 8;
	matriz[0][1]=219; color[0][1] = 15;
	matriz[0][2]=0; color[0][2] = 8;
	matriz[0][3]=219; color[0][3] = 15;
	matriz[1][0]=0;  color[1][0] = Color;
	matriz[1][1]=61; color[1][1] = 8;
	matriz[1][2]=47; color[1][2] = Color;
	matriz[1][3]=61; color[1][3] = 8;
	matriz[2][0]=30; color[2][0] = Color;
	matriz[2][1]=61; color[2][1] = 8;
	matriz[2][2]=0;  color[2][2] = Color;
	matriz[2][3]=61; color[2][3] = 8;
	matriz[3][0]=0;  color[3][0] = Color;
	matriz[3][1]=61; color[3][1] = 8;
	matriz[3][2]=92; color[3][2] = Color;
	matriz[3][3]=61; color[3][3] = 8;
	matriz[4][0]=0;  color[4][0] = 8;
	matriz[4][1]=219; color[4][1] = 15;
	matriz[4][2]=0; color[4][2] = 8;
	matriz[4][3]=219; color[4][3] = 15;
	
	ancho = 5;
	alto = 4;
	pasoX = 3;
	pasoY = 3;
	x = x0;
	y = y0;
	xnueva = x0;
	ynueva = y0;
	
	dibujar();
	
}

/*
METODO DIBUJAR
*/

void Auto::dibujar(){
	
	for (int i= 0; i<ancho; i++){
		for (int k= 0; k<alto; k++){
			textcolor(color[i][k]);
			gotoxy(x+i,y+k);
			cout<<(char) matriz[i][k];
		}
	}
}

/*
METODO BORRAR
*/

void Auto::borrar(){
	
	for (int i= 0; i<ancho+1; i++){
		for (int k= 0; k<alto+1; k++){
			textcolor(color[i][k]);	
			gotoxy(x+i,y+k);
			cout<<" ";
		}
	}
};


void Auto::setLimit(int x0, int x1,int y0, int y1){
	maxLimitX = x1;
	maxLimitY = y1;
	minLimitX = x0;
	minLimitY = y0;
	
}
