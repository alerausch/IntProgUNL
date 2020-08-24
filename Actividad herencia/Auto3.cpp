#include "Auto3.h"
#include <cstdlib>
#include <conio2.h>
#include <iostream>
using namespace std;

void Auto3::update(){

	if(tempo+paso<clock()){
		dibujar();
		tempo=clock(); // tomamos el tiempo para saber la proxima vez que movemos la pelotita
	}
}

void Auto3::Colorear(){

	colorAuto = (rand()%15)+1;
	
	color[1][0] = colorAuto;
	color[1][2] = colorAuto;
	color[2][0] = colorAuto;
	color[2][2] = colorAuto;
	color[3][0] = colorAuto;
	color[3][2] = colorAuto;
	
}





