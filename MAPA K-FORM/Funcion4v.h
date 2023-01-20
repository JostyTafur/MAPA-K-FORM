#pragma once
#include <iostream>
#include <conio.h>
#include "Funcion3v.h"

using namespace System;
using namespace std;

class funcion4v : public funcion3v {
private:
	int W;
public:
	funcion4v() :funcion3v() {
		funcion();
	}
	~funcion4v() {}
	int getW() { return W; }
	void setW(int new_w) { W = new_w; }

};