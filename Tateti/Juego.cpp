#include "Juego.h"
#include <conio2.h>

Juego::Juego(){
	J1= Jugador("Jugador 1",'X',5);
	J2= Jugador("Jugador 2",'O',3);
}

bool Juego::leerOpcion(char fichaIn){
	cout<<"Opcion elegida: ";
	bool opcionValida= false;
	while (!opcionValida){
		if (kbhit){
			int tecla=getch();
			switch(tecla){
			case '7':
				if (TableroJuego.revisarPosicion(0,0)){
					TableroJuego.borrarPosicion(0,0);
					opciones[0][0]="                ";
					x= 2;
					y= 4;
					opcionValida= true;
					return true;
				};
				break;
			case '8':
				if (TableroJuego.revisarPosicion(0,1)){
					TableroJuego.borrarPosicion(0,1);
					opciones[0][1]="                ";
					x= 2;
					y= 8;
					opcionValida= true;
					return true;
				};
				break;
			case '9':
				if (TableroJuego.revisarPosicion(0,2)){
					TableroJuego.borrarPosicion(0,2);
					opciones[0][2]="                ";
					x= 2;
					y= 12;
					opcionValida= true;
					return true;
				};
				break;
			case '4':
				if (TableroJuego.revisarPosicion(1,0)){
					TableroJuego.borrarPosicion(1,0);
					opciones[1][0]="                ";
					x= 4;
					y= 4;
					opcionValida= true;
					return true;
				};
				break;
			case '5':
				if (TableroJuego.revisarPosicion(1,1)){
					TableroJuego.borrarPosicion(1,1);
					opciones[1][1]="                ";
					x= 4;
					y= 8;
					opcionValida= true;
					return true;
				};
				break;
			case '6':
				if (TableroJuego.revisarPosicion(1,2)){
					TableroJuego.borrarPosicion(1,2);
					opciones[1][2]="                ";
					x= 4;
					y= 12;
					opcionValida= true;
					return true;
				};
				break;
			case '1':
				if (TableroJuego.revisarPosicion(2,0)){
					TableroJuego.borrarPosicion(2,0);
					opciones[2][0]="                ";
					x= 6;
					y= 4;
					opcionValida= true;
					return true;
				};
				break;
			case '2':
				if (TableroJuego.revisarPosicion(2,1)){
					TableroJuego.borrarPosicion(2,1);
					opciones[2][1]="                ";
					x= 6;
					y= 8;
					opcionValida= true;
					return true;
				};
				break;
			case '3':
				if (TableroJuego.revisarPosicion(2,2)){
					TableroJuego.borrarPosicion(2,2);
					opciones[2][2]="                ";
					x= 6;
					y= 12;
					opcionValida= true;
					return true;
				};
				break;
			default:
				return false;
			}
		}
	}
};

void Juego::imprimirOpciones(){
	cout<<endl<<"Opciones disponibles: "<<endl;
	cout<<"--------------------------------------------------------"<<endl;
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout<<opciones[i][j]<<" | ";
		}
		cout<<endl;
		cout<<"--------------------------------------------------------"<<endl;
	}
}

void Juego::jugar(){
	bool alternador = true;
	bool sale= false;
	while (!sale){
		borrarPantalla();
		imprimirCabecera();
		TableroJuego.dibujarTablero();
		// aquí utilizo un alternador booleano para controlar los turnos
		if (alternador){
			textcolor(J1.mostrarColor());
			cout<<"Turno del "<<J1.mostrarNombre()<<" - Ficha: "<<J1.mostrarFicha()<<endl;
			textcolor(14);
			imprimirOpciones();
			if (leerOpcion( J1.mostrarFicha() )){
				TableroJuego.insertarFicha(x,y,J1.mostrarFicha());
				alternador= false;
			}
			if ( TableroJuego.revisarTateti(J1.mostrarFicha()) ){
				borrarPantalla();
				imprimirCabecera();
				TableroJuego.dibujarTablero();
				textcolor(J1.mostrarColor());
				cout<<" *** GANA "<<J1.mostrarNombre()<<" ***";
				sale=true;
			}
		}else{
			textcolor(J2.mostrarColor());
			cout<<"Turno del "<<J2.mostrarNombre()<<" - Ficha: "<<J2.mostrarFicha()<<endl;
			textcolor(14);
			imprimirOpciones();
			if (leerOpcion( J2.mostrarFicha() )){
				TableroJuego.insertarFicha(x,y,J2.mostrarFicha());
				alternador= true;
			}
			if ( TableroJuego.revisarTateti(J2.mostrarFicha()) ){
				borrarPantalla();
				imprimirCabecera();
				TableroJuego.dibujarTablero();
				textcolor(J2.mostrarColor());
				cout<<" *** GANA "<< J2.mostrarNombre()<<" ***";
				sale=true;
			}
			
		}
		if (TableroJuego.revisarCompleto()){
			borrarPantalla();
			imprimirCabecera();
			TableroJuego.dibujarTablero();
			textcolor(128);
			cout<<"TABLERO COMPLETO - ESTO ES UN EMPATE";
			sale= true;
		}
	}
	textcolor(14);
};

void Juego::borrarPantalla(){
	clrscr();;
};
void Juego::imprimirCabecera(){
	textcolor(14);
	cout<<"+-----------------------+"<<endl;
	cout<<"| Bienvenido a TA-TE-TI |"<<endl;
	cout<<"+-----------------------+"<<endl;
	textcolor(J1.mostrarColor());
	cout<<"|     "<<J1.mostrarNombre()<<" - ";
	cout<<J1.mostrarFicha()<<"     |"<<endl;
	textcolor(J2.mostrarColor());
	cout<<"|     "<<J2.mostrarNombre()<<" - ";
	cout<<J2.mostrarFicha()<<"     |"<<endl;
	textcolor(14);
	cout<<"+-----------------------+"<<endl<<endl;
};

