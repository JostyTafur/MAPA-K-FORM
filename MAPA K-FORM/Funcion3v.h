#pragma once
#include <iostream>
#include <conio.h>
#include "Funcion.h"
using namespace System;
using namespace std;
class funcion3v : public funcion {
private:
	int z;
public:
	funcion3v() {}
	~funcion3v() {}
	int getZ() { return z; }
	void setZ(int new_z) { z = new_z; }
};