#pragma once
#include <SDL.h>
//#include "BombermanRobot.h"
//#include "Bomberman.h"
//#include "MuroCeramica.h"
//#include "MuroMetal.h"
//#include "SueloCesped.h"
class BombermanRobot;
class Bomberman;
class MuroCeramica;
class MuroMetal;
class SueloCesped;
class MuroVegetacion;

class Tile
{
private:
	BombermanRobot* bomberobot;
	Bomberman* bomberman;
	MuroCeramica* muroCeramica;
	MuroMetal* muroMetal;
	SueloCesped* sueloCesped;
	MuroVegetacion* muroVegetacion;

	int posicionTileX;
	int posicionTileY;

public:
	static const int anchoTile = 34;
	static const int altoTile = 34;

	// Constructores y destructores
	Tile();
	Tile(int _posicionTileX, int _posicionTileY);

	// Metodos accesores
	Bomberman* getBomberman() { return bomberman; }

	BombermanRobot* getBombermanRobot() { return bomberobot; }
	MuroCeramica* getMuroCeramica() { return muroCeramica; }
	MuroMetal* getMuroMetal() { return muroMetal; }
	SueloCesped* getSueloCesped() { return sueloCesped; }
	MuroVegetacion* getMuroVegetacion() { return muroVegetacion; }
	int getPosicionTileX() { return posicionTileX; }
	int getPosicionTileY() { return posicionTileY; }


	void setBombermanRobot(BombermanRobot * _bomberobot) { bomberobot = _bomberobot; }
	void setBomberman(Bomberman* _bomberman) { bomberman = _bomberman; }
	void setMuroCeramica(MuroCeramica* _muroCeramica) { muroCeramica = _muroCeramica; }
	void setMuroMetal(MuroMetal* _muroMetal) { muroMetal = _muroMetal; }
	void setSueloCesped(SueloCesped* _sueloCesped) { sueloCesped = _sueloCesped; }
	void setMuroVegetacion(MuroVegetacion* _muroVegetacion) { muroVegetacion = _muroVegetacion; }
	void setPosicionTileX(int _posicionTileX) { posicionTileX = _posicionTileX; }
	void setPosicionTileY(int _posicionTileY) { posicionTileY = _posicionTileY; }
};