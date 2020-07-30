#include<iostream>

class Tablero {
private:
	char tablero[8][15] ={{32,32,32,32,49,32,32,32,50,32,32,32,51,32,32},
						  {32,32,45,45,45,45,45,45,45,45,45,45,45,45,45},
						   {65,32,124,32,32,32,124,32,32,32,124,32,32,32,124},
							{32,32,45,45,45,45,45,45,45,45,45,45,45,45,45},
							 {66,32,124,32,32,32,124,32,32,32,124,32,32,32,124},
							  {32,32,45,45,45,45,45,45,45,45,45,45,45,45,45},
							   {67,32,124,32,32,32,124,32,32,32,124,32,32,32,124},
							    {32,32,45,45,45,45,45,45,45,45,45,45,45,45,45}};
	char minitablero[3][3] = {{'7','8','9'},{'4','5','6'},{'1','2','3'}};
	int cuentaFichas;
public:
	Tablero();
	bool revisarCompleto();
	bool revisarPosicion(int x, int y);
	void borrarBoton(int x, int y);
	void dibujarTablero();
	void insertarFicha(int x, int y, char fichaIn);
	bool revisarTateti(char fichaIn);
};
