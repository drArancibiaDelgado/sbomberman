#include "Tile.h"

Tile::Tile()
{
	posicionTileX = 0;
	posicionTileY = 0;
	bomberman = nullptr;
	bomberobot = nullptr;
	muroCeramica = nullptr;
	muroMetal = nullptr;
	muroVegetacion =nullptr;
	sueloCesped = nullptr;

}

Tile::Tile(int _posicionTileX, int _posicionTileY)
{
	posicionTileX = _posicionTileX;
	posicionTileY = _posicionTileY;
	bomberman = nullptr;
	bomberobot = nullptr;
	muroCeramica = nullptr;
	muroMetal = nullptr;
	muroVegetacion = nullptr;
	sueloCesped = nullptr;
}