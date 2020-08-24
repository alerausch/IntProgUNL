#include "Auto1.h"
#include <cstdlib>
#include <conio2.h>

#include <iostream>
#include <cstdio>
using namespace std;

bool Auto1::update(){
	
	if (_kbhit()){
		int tecla = getch();
		bool moves = false;
		
		switch(tecla){
		case (72): { // arriba
				if (y - alto > minLimitY ){borrar(); y = y - pasoY; moves = true;} break;
			}
		case (80):{ // abajo
				if (y < maxLimitY){borrar(); y = y + pasoY; moves = true;} break;
			}
		case (77):{ // derecha
				if (x + ancho < maxLimitX){borrar(); x = x + pasoX; moves = true;} break;
			}
		case (75):{ // izquierda
				if (x - ancho > minLimitX){borrar(); x = x - pasoX; moves = true;} break;
			}
		}
			
	if(moves) {
		dibujar();
	}
}	
	
}


