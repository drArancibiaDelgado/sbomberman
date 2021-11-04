#include "BombermanRobot.h"

BombermanRobot::BombermanRobot(Texture* _textura, Tile* _tileActual) :GamePawn(_textura, _tileActual)
{
	tileActual = _tileActual;
	tileSiguiente = nullptr;

	if (tileActual != nullptr) {
		tileActual->setBombermanRobot(this);

		posicionX = tileActual->getPosicionTileX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionTileY() * Tile::altoTile;
		ancho = Tile::anchoTile;
		alto = Tile::altoTile;
	}
	else {
		posicionX = 0;
		posicionY = 0;
	}

	velocidad = 1;
	movil = true;
	enMovimiento = false;
	direccionActual = MOVE_DIRECTION_NONE;
	direccionSiguiente = MOVE_DIRECTION_NONE;
}



void BombermanRobot::update()
{
	/*direccionSiguiente = MOVE_DIRECTION_NONE;

	if (keyboardInput->IsKeyOn(botonDown)) {
		direccionSiguiente = MOVE_DIRECTION_ABAJO;
	}
	else if (keyboardInput->IsKeyOn(botonAbove)) {
		direccionSiguiente = MOVE_DIRECTION_ARRIBA;
	}
	else if (keyboardInput->IsKeyOn(botonRight)) {
		direccionSiguiente = MOVE_DIRECTION_DERECHA;
	}
	else if (keyboardInput->IsKeyOn(botonLeft)) {
		direccionSiguiente = MOVE_DIRECTION_IZQUIERDA;
	}

	if (direccionSiguiente != direccionActual && tratarDeMover(direccionSiguiente))
		direccionActual = direccionSiguiente;
	else
		tratarDeMover(direccionActual);*/


	if (tileSiguiente != nullptr) {
		switch (direccionActual) {
		case MOVE_DIRECTION_ARRIBA:
			posicionY = std::max(posicionY - velocidad, tileSiguiente->getPosicionTileY() * Tile::altoTile);
			//posicionY = posicionY - velocidad;
			break;
		case MOVE_DIRECTION_ABAJO:
			posicionY = std::min(posicionY + velocidad, tileSiguiente->getPosicionTileY() * Tile::altoTile);
			//posicionY = posicionY + velocidad;
			break;
		case MOVE_DIRECTION_IZQUIERDA:
			posicionX = std::max(posicionX - velocidad, tileSiguiente->getPosicionTileX() * Tile::anchoTile);
			//posicionX = posicionX - velocidad;
			break;
		case MOVE_DIRECTION_DERECHA:
			posicionX = std::min(posicionX + velocidad, tileSiguiente->getPosicionTileX() * Tile::anchoTile);
			//posicionX = posicionX + velocidad;
			break;
		}



		if ((direccionActual == MOVE_DIRECTION_ABAJO || direccionActual == MOVE_DIRECTION_ARRIBA) && posicionY == tileSiguiente->getPosicionTileY() * Tile::altoTile)
			setTileActual(tileSiguiente);

		if ((direccionActual == MOVE_DIRECTION_IZQUIERDA || direccionActual == MOVE_DIRECTION_DERECHA) && posicionX == tileSiguiente->getPosicionTileX() * Tile::anchoTile)
			setTileActual(tileSiguiente);
	}
}

void BombermanRobot::render()
{
	GamePawn::render();
}
void BombermanRobot::setTileActual(Tile* _tileNuevo1)
{
	if (tileActual != nullptr) {
		tileActual->setBombermanRobot(nullptr);
	}

	tileActual = _tileNuevo1;

	if (tileActual != nullptr) {
		tileActual->setBombermanRobot(this);

		posicionX = tileActual->getPosicionTileX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionTileY() * Tile::altoTile;
	}

}
