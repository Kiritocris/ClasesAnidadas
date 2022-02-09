#pragma once
#include <string>

using namespace std;

class Direccion {
private:
	string direccion;
public:
	Direccion(string);
	Direccion();
	void SetDireccion();
	string GetDireccion();
};