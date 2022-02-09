#include <iostream>
#include <string>
#include "Expediente.h"

using namespace std;

Expediente::Expediente(int NroExpediente) {
	this->NroExpediente = NroExpediente;
}

Expediente::Expediente() {

}

void Expediente::SetExpediente() {
	cout << "Ingrese Numero de Expediente";
	cin >> NroExpediente;
}

int Expediente::GetExpediente() {
	return NroExpediente;
}