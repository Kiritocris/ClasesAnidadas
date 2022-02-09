#pragma once
#include <string>
#include "Expediente.h"
#include "Direccion.h"

using namespace std;

class Estudiante {
private:
	string matricula;
	double promedio;
	Expediente Exp;
	Direccion Dir;

public:
	Estudiante(string, double, int, string);
	Estudiante();
	void IngresarDatos();
	void MostrarDatos();
};