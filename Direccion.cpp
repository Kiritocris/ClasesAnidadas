#include <iostream>
#include <string>
#include "Direccion.h"

using namespace std;

Direccion::Direccion(string direccion) {
	this->direccion = direccion;
}

Direccion::Direccion() {

}

void Direccion::SetDireccion() {
	cout << "Captura Direccion: ";
	getline(cin, direccion);
}

string Direccion::GetDireccion() {
	return direccion;
}