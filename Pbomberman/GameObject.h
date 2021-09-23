#pragma once
#include <iostream>
using namespace std;
class GameObject
{

private:
	int idGameObject;
	string nombre;
	bool eliminar;

public:
	GameObject();
	GameObject(string _nombre);


	int getIdGameObject() { return idGameObject; }
	string getNombre() {return nombre ; }
	bool getEliminar() { return eliminar; }

	void setIdGameObject(int _idGameObject) { idGameObject= _idGameObject; }
	void setNombre(string _nombre) { nombre = _nombre; };
	void setEliminar(bool _eliminar) { eliminar= _eliminar; }


	//Metodos varios
	//Metodos virtuales puros
	virtual void render()=0;
	virtual void update()=0;
	//virtual void handleEvent(SDL_Event* event)=0;
	virtual void deleteGameObject() {eliminar = true; }
	virtual void free() {};

};

//clase abstratca de la cual no se pueden instanciar objetos su proposito es que sea una classe que maneje de manera generica objetos especificos en el juegoi objetos visuales no visuales los recoremos
//a velocidades altas