#include <iostream>
#include <string>
#include "Estudiante.h"

using namespace std;

Estudiante::Estudiante(string matricula, double promedio, int NroExpediente, string direccion)
	:Exp(NroExpediente), Dir(direccion) {
	this->matricula = matricula;
	this->promedio = promedio;
}

Estudiante::Estudiante() {

}

void Estudiante::IngresarDatos() {
	cout << "Ingrese Matricula:";
	getline(cin, matricula);
	cout << "Ingrese Promedio: ";
	cin >> promedio;
	Exp.SetExpediente();
	Dir.SetDireccion();

}

void Estudiante::MostrarDatos() {
	cout << "Matricula:" << matricula << endl;
	cout << "Promedio:" << promedio<< endl;
	cout << "Numero de Expediente:" << Exp.GetExpediente()  << endl;
	cout << "Direccion:" << Dir.GetDireccion()  << endl;

}
