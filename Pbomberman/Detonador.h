#pragma once
class Detonador
{
private:
	int horas;
	int minutos;
	int segundos;

	//bool valor boleano que toma valores de true y false
	bool activado;
	bool ejecutado;
public:
	int getHoras() { return horas; }
	void setHoras(int _horas) { horas= _horas; }


	int getMinutos() { return minutos; }
	void setMinutos(int _minutos) { minutos = _minutos; }



	int getSegundos() { return segundos; }
	void setSegundos(int _segundos) { segundos = _segundos; }


	int getActivado() { return activado; }
	void setActivado(int _activado) { activado = _activado; }



	int getEjecutado() { return ejecutado; }
	void setEjecutado(int _ejecutado) { ejecutado = _ejecutado; }


	void Explotar();
	void ReducirTiempo();
};

