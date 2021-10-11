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
    SDL_Keycode botonArriba2 = SDLK_w;
    SDL_Keycode botonAbajo2 = SDLK_s;
    SDL_Keycode botonIzquierda2 = SDLK_a;
    SDL_Keycode botonDerecha2 = SDLK_d;
public:
    //constructor destructor
    GamePawn();
    GamePawn(Texture* _textura, Tile* _tileActual);
    ~GamePawn();
    // Metodos accesores

    void setBotomBomba(SDL_KeyCode _botonBomba) { botonBomba = _botonBomba; }
    void setBotomArriba(SDL_KeyCode _botonArriba) { botonArriba = _botonArriba; }
    void setBotomAbajo(SDL_KeyCode _botonAbajo) { botonAbajo = _botonAbajo; }
    void setBotomDerecha(SDL_KeyCode _botonDerecha) { botonDerecha = _botonDerecha; }
    void setBotomIzquierda(SDL_KeyCode _botonIzquierda) { botonIzquierda = _botonIzquierda; }

    //algunos metodos heredados
    virtual void render();
    virtual void update();
    virtual void handleEvent(SDL_Event* _event) {};
    virtual void deleteGameObjet();
    virtual void setTileActual(Tile* _tileNuevo);
};
