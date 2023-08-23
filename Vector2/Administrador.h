#pragma once
#include <string>
#include <vector>
#include "Auto.h"

class Administrador {
private:
	string nombre;
	vector<Auto*> autos;
public:
	Administrador(string nombre) {
		this->nombre = nombre;
	}
	void registrar(Auto* a) {
		autos.insert(autos.begin(), a);
	}
	vector<Auto*> getAutos() {
		return this->autos;
	}

};