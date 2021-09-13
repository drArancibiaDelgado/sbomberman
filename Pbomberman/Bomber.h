#pragma once
class Bomber
{
private:
 
	int anchoAvatar;
	int altoAvatar;
	int posicionX;
	int posicionY;
public:

	// get es un metodo accesor
	int getanchoAvatar() { return anchoAvatar; }
	//set para establecer un valor
	void setanchoAvatar(int _anchoAvatar) { anchoAvatar = _anchoAvatar; }


	int getaltoAvatar() { return altoAvatar; }

	void setaltoAvatar(int _altoAvatar) { altoAvatar = _altoAvatar; }


	int getPosicionXr() { return posicionX; }

	void setPosicionX(int _PosicionX) { posicionX = _PosicionX; }


	void Morrir();
	void Correr();
};

