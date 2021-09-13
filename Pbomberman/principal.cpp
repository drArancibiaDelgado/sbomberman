#include <iostream>
#include "Detonador.h"
using namespace std;
int main()
{

	cout << "Mi primer paso Rumbo a bomberman \n";

	Detonador d1;

	d1.setHoras(5);
	d1.setMinutos(20);
	d1.setSegundos(10);


	while (d1.getEjecutado() !=true) {

		d1.ReducirTiempo();
	}

	return 0;
}