#pragma once
#include <iostream>
using namespace std;
class Bomber
{
private:
 
	int anchoAvatar;
	int altoAvatar;
	int posicionX;
	int posicionY;
public:
	int numeroVidas;


	//constructor

	Bomber();
	Bomber(int _anchoAvatra,int _altoAvatar,int _numeroVidas);

	// get es un metodo accesor
	int getanchoAvatar() { return anchoAvatar; }
	//set para establecer un valor
	void setanchoAvatar(int _anchoAvatar) { anchoAvatar = _anchoAvatar; }


	int getaltoAvatar() { return altoAvatar; }

	void setaltoAvatar(int _altoAvatar) { altoAvatar = _altoAvatar; }


	void colocarBomba();
	void moverse();
	void mostrarInformacion();


	int getPosicionX() { return posicionX; }

	void setPosicionX(int _PosicionX) { posicionX = _PosicionX; }




	int getPosicionY() { return posicionY; }

	void setPosicionY(int _PosicionY) { posicionX = _PosicionY; }
	void Morir();
	void Correr();
};

