#pragma once
#include <map>
#include <iostream>
#include "GamePawn.h"

using namespace std;

class Bomberman : public GamePawn
{
private:
	int nr = 0;
public:
	//Constructor
	map<int,array<int,2> > mb;
	Bomberman(Texture* _textura, Tile* _tileActual);
	void setTileActual(Tile* _tileNuevo) override;

	void update();
	void render();

};