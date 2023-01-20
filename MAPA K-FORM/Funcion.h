#pragma once
#include <iostream>
#include <conio.h>
using namespace System;
using namespace std;

class funcion {
private:
	int x, y, f, r;
	// Numero de referencia
	bool grp;
	// Si pertenece a un grupo
public:
	funcion() {
		grp = false;
		f = 0;
	}
	~funcion() {}
	int getX() { return x; }
	int getY() { return y; }
	int getF() { return f; }
	int getR() { return r; }
	bool getGRP() { return grp; }
	void ConfirmarGRP() { grp = true; }
	void setR(int new_r) { r = new_r; }
	void setX(int new_x) { x = new_x; }
	void setY(int new_y) { y = new_y; }
	void setF(int new_f) { f = new_f; }

};