#pragma once
#include <iostream>
#include <conio.h>
using namespace System;
using namespace std;
class bolsa {
private:
	int nr;
	//Numero de referencia
	string sm;
	//Suma de Productos
	bool cf = false;
	//Confirmacion
public:
	bolsa() {}
	~bolsa() {}
	int getN() { return nr; }
	string getS() { return sm; }
	bool getCf() { return cf; }
	void ConfirmarCf() { cf = true; }
	void setS(string new_s) { sm = new_s; }
	void setN(int new_n) { nr = new_n; }
};