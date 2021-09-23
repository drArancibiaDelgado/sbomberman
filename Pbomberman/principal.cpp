#include <iostream>
#include "Detonador.h"
#include "Bomber.h"

#include "GameActor.h"
#include "GameObject.h"
using namespace std;
int main()
{
	GameActor a1("Pedro");
	GameActor a2;

	cout << "La posicion x es: " << a1.getPosicionX() << endl;
	cout << "El nombre del objeto a1 es: " << a1.getNombre() << endl;
	cout << "El nombre del objeto a2 es: " << a2.getNombre() << endl;


	/*Bomber JuanBombero;
	Bomber PedroBombero(10, 10, 5);

	int anchoImagen = JuanBombero.getaltoAvatar();
	int nv = JuanBombero.numeroVidas;


	JuanBombero.mostrarInformacion();

	cout << "Ancho Imagen: " << anchoImagen << "Numero vidas: " << nv << endl;

	cout << "Ancho Imagen: " << JuanBombero.getaltoAvatar() << "Numero vidas: " << JuanBombero.getaltoAvatar() << endl;

	JuanBombero.setaltoAvatar(10);
	JuanBombero.setanchoAvatar(10);

	cout << "Ancho Imagen: " << anchoImagen << "Numero vidas: " << nv << endl;

	cout << "Ancho Imagen: " << JuanBombero.getaltoAvatar() << "Numero vidas: " << JuanBombero.getaltoAvatar() << endl;


	JuanBombero.mostrarInformacion();
	PedroBombero.mostrarInformacion();
	cout << "Mi primer paso Rumbo a bomberman \n";

	Detonador d1;

	d1.setHoras(5);
	d1.setMinutos(20);
	d1.setSegundos(10);


	while (d1.getEjecutado() !=true) {

		d1.ReducirTiempo();
	}*/

	return 0;
}