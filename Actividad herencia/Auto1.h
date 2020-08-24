#ifndef AUTO1_H
#define AUTO1_H
#include <ctime>
#include "Auto.h"

class Auto1: public Auto {
public:
	Auto1(){};
	Auto1(int v, int x0,int y0) : Auto(v, x0, y0){
		
	};
	bool update();
};

#endif
