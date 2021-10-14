#pragma once
#include <iostream>
#include "GameActor.h"
#include "Pila.h"

using namespace std;

class Explosion : public GameActor
{
private:

public:

	Explosion(Texture* textura);

	void bomba();
	void Pila();
};



