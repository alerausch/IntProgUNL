#include <string>
using namespace std;

class Jugador {
private:
	string nombre;
	char ficha;
	int color;
public:
	Jugador (){};
	Jugador(string nombreJugador, char fichaAsignada, int colorAsig);
	string mostrarNombre();
	int mostrarColor();
	char mostrarFicha();
};



