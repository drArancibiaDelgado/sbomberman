#pragma once
#include "GameActor.h"
#include "./system/KeyboardInput.h"

class GamePawn :
    public GameActor
{
protected:
    KeyboardInput* keyboardInput;
    SDL_Keycode botonBomba = SDLK_b;
    SDL_Keycode botonArriba = SDLK_UP;
    SDL_Keycode botonAbajo = SDLK_DOWN;
    SDL_Keycode botonIzquierda = SDLK_LEFT;
    SDL_Keycode botonDerecha = SDLK_RIGHT;



    SDL_Keycode botonAbove = SDLK_g;
    SDL_Keycode botonDown = SDLK_b;
    SDL_Keycode botonRight = SDLK_n;
    SDL_Keycode botonLeft = SDLK_v;

public:
    // Constructores destructor
    GamePawn();
    GamePawn(Texture* _textura, Tile* _tileActual);
    ~GamePawn();
    // Metodos accesores

    void setBotomBomba(SDL_KeyCode _botonBomba) { botonBomba = _botonBomba; }
    void setBotomArriba(SDL_KeyCode _botonArriba) { botonArriba = _botonArriba; }
    void setBotomAbajo(SDL_KeyCode _botonAbajo) { botonAbajo = _botonAbajo; }
    void setBotomDerecha(SDL_KeyCode _botonDerecha) { botonDerecha = _botonDerecha; }
    void setBotomIzquierda(SDL_KeyCode _botonIzquierda) { botonIzquierda = _botonIzquierda; }


    //mis metodos creados
    void setBotomAbove(SDL_KeyCode _botonAbove) { botonAbove = _botonAbove; }
    void setBotomDown(SDL_KeyCode _botonDown) { botonDown = _botonDown; }
    void setBotomRight(SDL_KeyCode _botonRight) { botonRight = _botonRight; }
    void setBotomLeft(SDL_KeyCode _botonLeft) { botonLeft = _botonLeft; }





    // Metodos heredados
    virtual void render();
    virtual void update();
    virtual void handleEvent(SDL_Event* _event) {};
    virtual void deleteGameObjet();

    // Metodos especificos
    virtual void setTileActual(Tile* _tileNuevo) {};

};
