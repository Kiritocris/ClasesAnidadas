#include <iostream>
#include <string>
#include "Estudiante.h"

using namespace std;

int main() {

	string Matricula;
	double promedio;
	int Expediente;
	string Direccion;



	Estudiante* Est1 = new Estudiante("2021ABC", 9.5, 101, "105 poniente");
	cout << "OBJETO 1" << endl;
	Est1->MostrarDatos();

	//OBJETO 2
	cout << "OBJETO 2" << endl;
	cout << "Ingrese Matricula: ";
	getline(cin, Matricula);
	cout << "Ingrese promedio: ";
	cin >> promedio;
	cout << "Ingrese Numero de Expediente:";
	cin >> Expediente;
	cin.ignore();
	cout << "Ingrese Direccion:";
	getline(cin, Direccion);
	Estudiante* Est2 = new Estudiante(Matricula, promedio, Expediente, Direccion);
	cout << "----------------------------------------------" << endl;
	Est2->MostrarDatos();


	return 0;
}