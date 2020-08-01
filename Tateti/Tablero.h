#ifndef TABLERO_H
#define TABLERO_H

class Tablero {
private:
	//arreglo que contiene todos los caracteres que componen el tablero a imprimir
	char tablero[8][15] ={	{32,32,32,32,49,32,32,32,50,32,32,32,51,32,32},
							{32,32,45,45,45,45,45,45,45,45,45,45,45,45,45},
							{65,32,124,32,32,32,124,32,32,32,124,32,32,32,124},
							{32,32,45,45,45,45,45,45,45,45,45,45,45,45,45},
							{66,32,124,32,32,32,124,32,32,32,124,32,32,32,124},
							{32,32,45,45,45,45,45,45,45,45,45,45,45,45,45},
							{67,32,124,32,32,32,124,32,32,32,124,32,32,32,124},
							{32,32,45,45,45,45,45,45,45,45,45,45,45,45,45}	};
	
	//arreglo que utilizo para controlar las teclas presionadas
	char minitablero[3][3] = {{'7','8','9'},{'4','5','6'},{'1','2','3'}};
	int cuentaFichas;
public:
	//constructor nulo
	Tablero();
	
	//métodos de recuperación de atributos
	bool revisarTateti(char fichaIn);
	bool revisarCompleto();
	bool revisarPosicion(int x, int y);
	
	//métodos de modificación de atributos 
	void borrarPosicion(int x, int y);
	void dibujarTablero();
	void insertarFicha(int x, int y, char fichaIn);
};
#endif

