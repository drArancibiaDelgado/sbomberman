#pragma once
#include <iostream>
#include "GamePawn.h"
using namespace std;

class BombermanRobot : public GamePawn
{
private:
	//mis constructores el private es por si acaso
public:
	//Constructor
	BombermanRobot(Texture* _textura, Tile* _tileActual);
	void setTileActual(Tile* _tileNuevo) override;

	void update();
	void render();
};


