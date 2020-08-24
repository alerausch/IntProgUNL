#ifndef AUTO3_H
#define AUTO3_H
#include "Auto.h"

class Auto3: public Auto {
protected:
	bool cambio;
	int colorAuto;
public:
	Auto3(){};
	Auto3(int v, int x0,int y0): Auto(v, x0, y0){
		
	};
	void update();
	void Colorear();
};


#endif

