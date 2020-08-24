#ifndef AUTO2_H
#define AUTO2_H
#include <ctime>
#include "Auto.h"

class Auto2: public Auto {
protected:
	bool cambio;
	int colorAuto;

public:
	
	Auto2(int v, int x0,int y0): Auto (v, x0, y0){
		cambio = true;
	};
	Auto2(){};
	bool update();
	void Cambio();
};


#endif

