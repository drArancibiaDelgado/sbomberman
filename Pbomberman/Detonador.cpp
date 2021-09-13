#include "Detonador.h"

void Detonador::ReducirTiempo()
{
	if (segundos > 0)
	{
		segundos--;
	}
	else {
		segundos = 60;
		if (minutos > 0) {
			minutos--;

		}
		else {
			minutos = 60;
			if (horas > 0) {
				horas--;
			}
		}
	}
}
