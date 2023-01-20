#pragma once
#include <iostream>
#include <conio.h>
#include "Funcion.h"
#include "Funcion3v.h"
#include "Funcion4v.h"
#include "Bolsa.h"
using namespace System;
using namespace std;

class Busqueda {
public:
	Busqueda() {}
	~Busqueda() {}

	//GRUPOS POR 4 VARIABLES
	void BuscarGrupos16_4v(bolsa** bolsa, funcion4v** matriz) {
		string auxS;
		if (matriz[0][0].getF() == 1 && matriz[0][1].getF() == 1) {
			if (matriz[0][2].getF() == 1 && matriz[0][3].getF() == 1) {
				if (matriz[1][0].getF() == 1 && matriz[1][1].getF() == 1) {
					if (matriz[1][2].getF() == 1 && matriz[1][3].getF() == 1) {
						if (matriz[2][0].getF() == 1 && matriz[2][1].getF() == 1) {
							if (matriz[2][2].getF() == 1 && matriz[2][3].getF() == 1) {
								if (matriz[3][0].getF() == 1 && matriz[3][1].getF() == 1) {
									if (matriz[3][2].getF() == 1 && matriz[3][3].getF() == 1)
									{
										bolsa[0][0].setN(matriz[0][0].getR());
										bolsa[0][1].setN(matriz[0][1].getR());
										bolsa[0][2].setN(matriz[0][2].getR());
										bolsa[0][3].setN(matriz[0][3].getR());
										bolsa[0][4].setN(matriz[1][0].getR());
										bolsa[0][5].setN(matriz[1][1].getR());
										bolsa[0][6].setN(matriz[1][2].getR());
										bolsa[0][7].setN(matriz[1][3].getR());
										bolsa[0][8].setN(matriz[2][0].getR());
										bolsa[0][9].setN(matriz[2][1].getR());
										bolsa[0][10].setN(matriz[2][2].getR());
										bolsa[0][11].setN(matriz[2][3].getR());
										bolsa[0][12].setN(matriz[3][0].getR());
										bolsa[0][13].setN(matriz[3][1].getR());
										bolsa[0][14].setN(matriz[3][2].getR());
										bolsa[0][15].setN(matriz[3][3].getR());
										matriz[0][0].ConfirmarGRP();
										matriz[0][1].ConfirmarGRP();
										matriz[0][2].ConfirmarGRP();
										matriz[0][3].ConfirmarGRP();
										matriz[1][0].ConfirmarGRP();
										matriz[1][1].ConfirmarGRP();
										matriz[1][2].ConfirmarGRP();
										matriz[1][3].ConfirmarGRP();
										matriz[2][0].ConfirmarGRP();
										matriz[2][1].ConfirmarGRP();
										matriz[2][2].ConfirmarGRP();
										matriz[2][3].ConfirmarGRP();
										matriz[3][0].ConfirmarGRP();
										matriz[3][1].ConfirmarGRP();
										matriz[3][2].ConfirmarGRP();
										matriz[3][3].ConfirmarGRP();
										auxS = '1';
										bolsa[0][0].setS(auxS);
										bolsa[0][0].ConfirmarCf();
									}
								}
							}
						}
					}
				}
			}
		}
	}
	void BuscarGrupos8_4v(bolsa** bolsa, funcion4v** matriz) {
		int auxi = 0;
		string auxS;
		for (int i = 0; i < 4; i++)
		{
			//Hacia abajo
			if (i != 3 && matriz[i][0].getF() == 1 && (matriz[i][0].getGRP() == false || matriz[i][1].getGRP() == false || matriz[i][2].getGRP() == false || matriz[i][3].getGRP() == false) && matriz[i][1].getF() == 1 && matriz[i][2].getF() == 1 && matriz[i][3].getF() == 1 && matriz[i + 1][0].getF() == 1 && matriz[i + 1][1].getF() == 1 && matriz[i + 1][2].getF() == 1 && matriz[i + 1][3].getF() == 1)
			{
				bolsa[auxi][0].setN(matriz[i][0].getR());
				bolsa[auxi][1].setN(matriz[i][1].getR());
				bolsa[auxi][2].setN(matriz[i][2].getR());
				bolsa[auxi][3].setN(matriz[i][3].getR());
				bolsa[auxi][4].setN(matriz[i + 1][0].getR());
				bolsa[auxi][5].setN(matriz[i + 1][1].getR());
				bolsa[auxi][6].setN(matriz[i + 1][2].getR());
				bolsa[auxi][7].setN(matriz[i + 1][3].getR());
				matriz[i][0].ConfirmarGRP();
				matriz[i][1].ConfirmarGRP();
				matriz[i][2].ConfirmarGRP();
				matriz[i][3].ConfirmarGRP();
				matriz[i + 1][0].ConfirmarGRP();
				matriz[i + 1][1].ConfirmarGRP();
				matriz[i + 1][2].ConfirmarGRP();
				matriz[i + 1][3].ConfirmarGRP();
				if (matriz[i][0].getX() == matriz[i + 1][0].getX()) {
					if (matriz[i][0].getX() == 0) auxS = "X\'";
					if (matriz[i][0].getX() == 1) auxS = 'X';
				}
				if (matriz[i][0].getY() == matriz[i + 1][0].getY()) {
					if (matriz[i][0].getY() == 0) auxS = "Y\'";
					if (matriz[i][0].getY() == 1) auxS = 'Y';
				}
				bolsa[auxi][0].setS(auxS);
				bolsa[auxi][0].ConfirmarCf();
				auxi++;
			}
			//Hacia arriba
			if (i != 0 && (matriz[i][0].getGRP() == false || matriz[i][1].getGRP() == false || matriz[i][2].getGRP() == false || matriz[i][3].getGRP() == false) && matriz[i][0].getF() == 1 && matriz[i][1].getF() == 1 && matriz[i][2].getF() == 1 && matriz[i][3].getF() == 1 && matriz[i - 1][0].getF() == 1 && matriz[i - 1][1].getF() == 1 && matriz[i - 1][2].getF() == 1 && matriz[i - 1][3].getF() == 1)
			{
				bolsa[auxi][0].setN(matriz[i - 1][0].getR());
				bolsa[auxi][1].setN(matriz[i - 1][1].getR());
				bolsa[auxi][2].setN(matriz[i - 1][2].getR());
				bolsa[auxi][3].setN(matriz[i - 1][3].getR());
				bolsa[auxi][4].setN(matriz[i][0].getR());
				bolsa[auxi][5].setN(matriz[i][1].getR());
				bolsa[auxi][6].setN(matriz[i][2].getR());
				bolsa[auxi][7].setN(matriz[i][3].getR());
				matriz[i][0].ConfirmarGRP();
				matriz[i][1].ConfirmarGRP();
				matriz[i][2].ConfirmarGRP();
				matriz[i][3].ConfirmarGRP();
				matriz[i - 1][0].ConfirmarGRP();
				matriz[i - 1][1].ConfirmarGRP();
				matriz[i - 1][2].ConfirmarGRP();
				matriz[i - 1][3].ConfirmarGRP();
				if (matriz[i][0].getX() == matriz[i - 1][0].getX()) {
					if (matriz[i][0].getX() == 0) auxS = "X\'";
					if (matriz[i][0].getX() == 1) auxS = 'X';
				}
				if (matriz[i][0].getY() == matriz[i - 1][0].getY()) {
					if (matriz[i][0].getY() == 0) auxS = "Y\'";
					if (matriz[i][0].getY() == 1) auxS = 'Y';
				}
				bolsa[auxi][0].setS(auxS);
				bolsa[auxi][0].ConfirmarCf();
				auxi++;
			}
			//Pared de arriba
			if (i == 0 && (matriz[i][0].getGRP() == false || matriz[i][1].getGRP() == false || matriz[i][2].getGRP() == false || matriz[i][3].getGRP() == false) && matriz[i][0].getF() == 1 && matriz[i][1].getF() == 1 && matriz[i][2].getF() == 1 && matriz[i][3].getF() == 1 && matriz[3][0].getF() == 1 && matriz[3][1].getF() == 1 && matriz[3][2].getF() == 1 && matriz[3][3].getF() == 1) {
				bolsa[auxi][0].setN(matriz[i][0].getR());
				bolsa[auxi][1].setN(matriz[i][1].getR());
				bolsa[auxi][2].setN(matriz[i][2].getR());
				bolsa[auxi][3].setN(matriz[i][3].getR());
				bolsa[auxi][4].setN(matriz[3][0].getR());
				bolsa[auxi][5].setN(matriz[3][1].getR());
				bolsa[auxi][6].setN(matriz[3][2].getR());
				bolsa[auxi][7].setN(matriz[3][3].getR());
				matriz[i][0].ConfirmarGRP();
				matriz[i][1].ConfirmarGRP();
				matriz[i][2].ConfirmarGRP();
				matriz[i][3].ConfirmarGRP();
				matriz[3][0].ConfirmarGRP();
				matriz[3][1].ConfirmarGRP();
				matriz[3][2].ConfirmarGRP();
				matriz[3][3].ConfirmarGRP();
				if (matriz[i][0].getX() == matriz[3][0].getX()) {
					if (matriz[i][0].getX() == 0) auxS = "X\'";
					if (matriz[i][0].getX() == 1) auxS = 'X';
				}
				if (matriz[i][0].getY() == matriz[3][0].getY()) {
					if (matriz[i][0].getY() == 0) auxS = "Y\'";
					if (matriz[i][0].getY() == 1) auxS = 'Y';
				}
				bolsa[auxi][0].setS(auxS);
				bolsa[auxi][0].ConfirmarCf();
				auxi++;
			}
			//Pared de abajo
			if (i == 3 && (matriz[i][0].getGRP() == false || matriz[i][1].getGRP() == false || matriz[i][2].getGRP() == false || matriz[i][3].getGRP() == false) && matriz[i][0].getF() == 1 && matriz[i][1].getF() == 1 && matriz[i][2].getF() == 1 && matriz[i][3].getF() == 1 && matriz[0][0].getF() == 1 && matriz[0][1].getF() == 1 && matriz[0][2].getF() == 1 && matriz[0][3].getF() == 1) {
				bolsa[auxi][0].setN(matriz[0][0].getR());
				bolsa[auxi][1].setN(matriz[0][1].getR());
				bolsa[auxi][2].setN(matriz[0][2].getR());
				bolsa[auxi][3].setN(matriz[0][3].getR());
				bolsa[auxi][4].setN(matriz[i][0].getR());
				bolsa[auxi][5].setN(matriz[i][1].getR());
				bolsa[auxi][6].setN(matriz[i][2].getR());
				bolsa[auxi][7].setN(matriz[i][3].getR());
				matriz[0][0].ConfirmarGRP();
				matriz[0][1].ConfirmarGRP();
				matriz[0][2].ConfirmarGRP();
				matriz[0][3].ConfirmarGRP();
				matriz[i][0].ConfirmarGRP();
				matriz[i][1].ConfirmarGRP();
				matriz[i][2].ConfirmarGRP();
				matriz[i][3].ConfirmarGRP();
				if (matriz[i][0].getX() == matriz[0][0].getX()) {
					if (matriz[i][0].getX() == 0) auxS = "X\'";
					if (matriz[i][0].getX() == 1) auxS = 'X';
				}
				if (matriz[i][0].getY() == matriz[0][0].getY()) {
					if (matriz[i][0].getY() == 0) auxS = "Y\'";
					if (matriz[i][0].getY() == 1) auxS = 'Y';
				}
				bolsa[auxi][0].setS(auxS);
				bolsa[auxi][0].ConfirmarCf();
				auxi++;
			}
		}
		for (int j = 0; j < 4; j++) {
			//De costado - derecha
			if (j != 3 && (matriz[0][j].getGRP() == false || matriz[1][j].getGRP() == false || matriz[2][j].getGRP() == false || matriz[3][j].getGRP() == false) && matriz[0][j].getF() == 1 && matriz[0][j + 1].getF() == 1 && matriz[1][j].getF() == 1 && matriz[1][j + 1].getF() == 1 && matriz[2][j + 1].getF() == 1 && matriz[2][j].getF() == 1 && matriz[3][j + 1].getF() == 1 && matriz[3][j].getF() == 1)
			{
				bolsa[auxi][0].setN(matriz[0][j].getR());
				bolsa[auxi][1].setN(matriz[0][j + 1].getR());
				bolsa[auxi][2].setN(matriz[1][j].getR());
				bolsa[auxi][3].setN(matriz[1][j + 1].getR());
				bolsa[auxi][4].setN(matriz[2][j].getR());
				bolsa[auxi][5].setN(matriz[2][j + 1].getR());
				bolsa[auxi][6].setN(matriz[3][j].getR());
				bolsa[auxi][7].setN(matriz[3][j + 1].getR());
				matriz[0][j].ConfirmarGRP();
				matriz[0][j + 1].ConfirmarGRP();
				matriz[1][j].ConfirmarGRP();
				matriz[1][j + 1].ConfirmarGRP();
				matriz[2][j].ConfirmarGRP();
				matriz[2][j + 1].ConfirmarGRP();
				matriz[3][j].ConfirmarGRP();
				matriz[3][j + 1].ConfirmarGRP();
				if (matriz[0][j].getW() == matriz[0][j + 1].getW()) {
					if (matriz[0][j].getW() == 0) auxS = "W\'";
					if (matriz[0][j].getW() == 1) auxS = 'W';
				}
				if (matriz[0][j].getZ() == matriz[0][j + 1].getZ()) {
					if (matriz[0][j].getZ() == 0) auxS = "Z\'";
					if (matriz[0][j].getZ() == 1) auxS = 'Z';
				}
				bolsa[auxi][0].setS(auxS);
				bolsa[auxi][0].ConfirmarCf();
				auxi++;
			}
			//De costado - Izquierda
			if (j != 0 && (matriz[0][j].getGRP() == false || matriz[1][j].getGRP() == false || matriz[2][j].getGRP() == false || matriz[3][j].getGRP() == false) && matriz[0][j].getF() == 1 && matriz[0][j - 1].getF() == 1 && matriz[1][j].getF() == 1 && matriz[1][j - 1].getF() == 1 && matriz[2][j].getF() == 1 && matriz[2][j - 1].getF() == 1 && matriz[3][j].getF() == 1 && matriz[3][j - 1].getF() == 1)
			{
				bolsa[auxi][0].setN(matriz[0][j - 1].getR());
				bolsa[auxi][1].setN(matriz[0][j].getR());
				bolsa[auxi][2].setN(matriz[1][j - 1].getR());
				bolsa[auxi][3].setN(matriz[1][j].getR());
				bolsa[auxi][4].setN(matriz[2][j - 1].getR());
				bolsa[auxi][5].setN(matriz[2][j].getR());
				bolsa[auxi][6].setN(matriz[3][j - 1].getR());
				bolsa[auxi][7].setN(matriz[3][j].getR());
				matriz[0][j - 1].ConfirmarGRP();
				matriz[0][j].ConfirmarGRP();
				matriz[1][j - 1].ConfirmarGRP();
				matriz[1][j].ConfirmarGRP();
				matriz[2][j - 1].ConfirmarGRP();
				matriz[2][j].ConfirmarGRP();
				matriz[3][j - 1].ConfirmarGRP();
				matriz[3][j].ConfirmarGRP();
				if (matriz[0][j].getW() == matriz[0][j - 1].getW()) {
					if (matriz[0][j].getW() == 0) auxS = "W\'";
					if (matriz[0][j].getW() == 1) auxS = 'W';
				}
				if (matriz[0][j].getZ() == matriz[0][j - 1].getZ()) {
					if (matriz[0][j].getZ() == 0) auxS = "Z\'";
					if (matriz[0][j].getZ() == 1) auxS = 'Z';
				}
				bolsa[auxi][0].setS(auxS);
				bolsa[auxi][0].ConfirmarCf();
				auxi++;
			}
			//De costado - Pared Izquiqerda
			if (j == 0 && (matriz[0][j].getGRP() == false || matriz[1][j].getGRP() == false || matriz[2][j].getGRP() == false || matriz[3][j].getGRP() == false) && matriz[0][j].getF() == 1 && matriz[1][j].getF() == 1 && matriz[2][j].getF() == 1 && matriz[3][j].getF() == 1 && matriz[0][3].getF() == 1 && matriz[1][3].getF() == 1 && matriz[2][3].getF() == 1 && matriz[3][3].getF() == 1) {
				bolsa[auxi][0].setN(matriz[0][j].getR());
				bolsa[auxi][1].setN(matriz[1][j].getR());
				bolsa[auxi][2].setN(matriz[2][j].getR());
				bolsa[auxi][3].setN(matriz[3][j].getR());
				bolsa[auxi][4].setN(matriz[0][3].getR());
				bolsa[auxi][5].setN(matriz[1][3].getR());
				bolsa[auxi][6].setN(matriz[2][3].getR());
				bolsa[auxi][7].setN(matriz[3][3].getR());
				matriz[0][j].ConfirmarGRP();
				matriz[1][j].ConfirmarGRP();
				matriz[2][j].ConfirmarGRP();
				matriz[3][j].ConfirmarGRP();
				matriz[0][3].ConfirmarGRP();
				matriz[1][3].ConfirmarGRP();
				matriz[2][3].ConfirmarGRP();
				matriz[3][3].ConfirmarGRP();
				if (matriz[0][j].getW() == matriz[0][3].getW()) {
					if (matriz[0][j].getW() == 0) auxS = "W\'";
					if (matriz[0][j].getW() == 1) auxS = 'W';
				}
				if (matriz[0][j].getZ() == matriz[0][3].getZ()) {
					if (matriz[0][j].getZ() == 0) auxS = "Z\'";
					if (matriz[0][j].getZ() == 1) auxS = 'Z';
				}
				bolsa[auxi][0].setS(auxS);
				bolsa[auxi][0].ConfirmarCf();
				auxi++;
			}
			//De costado - Pared Derecha
			if (j == 3 && (matriz[0][j].getGRP() == false || matriz[1][j].getGRP() == false || matriz[2][j].getGRP() == false || matriz[3][j].getGRP() == false) && matriz[0][j].getF() == 1 && matriz[1][j].getF() == 1 && matriz[2][j].getF() == 1 && matriz[3][j].getF() == 1 && matriz[0][0].getF() == 1 && matriz[1][0].getF() == 1 && matriz[2][0].getF() == 1 && matriz[3][0].getF() == 1) {
				bolsa[auxi][0].setN(matriz[0][j].getR());
				bolsa[auxi][1].setN(matriz[1][j].getR());
				bolsa[auxi][2].setN(matriz[2][j].getR());
				bolsa[auxi][3].setN(matriz[3][j].getR());
				bolsa[auxi][4].setN(matriz[0][0].getR());
				bolsa[auxi][5].setN(matriz[1][0].getR());
				bolsa[auxi][6].setN(matriz[2][0].getR());
				bolsa[auxi][7].setN(matriz[3][0].getR());
				matriz[0][j].ConfirmarGRP();
				matriz[1][j].ConfirmarGRP();
				matriz[2][j].ConfirmarGRP();
				matriz[3][j].ConfirmarGRP();
				matriz[0][0].ConfirmarGRP();
				matriz[1][0].ConfirmarGRP();
				matriz[2][0].ConfirmarGRP();
				matriz[3][0].ConfirmarGRP();
				if (matriz[0][j].getW() == matriz[0][0].getW()) {
					if (matriz[0][j].getW() == 0) auxS = "W\'";
					if (matriz[0][j].getW() == 1) auxS = 'W';
				}
				if (matriz[0][j].getZ() == matriz[0][0].getZ()) {
					if (matriz[0][j].getZ() == 0) auxS = "Z\'";
					if (matriz[0][j].getZ() == 1) auxS = 'Z';
				}
				bolsa[auxi][0].setS(auxS);
				bolsa[auxi][0].ConfirmarCf();
				auxi++;
			}
		}
	}
	void BuscarGrupos4_4v(bolsa** bolsa, funcion4v** matriz) {
		int auxi = 0;
		int auxj = 0;
		string auxS;
		for (int i = 0; i < 4; i++) {
			// Todo recto Horizontal
			if (matriz[i][0].getF() == 1 && (matriz[i][0].getGRP() == false || matriz[i][1].getGRP() == false || matriz[i][2].getGRP() == false || matriz[i][3].getGRP() == false) && matriz[i][1].getF() == 1 && matriz[i][2].getF() == 1 && matriz[i][3].getF() == 1)
			{
				bolsa[auxi][0].setN(matriz[i][0].getR());
				bolsa[auxi][1].setN(matriz[i][1].getR());
				bolsa[auxi][2].setN(matriz[i][2].getR());
				bolsa[auxi][3].setN(matriz[i][3].getR());
				matriz[i][0].ConfirmarGRP();
				matriz[i][1].ConfirmarGRP();
				matriz[i][2].ConfirmarGRP();
				matriz[i][3].ConfirmarGRP();
				if (matriz[i][0].getX() == 0) auxS = "X\'";
				if (matriz[i][0].getX() == 1) auxS = 'X';
				bolsa[auxi][0].setS(auxS);
				if (matriz[i][0].getY() == 0) auxS = "Y\'";
				if (matriz[i][0].getY() == 1) auxS = 'Y';
				bolsa[auxi][1].setS(auxS);
				bolsa[auxi][0].ConfirmarCf();
				auxi++;
			}
			for (int j = 0; j < 4; j++) {
				//todas las esquinas
				if ((matriz[0][0].getGRP() == false || matriz[0][3].getGRP() == false || matriz[3][0].getGRP() == false || matriz[3][3].getGRP() == false) && matriz[0][0].getF() == 1 && matriz[0][3].getF() == 1 && matriz[3][0].getF() == 1 && matriz[3][3].getF() == 1) {
					bolsa[auxi][0].setN(matriz[0][0].getR());
					bolsa[auxi][1].setN(matriz[0][3].getR());
					bolsa[auxi][2].setN(matriz[3][0].getR());
					bolsa[auxi][3].setN(matriz[3][3].getR());
					matriz[0][0].ConfirmarGRP();
					matriz[0][3].ConfirmarGRP();
					matriz[3][0].ConfirmarGRP();
					matriz[3][3].ConfirmarGRP();
					bolsa[auxi][0].setS("Y\'");
					bolsa[auxi][1].setS("W\'");
					bolsa[auxi][0].ConfirmarCf();
					auxi++;
				}
				// Todo recto Vertical
				if (i == 0 && (matriz[i][j].getGRP() == false || matriz[i + 1][j].getGRP() == false || matriz[i + 2][j].getGRP() == false || matriz[i + 3][j].getGRP() == false) && matriz[i][j].getF() == 1 && matriz[i + 1][j].getF() == 1 && matriz[i + 2][j].getF() == 1 && matriz[i + 3][j].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i + 1][j].getR());
					bolsa[auxi][2].setN(matriz[i + 2][j].getR());
					bolsa[auxi][3].setN(matriz[i + 3][j].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i + 1][j].ConfirmarGRP();
					matriz[i + 2][j].ConfirmarGRP();
					matriz[i + 3][j].ConfirmarGRP();
					if (matriz[i][j].getZ() == 0) auxS = "Z\'";
					if (matriz[i][j].getZ() == 1) auxS = 'Z';
					bolsa[auxi][0].setS(auxS);
					if (matriz[i][j].getW() == 0) auxS = "W\'";
					if (matriz[i][j].getW() == 1) auxS = 'W';
					bolsa[auxi][1].setS(auxS);
					bolsa[auxi][0].ConfirmarCf();
					auxi++;
				}
				// superior - derecha
				if (i != 3 && j != 3 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i][j + 1].getF() == 1 && matriz[i + 1][j].getF() == 1 && matriz[i + 1][j + 1].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i][j + 1].getR());
					bolsa[auxi][2].setN(matriz[i + 1][j].getR());
					bolsa[auxi][3].setN(matriz[i + 1][j + 1].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i + 1][j + 1].ConfirmarGRP();
					matriz[i + 1][j].ConfirmarGRP();
					matriz[i][j + 1].ConfirmarGRP();
					if (matriz[i][j].getX() == matriz[i][j + 1].getX() && matriz[i][j].getX() == matriz[i + 1][j].getX() && matriz[i][j].getX() == matriz[i + 1][j + 1].getX()) {
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][j].getX() == 1) auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][j + 1].getY() && matriz[i][j].getY() == matriz[i + 1][j].getY() && matriz[i][j].getY() == matriz[i + 1][j + 1].getY()) {
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i][j + 1].getW() && matriz[i][j].getW() == matriz[i + 1][j].getW() && matriz[i][j].getW() == matriz[i + 1][j + 1].getW()) {
						if (matriz[i][j].getW() == 0) auxS = "W\'";
						if (matriz[i][j].getW() == 1) auxS = 'W';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][j + 1].getZ() && matriz[i][j].getZ() == matriz[i + 1][j].getZ() && matriz[i][j].getZ() == matriz[i + 1][j + 1].getZ()) {
						if (matriz[i][j].getZ() == 0) auxS = "Z\'";
						if (matriz[i][j].getZ() == 1) auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					bolsa[auxi][0].ConfirmarCf();
					auxj = 0;
					auxi++;
				}
				// superior - izquierda
				if (i != 3 && j != 0 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i][j - 1].getF() == 1 && matriz[i + 1][j - 1].getF() == 1 && matriz[i + 1][j].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i][j - 1].getR());
					bolsa[auxi][2].setN(matriz[i + 1][j].getR());
					bolsa[auxi][3].setN(matriz[i + 1][j - 1].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i + 1][j - 1].ConfirmarGRP();
					matriz[i + 1][j].ConfirmarGRP();
					matriz[i][j - 1].ConfirmarGRP();
					if (matriz[i][j].getX() == matriz[i][j - 1].getX() && matriz[i][j].getX() == matriz[i + 1][j].getX() && matriz[i][j].getX() == matriz[i + 1][j - 1].getX()) {
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][j].getX() == 1) auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][j - 1].getY() && matriz[i][j].getY() == matriz[i + 1][j].getY() && matriz[i][j].getY() == matriz[i + 1][j - 1].getY()) {
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i][j - 1].getW() && matriz[i][j].getW() == matriz[i + 1][j].getW() && matriz[i][j].getW() == matriz[i + 1][j - 1].getW()) {
						if (matriz[i][j].getW() == 0) auxS = "W\'";
						if (matriz[i][j].getW() == 1) auxS = 'W';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][j - 1].getZ() && matriz[i][j].getZ() == matriz[i + 1][j].getZ() && matriz[i][j].getZ() == matriz[i + 1][j - 1].getZ()) {
						if (matriz[i][j].getZ() == 0) auxS = "Z\'";
						if (matriz[i][j].getZ() == 1) auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					bolsa[auxi][0].ConfirmarCf();
					auxj = 0;
					auxi++;
				}
				// inferior - derecha
				if (i != 0 && j != 3 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i][j + 1].getF() == 1 && matriz[i - 1][j].getF() == 1 && matriz[i - 1][j + 1].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i][j + 1].getR());
					bolsa[auxi][2].setN(matriz[i - 1][j].getR());
					bolsa[auxi][3].setN(matriz[i - 1][j + 1].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i][j + 1].ConfirmarGRP();
					matriz[i - 1][j].ConfirmarGRP();
					matriz[i - 1][j + 1].ConfirmarGRP();
					if (matriz[i][j].getX() == matriz[i][j + 1].getX() && matriz[i][j].getX() == matriz[i - 1][j].getX() && matriz[i][j].getX() == matriz[i - 1][j + 1].getX()) {
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][j].getX() == 1) auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][j + 1].getY() && matriz[i][j].getY() == matriz[i - 1][j].getY() && matriz[i][j].getY() == matriz[i - 1][j + 1].getY()) {
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i][j + 1].getW() && matriz[i][j].getW() == matriz[i - 1][j].getW() && matriz[i][j].getW() == matriz[i - 1][j + 1].getW()) {
						if (matriz[i][j].getW() == 0) auxS = "W\'";
						if (matriz[i][j].getW() == 1) auxS = 'W';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][j + 1].getZ() && matriz[i][j].getZ() == matriz[i - 1][j].getZ() && matriz[i][j].getZ() == matriz[i - 1][j + 1].getZ()) {
						if (matriz[i][j].getZ() == 0) auxS = "Z\'";
						if (matriz[i][j].getZ() == 1) auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					bolsa[auxi][0].ConfirmarCf();
					auxj = 0;
					auxi++;
				}
				//inferior - izquierda
				if (i != 0 && j != 0 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i][j - 1].getF() == 1 && matriz[i - 1][j - 1].getF() == 1 && matriz[i - 1][j].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i][j - 1].getR());
					bolsa[auxi][2].setN(matriz[i - 1][j].getR());
					bolsa[auxi][3].setN(matriz[i - 1][j - 1].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i][j - 1].ConfirmarGRP();
					matriz[i - 1][j].ConfirmarGRP();
					matriz[i - 1][j - 1].ConfirmarGRP();
					if (matriz[i][j].getX() == matriz[i][j - 1].getX() && matriz[i][j].getX() == matriz[i - 1][j].getX() && matriz[i][j].getX() == matriz[i - 1][j - 1].getX()) {
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][j].getX() == 1) auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][j - 1].getY() && matriz[i][j].getY() == matriz[i - 1][j].getY() && matriz[i][j].getY() == matriz[i - 1][j - 1].getY()) {
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i][j - 1].getW() && matriz[i][j].getW() == matriz[i - 1][j].getW() && matriz[i][j].getW() == matriz[i - 1][j - 1].getW()) {
						if (matriz[i][j].getW() == 0) auxS = "W\'";
						if (matriz[i][j].getW() == 1) auxS = 'W';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][j - 1].getZ() && matriz[i][j].getZ() == matriz[i - 1][j].getZ() && matriz[i][j].getZ() == matriz[i - 1][j - 1].getZ()) {
						if (matriz[i][j].getZ() == 0) auxS = "Z\'";
						if (matriz[i][j].getZ() == 1) auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					bolsa[auxi][0].ConfirmarCf();
					auxj = 0;
					auxi++;
				}
				// pared - derecha - superior
				if (i != 3 && j == 3 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i + 1][j].getF() == 1 && matriz[i][0].getF() == 1 && matriz[i + 1][0].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][0].getR());
					bolsa[auxi][1].setN(matriz[i + 1][0].getR());
					bolsa[auxi][2].setN(matriz[i][j].getR());
					bolsa[auxi][3].setN(matriz[i + 1][j].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i + 1][0].ConfirmarGRP();
					matriz[i + 1][j].ConfirmarGRP();
					matriz[i][0].ConfirmarGRP();
					if (matriz[i][j].getX() == matriz[i][0].getX() && matriz[i][j].getX() == matriz[i + 1][0].getX() && matriz[i][j].getX() == matriz[i + 1][j].getX()) {
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][j].getX() == 1) auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][0].getY() && matriz[i][j].getY() == matriz[i + 1][0].getY() && matriz[i][j].getY() == matriz[i + 1][j].getY()) {
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i][0].getW() && matriz[i][j].getW() == matriz[i + 1][0].getW() && matriz[i][j].getW() == matriz[i + 1][j].getW()) {
						if (matriz[i][j].getW() == 0) auxS = "W\'";
						if (matriz[i][j].getW() == 1) auxS = 'W';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][0].getZ() && matriz[i][j].getZ() == matriz[i + 1][0].getZ() && matriz[i][j].getZ() == matriz[i + 1][j].getZ()) {
						if (matriz[i][j].getZ() == 0) auxS = "Z\'";
						if (matriz[i][j].getZ() == 1) auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					bolsa[auxi][0].ConfirmarCf();
					auxj = 0;
					auxi++;
				}
				//pared - derecha - inferior
				if (i != 0 && j == 3 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i - 1][j].getF() == 1 && matriz[i][0].getF() == 1 && matriz[i - 1][0].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][0].getR());
					bolsa[auxi][1].setN(matriz[i - 1][0].getR());
					bolsa[auxi][2].setN(matriz[i][j].getR());
					bolsa[auxi][3].setN(matriz[i - 1][j].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i - 1][0].ConfirmarGRP();
					matriz[i - 1][j].ConfirmarGRP();
					matriz[i][0].ConfirmarGRP();
					if (matriz[i][j].getX() == matriz[i][0].getX() && matriz[i][j].getX() == matriz[i - 1][0].getX() && matriz[i][j].getX() == matriz[i - 1][j].getX()) {
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][j].getX() == 1) auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][0].getY() && matriz[i][j].getY() == matriz[i - 1][0].getY() && matriz[i][j].getY() == matriz[i - 1][j].getY()) {
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i][0].getW() && matriz[i][j].getW() == matriz[i - 1][0].getW() && matriz[i][j].getW() == matriz[i - 1][j].getW()) {
						if (matriz[i][j].getW() == 0) auxS = "W\'";
						if (matriz[i][j].getW() == 1) auxS = 'W';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][0].getZ() && matriz[i][j].getZ() == matriz[i - 1][0].getZ() && matriz[i][j].getZ() == matriz[i - 1][j].getZ()) {
						if (matriz[i][j].getZ() == 0) auxS = "Z\'";
						if (matriz[i][j].getZ() == 1) auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					bolsa[auxi][0].ConfirmarCf();
					auxj = 0;
					auxi++;
				}
				// pared - izquierda - superior
				if (i != 3 && j == 0 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i + 1][j].getF() == 1 && matriz[i][3].getF() == 1 && matriz[i + 1][3].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i + 1][j].getR());
					bolsa[auxi][2].setN(matriz[i][3].getR());
					bolsa[auxi][3].setN(matriz[i + 1][3].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i + 1][3].ConfirmarGRP();
					matriz[i + 1][j].ConfirmarGRP();
					matriz[i][3].ConfirmarGRP();
					if (matriz[i][j].getX() == matriz[i][3].getX() && matriz[i][j].getX() == matriz[i + 1][3].getX() && matriz[i][j].getX() == matriz[i + 1][j].getX()) {
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][j].getX() == 1) auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][3].getY() && matriz[i][j].getY() == matriz[i + 1][3].getY() && matriz[i][j].getY() == matriz[i + 1][j].getY()) {
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i][3].getW() && matriz[i][j].getW() == matriz[i + 1][3].getW() && matriz[i][j].getW() == matriz[i + 1][j].getW()) {
						if (matriz[i][j].getW() == 0) auxS = "W\'";
						if (matriz[i][j].getW() == 1) auxS = 'W';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][3].getZ() && matriz[i][j].getZ() == matriz[i + 1][3].getZ() && matriz[i][j].getZ() == matriz[i + 1][j].getZ()) {
						if (matriz[i][j].getZ() == 0) auxS = "Z\'";
						if (matriz[i][j].getZ() == 1) auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					bolsa[auxi][0].ConfirmarCf();
					auxj = 0;
					auxi++;
				}
				// pared - izquierda - inferior
				if (i != 0 && j == 0 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i - 1][j].getF() == 1 && matriz[i][3].getF() == 1 && matriz[i - 1][3].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i - 1][j].getR());
					bolsa[auxi][2].setN(matriz[i][3].getR());
					bolsa[auxi][3].setN(matriz[i - 1][3].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i - 1][3].ConfirmarGRP();
					matriz[i - 1][j].ConfirmarGRP();
					matriz[i][3].ConfirmarGRP();
					if (matriz[i][j].getX() == matriz[i][3].getX() && matriz[i][j].getX() == matriz[i - 1][3].getX() && matriz[i][j].getX() == matriz[i - 1][j].getX()) {
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][j].getX() == 1) auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][3].getY() && matriz[i][j].getY() == matriz[i - 1][3].getY() && matriz[i][j].getY() == matriz[i - 1][j].getY()) {
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i][3].getW() && matriz[i][j].getW() == matriz[i - 1][3].getW() && matriz[i][j].getW() == matriz[i - 1][j].getW()) {
						if (matriz[i][j].getW() == 0) auxS = "W\'";
						if (matriz[i][j].getW() == 1) auxS = 'W';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][3].getZ() && matriz[i][j].getZ() == matriz[i - 1][3].getZ() && matriz[i][j].getZ() == matriz[i - 1][j].getZ()) {
						if (matriz[i][j].getZ() == 0) auxS = "Z\'";
						if (matriz[i][j].getZ() == 1) auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					bolsa[auxi][0].ConfirmarCf();
					auxj = 0;
					auxi++;
				}
				// pared - arriba - izquierda
				if (i == 0 && j != 3 && matriz[i][j].getGRP() == false && matriz[i][j].getF() == 1 && matriz[i][j + 1].getF() == 1 && matriz[3][j].getF() == 1 && matriz[3][j + 1].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i][j + 1].getR());
					bolsa[auxi][2].setN(matriz[3][j].getR());
					bolsa[auxi][3].setN(matriz[3][j + 1].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i][j + 1].ConfirmarGRP();
					matriz[3][j].ConfirmarGRP();
					matriz[3][j + 1].ConfirmarGRP();
					if (matriz[i][j].getX() == matriz[i][j + 1].getX() && matriz[i][j].getX() == matriz[3][j + 1].getX() && matriz[i][j].getX() == matriz[3][j].getX()) {
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][j].getX() == 1) auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][j + 1].getY() && matriz[i][j].getY() == matriz[3][j + 1].getY() && matriz[i][j].getY() == matriz[3][j].getY()) {
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i][j + 1].getW() && matriz[i][j].getW() == matriz[3][j + 1].getW() && matriz[i][j].getW() == matriz[3][j].getW()) {
						if (matriz[i][j].getW() == 0) auxS = "W\'";
						if (matriz[i][j].getW() == 1) auxS = 'W';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][j + 1].getZ() && matriz[i][j].getZ() == matriz[3][j + 1].getZ() && matriz[i][j].getZ() == matriz[3][j].getZ()) {
						if (matriz[i][j].getZ() == 0) auxS = "Z\'";
						if (matriz[i][j].getZ() == 1) auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					bolsa[auxi][0].ConfirmarCf();
					auxj = 0;
					auxi++;
				}
				// pared - arriba - izquierda
				if (i == 3 && j != 0 && matriz[i][j].getGRP() == false && matriz[i][j].getF() == 1 && matriz[i][j - 1].getF() == 1 && matriz[0][j].getF() == 1 && matriz[0][j - 1].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][j - 1].getR());
					bolsa[auxi][1].setN(matriz[i][j].getR());
					bolsa[auxi][2].setN(matriz[0][j - 1].getR());
					bolsa[auxi][3].setN(matriz[0][j].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i][j - 1].ConfirmarGRP();
					matriz[0][j].ConfirmarGRP();
					matriz[0][j - 1].ConfirmarGRP();
					if (matriz[i][j].getX() == matriz[i][j - 1].getX() && matriz[i][j].getX() == matriz[0][j - 1].getX() && matriz[i][j].getX() == matriz[0][j].getX()) {
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][j].getX() == 1) auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][j - 1].getY() && matriz[i][j].getY() == matriz[0][j - 1].getY() && matriz[i][j].getY() == matriz[0][j].getY()) {
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i][j - 1].getW() && matriz[i][j].getW() == matriz[0][j - 1].getW() && matriz[i][j].getW() == matriz[0][j].getW()) {
						if (matriz[i][j].getW() == 0) auxS = "W\'";
						if (matriz[i][j].getW() == 1) auxS = 'W';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][j - 1].getZ() && matriz[i][j].getZ() == matriz[0][j - 1].getZ() && matriz[i][j].getZ() == matriz[0][j].getZ()) {
						if (matriz[i][j].getZ() == 0) auxS = "Z\'";
						if (matriz[i][j].getZ() == 1) auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						auxj++;
					}
					bolsa[auxi][0].ConfirmarCf();
					auxj = 0;
					auxi++;
				}
			}
		}
	}
	void BuscarGrupos2_4v(bolsa** bolsa, funcion4v** matriz) {
		int auxi = 0;
		int auxj = 0;
		string auxS;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				//derecha
				if (j != 3 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i][j + 1].getF() == 1) {

					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i][j + 1].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i][j + 1].ConfirmarGRP();
					//Suna de productos
					if (matriz[i][j].getX() == matriz[i][j + 1].getX() && matriz[i][j].getX() == 0)
					{
						auxS = "X\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getX() == matriz[i][j + 1].getX() && matriz[i][j].getX() == 1)
					{
						auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][j + 1].getY() && matriz[i][j].getY() == 0)
					{
						auxS = "Y\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][j + 1].getY() && matriz[i][j].getY() == 1) {
						auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][j + 1].getZ() && matriz[i][j].getZ() == 0)
					{
						auxS = "Z\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}

					if (matriz[i][j].getZ() == matriz[i][j + 1].getZ() && matriz[i][j].getZ() == 1)
					{
						auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i][j + 1].getW() && matriz[i][j].getW() == 0)
					{
						auxS = "W\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}

					if (matriz[i][j].getW() == matriz[i][j + 1].getW() && matriz[i][j].getW() == 1)
					{
						auxS = 'W';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					auxj = 0;
					auxi++;
				}
				//izquierda
				if (j != 0 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i][j - 1].getF() == 1) {
					bolsa[auxi][0].setN(matriz[i][j - 1].getR());
					bolsa[auxi][1].setN(matriz[i][j].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i][j - 1].ConfirmarGRP();
					//Suna de productos
					if (matriz[i][j].getX() == matriz[i][j - 1].getX() && matriz[i][j].getX() == 0)
					{
						auxS = "X\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getX() == matriz[i][j - 1].getX() && matriz[i][j].getX() == 1)
					{
						auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}

					if (matriz[i][j].getY() == matriz[i][j - 1].getY() && matriz[i][j].getY() == 0)
					{
						auxS = "Y\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][j - 1].getY() && matriz[i][j].getY() == 1) {
						auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][j - 1].getZ() && matriz[i][j].getZ() == 0)
					{
						auxS = "Z\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][j - 1].getZ() && matriz[i][j].getZ() == 1)
					{
						auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i][j - 1].getW() && matriz[i][j].getW() == 0)
					{
						auxS = "W\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i][j - 1].getW() && matriz[i][j].getW() == 1)
					{
						auxS = 'W';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					auxj = 0;
					auxi++;
				}
				// abajo
				if (i != 3 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i + 1][j].getF() == 1) {

					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i + 1][j].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i + 1][j].ConfirmarGRP();
					//Suna de productos
					if (matriz[i][j].getX() == matriz[i + 1][j].getX() && matriz[i][j].getX() == 0)
					{
						auxS = "X\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getX() == matriz[i + 1][j].getX() && matriz[i][j].getX() == 1)
					{
						auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}

					if (matriz[i][j].getY() == matriz[i + 1][j].getY() && matriz[i][j].getY() == 0)
					{
						auxS = "Y\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i + 1][j].getY() && matriz[i][j].getY() == 1) {
						auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i + 1][j].getZ() && matriz[i][j].getZ() == 0)
					{
						auxS = "Z\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i + 1][j].getZ() && matriz[i][j].getZ() == 1)
					{
						auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i + 1][j].getW() && matriz[i][j].getW() == 0)
					{
						auxS = "W\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i + 1][j].getW() && matriz[i][j].getW() == 1)
					{
						auxS = 'W';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					auxj = 0;
					auxi++;
				}
				// arriba
				if (i != 0 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i - 1][j].getF() == 1) {
					bolsa[auxi][0].setN(matriz[i - 1][j].getR());
					bolsa[auxi][1].setN(matriz[i][j].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i - 1][j].ConfirmarGRP();
					//Suna de productos
					if (matriz[i][j].getX() == matriz[i - 1][j].getX() && matriz[i][j].getX() == 0)
					{
						auxS = "X\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getX() == matriz[i - 1][j].getX() && matriz[i][j].getX() == 1)
					{
						auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}

					if (matriz[i][j].getY() == matriz[i - 1][j].getY() && matriz[i][j].getY() == 0)
					{
						auxS = "Y\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i - 1][j].getY() && matriz[i][j].getY() == 1) {
						auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i - 1][j].getZ() && matriz[i][j].getZ() == 0)
					{
						auxS = "Z\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i - 1][j].getZ() && matriz[i][j].getZ() == 1)
					{
						auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i - 1][j].getW() && matriz[i][j].getW() == 0)
					{
						auxS = "W\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i - 1][j].getW() && matriz[i][j].getW() == 1)
					{
						auxS = 'W';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					auxj = 0;
					auxi++;
				}
				// pared - derecha 
				if (j == 3 && matriz[i][j].getF() == 1 && (matriz[i][j].getGRP() == false || matriz[i][0].getGRP() == false) && matriz[i][0].getF() == 1) {
					bolsa[auxi][0].setN(matriz[i][0].getR());
					bolsa[auxi][1].setN(matriz[i][j].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i][0].ConfirmarGRP();
					//Suna de productos
					if (matriz[i][j].getX() == matriz[i][0].getX() && matriz[i][j].getX() == 0)
					{
						auxS = "X\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getX() == matriz[i][0].getX() && matriz[i][j].getX() == 1)
					{
						auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}

					if (matriz[i][j].getY() == matriz[i][0].getY() && matriz[i][j].getY() == 0)
					{
						auxS = "Y\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][0].getY() && matriz[i][j].getY() == 1) {
						auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][0].getZ() && matriz[i][j].getZ() == 0)
					{
						auxS = "Z\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][0].getZ() && matriz[i][j].getZ() == 1)
					{
						auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i][0].getW() && matriz[i][j].getW() == 0)
					{
						auxS = "W\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i][0].getW() && matriz[i][j].getW() == 1)
					{
						auxS = 'W';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					auxj = 0;
					auxi++;
				}
				// pared - izquierda  
				if (j == 0 && matriz[i][j].getF() == 1 && (matriz[i][j].getGRP() == false || matriz[i][3].getGRP() == false) && matriz[i][3].getF() == 1) {
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i][3].getR());
					matriz[i][j].ConfirmarGRP();
					//Suna de productos
					if (matriz[i][j].getX() == matriz[i][3].getX() && matriz[i][j].getX() == 0)
					{
						auxS = "X\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getX() == matriz[i][3].getX() && matriz[i][j].getX() == 1)
					{
						auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}

					if (matriz[i][j].getY() == matriz[i][3].getY() && matriz[i][j].getY() == 0)
					{
						auxS = "Y\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][3].getY() && matriz[i][j].getY() == 1) {
						auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][3].getZ() && matriz[i][j].getZ() == 0)
					{
						auxS = "Z\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][3].getZ() && matriz[i][j].getZ() == 1)
					{
						auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i][3].getW() && matriz[i][j].getW() == 0)
					{
						auxS = "W\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[i][3].getW() && matriz[i][j].getW() == 1)
					{
						auxS = 'W';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					auxj = 0;
					auxi++;
				}
				// pared - arriba
				if (i == 0 && matriz[i][j].getGRP() == false && matriz[i][j].getF() == 1 && matriz[3][j].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[3][j].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[3][j].ConfirmarGRP();
					//Suna de productos
					if (matriz[i][j].getX() == matriz[3][j].getX() && matriz[i][j].getX() == 0)
					{
						auxS = "X\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getX() == matriz[3][j].getX() && matriz[i][j].getX() == 1)
					{
						auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}

					if (matriz[i][j].getY() == matriz[3][j].getY() && matriz[i][j].getY() == 0)
					{
						auxS = "Y\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[3][j].getY() && matriz[i][j].getY() == 1) {
						auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[3][j].getZ() && matriz[i][j].getZ() == 0)
					{
						auxS = "Z\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[3][j].getZ() && matriz[i][j].getZ() == 1)
					{
						auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[3][j].getW() && matriz[i][j].getW() == 0)
					{
						auxS = "W\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[3][j].getW() && matriz[i][j].getW() == 1)
					{
						auxS = 'W';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					auxj = 0;
					auxi++;
				}
				// pared - Abajo
				if (i == 3 && matriz[i][j].getGRP() == false && matriz[i][j].getF() == 1 && matriz[0][j].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[0][j].getR());
					bolsa[auxi][1].setN(matriz[i][j].getR());
					matriz[0][j].ConfirmarGRP();
					matriz[i][j].ConfirmarGRP();
					//Suna de productos
					if (matriz[i][j].getX() == matriz[0][j].getX() && matriz[i][j].getX() == 0)
					{
						auxS = "X\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getX() == matriz[0][j].getX() && matriz[i][j].getX() == 1)
					{
						auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}

					if (matriz[i][j].getY() == matriz[0][j].getY() && matriz[i][j].getY() == 0)
					{
						auxS = "Y\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[0][j].getY() && matriz[i][j].getY() == 1) {
						auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[0][j].getZ() && matriz[i][j].getZ() == 0)
					{
						auxS = "Z\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[0][j].getZ() && matriz[i][j].getZ() == 1)
					{
						auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[0][j].getW() && matriz[i][j].getW() == 0)
					{
						auxS = "W\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getW() == matriz[0][j].getW() && matriz[i][j].getW() == 1)
					{
						auxS = 'W';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					auxj = 0;
					auxi++;
				}
			}
		}
	}
	void BuscarGrupos1_4v(bolsa** bolsa, funcion4v** matriz) {
		int auxi = 0;
		string auxS;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false) {
					bolsa[auxi][0].setN(matriz[i][j].getR());
					matriz[i][j].ConfirmarGRP();
					if (matriz[i][j].getX() == 0) auxS = "X\'";
					if (matriz[i][j].getX() == 1) auxS = 'X';
					bolsa[auxi][0].setS(auxS);
					if (matriz[i][j].getY() == 0) auxS = "Y\'";
					if (matriz[i][j].getY() == 1) auxS = 'Y';
					bolsa[auxi][1].setS(auxS);
					if (matriz[i][j].getZ() == 0) auxS = "Z\'";
					if (matriz[i][j].getZ() == 1) auxS = 'Z';
					bolsa[auxi][2].setS(auxS);
					if (matriz[i][j].getW() == 0) auxS = "W\'";
					if (matriz[i][j].getW() == 1) auxS = 'W';
					bolsa[auxi][3].setS(auxS);
					bolsa[auxi][0].ConfirmarCf();
					auxi++;
				}
			}
		}
	}

	//GRUPOS POR 3 VARIABLES
	void BuscarGrupos8_3v(bolsa** bolsa, funcion3v** matriz) {
		string auxS;
		if (matriz[0][0].getF() == 1 && matriz[0][1].getF() == 1 && matriz[0][2].getF() == 1 && matriz[0][3].getF() == 1 && matriz[1][0].getF() == 1 && matriz[1][1].getF() == 1 && matriz[1][2].getF() == 1 && matriz[1][3].getF() == 1)
		{
			bolsa[0][0].setN(matriz[0][0].getR());
			bolsa[0][1].setN(matriz[0][1].getR());
			bolsa[0][2].setN(matriz[0][2].getR());
			bolsa[0][3].setN(matriz[0][3].getR());
			bolsa[0][4].setN(matriz[1][0].getR());
			bolsa[0][5].setN(matriz[1][1].getR());
			bolsa[0][6].setN(matriz[1][2].getR());
			bolsa[0][7].setN(matriz[1][3].getR());
			matriz[0][0].ConfirmarGRP();
			matriz[0][1].ConfirmarGRP();
			matriz[0][2].ConfirmarGRP();
			matriz[0][3].ConfirmarGRP();
			matriz[1][0].ConfirmarGRP();
			matriz[1][1].ConfirmarGRP();
			matriz[1][2].ConfirmarGRP();
			matriz[1][3].ConfirmarGRP();
			auxS = '1';
			bolsa[0][0].setS(auxS);
			bolsa[0][0].ConfirmarCf();
		}
	}
	void BuscarGrupos2_3v(bolsa** bolsa, funcion3v** matriz) {
		int auxi = 0;
		int auxj = 0;
		string auxS;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 4; j++) {
				//derecha
				if (j != 3 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i][j + 1].getF() == 1) {

					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i][j + 1].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i][j + 1].ConfirmarGRP();
					//Suna de productos

					if (matriz[i][j].getX() == matriz[i][j + 1].getX() && matriz[i][j].getX() == 0)
					{
						auxS = "X\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getX() == matriz[i][j + 1].getX() && matriz[i][j].getX() == 1)
					{
						auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][j + 1].getY() && matriz[i][j].getY() == 0)
					{
						auxS = "Y\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][j + 1].getY() && matriz[i][j].getY() == 1) {
						auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][j + 1].getZ() && matriz[i][j].getZ() == 0)
					{
						auxS = "Z\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}

					if (matriz[i][j].getZ() == matriz[i][j + 1].getZ() && matriz[i][j].getZ() == 1)
					{
						auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					auxj = 0;
					auxi++;
				}
				//izquierda
				if (j != 0 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i][j - 1].getF() == 1) {
					bolsa[auxi][0].setN(matriz[i][j - 1].getR());
					bolsa[auxi][1].setN(matriz[i][j].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i][j - 1].ConfirmarGRP();
					//Suna de productos
					if (matriz[i][j].getX() == matriz[i][j - 1].getX() && matriz[i][j].getX() == 0)
					{
						auxS = "X\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getX() == matriz[i][j - 1].getX() && matriz[i][j].getX() == 1)
					{
						auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}

					if (matriz[i][j].getY() == matriz[i][j - 1].getY() && matriz[i][j].getY() == 0)
					{
						auxS = "Y\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][j - 1].getY() && matriz[i][j].getY() == 1) {
						auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][j - 1].getZ() && matriz[i][j].getZ() == 0)
					{
						auxS = "Z\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][j - 1].getZ() && matriz[i][j].getZ() == 1)
					{
						auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					auxj = 0;
					auxi++;
				}
				// abajo
				if (i == 0 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i + 1][j].getF() == 1) {
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i + 1][j].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i + 1][j].ConfirmarGRP();
					//Suna de productos
					if (matriz[i][j].getX() == matriz[i + 1][j].getX() && matriz[i][j].getX() == 0)
					{
						auxS = "X\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getX() == matriz[i + 1][j].getX() && matriz[i][j].getX() == 1)
					{
						auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}

					if (matriz[i][j].getY() == matriz[i + 1][j].getY() && matriz[i][j].getY() == 0)
					{
						auxS = "Y\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i + 1][j].getY() && matriz[i][j].getY() == 1) {
						auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i + 1][j].getZ() && matriz[i][j].getZ() == 0)
					{
						auxS = "Z\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i + 1][j].getZ() && matriz[i][j].getZ() == 1)
					{
						auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					auxj = 0;
					auxi++;
				}
				// arriba
				if (i == 1 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i - 1][j].getF() == 1) {

					bolsa[auxi][0].setN(matriz[i - 1][j].getR());
					bolsa[auxi][1].setN(matriz[i][j].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i - 1][j].ConfirmarGRP();
					//Suna de productos
					if (matriz[i][j].getX() == matriz[i - 1][j].getX() && matriz[i][j].getX() == 0)
					{
						auxS = "X\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getX() == matriz[i - 1][j].getX() && matriz[i][j].getX() == 1)
					{
						auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}

					if (matriz[i][j].getY() == matriz[i - 1][j].getY() && matriz[i][j].getY() == 0)
					{
						auxS = "Y\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i - 1][j].getY() && matriz[i][j].getY() == 1) {
						auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i - 1][j].getZ() && matriz[i][j].getZ() == 0)
					{
						auxS = "Z\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i - 1][j].getZ() && matriz[i][j].getZ() == 1)
					{
						auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					auxj = 0;
					auxi++;
				}
				// pared - derecha 
				if (j == 3 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i][0].getF() == 1) {

					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i][0].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i][0].ConfirmarGRP();
					//Suna de productos
					if (matriz[i][j].getX() == matriz[i][0].getX() && matriz[i][j].getX() == 0)
					{
						auxS = "X\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getX() == matriz[i][0].getX() && matriz[i][j].getX() == 1)
					{
						auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}

					if (matriz[i][j].getY() == matriz[i][0].getY() && matriz[i][j].getY() == 0)
					{
						auxS = "Y\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][0].getY() && matriz[i][j].getY() == 1) {
						auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][0].getZ() && matriz[i][j].getZ() == 0)
					{
						auxS = "Z\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][0].getZ() && matriz[i][j].getZ() == 1)
					{
						auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					auxj = 0;
					auxi++;
				}
				// pared - izquierda 
				if (j == 0 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i][3].getF() == 1) {

					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i][3].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i][3].ConfirmarGRP();
					//Suna de productos
					if (matriz[i][j].getX() == matriz[i][3].getX() && matriz[i][j].getX() == 0)
					{
						auxS = "X\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getX() == matriz[i][3].getX() && matriz[i][j].getX() == 1)
					{
						auxS = 'X';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}

					if (matriz[i][j].getY() == matriz[i][3].getY() && matriz[i][j].getY() == 0)
					{
						auxS = "Y\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getY() == matriz[i][3].getY() && matriz[i][j].getY() == 1) {
						auxS = 'Y';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][3].getZ() && matriz[i][j].getZ() == 0)
					{
						auxS = "Z\'";
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					if (matriz[i][j].getZ() == matriz[i][3].getZ() && matriz[i][j].getZ() == 1)
					{
						auxS = 'Z';
						bolsa[auxi][auxj].setS(auxS);
						bolsa[auxi][auxj].ConfirmarCf();
						auxj++;
					}
					auxj = 0;
					auxi++;
				}

			}
		}
	}
	void BuscarGrupos4_3v(bolsa** bolsa, funcion3v** matriz) {
		int auxi = 0;
		string auxS;
		for (int i = 0; i < 2; i++) {
			if (matriz[i][0].getF() == 1 && matriz[i][0].getGRP() == false && matriz[i][1].getF() == 1 && matriz[i][2].getF() == 1 && matriz[i][3].getF() == 1)
			{
				bolsa[auxi][0].setN(matriz[i][0].getR());
				bolsa[auxi][1].setN(matriz[i][1].getR());
				bolsa[auxi][2].setN(matriz[i][2].getR());
				bolsa[auxi][3].setN(matriz[i][3].getR());
				matriz[i][0].ConfirmarGRP();
				matriz[i][1].ConfirmarGRP();
				matriz[i][2].ConfirmarGRP();
				matriz[i][3].ConfirmarGRP();
				if (matriz[i][0].getX() == 0) auxS = "X\'";
				if (matriz[i][0].getX() == 1) auxS = 'X';
				bolsa[auxi][0].setS(auxS);
				bolsa[auxi][0].ConfirmarCf();
				auxi++;
			}
			for (int j = 0; j < 4; j++) {
				// superior - derecha
				if (i == 0 && j != 3 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i][j + 1].getF() == 1 && matriz[i + 1][j].getF() == 1 && matriz[i + 1][j + 1].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i][j + 1].getR());
					bolsa[auxi][2].setN(matriz[i + 1][j].getR());
					bolsa[auxi][3].setN(matriz[i + 1][j + 1].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i + 1][j + 1].ConfirmarGRP();
					matriz[i + 1][j].ConfirmarGRP();
					matriz[i][j + 1].ConfirmarGRP();

					if (matriz[i][j].getX() == matriz[i][j + 1].getX() && matriz[i][j].getX() == matriz[i + 1][j].getX() && matriz[i + 1][j + 1].getX() == matriz[i][j].getX())
					{
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][j].getX() == 1) auxS = 'X';
					}
					if (matriz[i][j].getZ() == matriz[i][j + 1].getZ() && matriz[i][j].getZ() == matriz[i + 1][j].getZ() && matriz[i + 1][j + 1].getZ() == matriz[i][j].getZ())
					{
						if (matriz[i][j].getZ() == 0) auxS = "Z\'";
						if (matriz[i][j].getZ() == 1) auxS = 'Z';
					}
					if (matriz[i][j].getY() == matriz[i][j + 1].getY() && matriz[i][j].getY() == matriz[i + 1][j].getY() && matriz[i + 1][j + 1].getY() == matriz[i][j].getY())
					{
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
					}
					bolsa[auxi][0].setS(auxS);
					bolsa[auxi][0].ConfirmarCf();
					auxi++;
				}
				// superior - izquierda
				if (i == 0 && j != 0 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i][j - 1].getF() == 1 && matriz[i + 1][j - 1].getF() == 1 && matriz[i + 1][j].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i][j - 1].getR());
					bolsa[auxi][2].setN(matriz[i + 1][j].getR());
					bolsa[auxi][3].setN(matriz[i + 1][j - 1].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i + 1][j - 1].ConfirmarGRP();
					matriz[i + 1][j].ConfirmarGRP();
					matriz[i][j - 1].ConfirmarGRP();
					if (matriz[i][j].getX() == matriz[i][j - 1].getX() && matriz[i][j].getX() == matriz[i + 1][j].getX() && matriz[i + 1][j - 1].getX() == matriz[i][j].getX())
					{
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][j].getX() == 1) auxS = 'X';
					}
					if (matriz[i][j].getZ() == matriz[i][j - 1].getZ() && matriz[i][j].getZ() == matriz[i + 1][j].getZ() && matriz[i + 1][j - 1].getZ() == matriz[i][j].getZ())
					{
						if (matriz[i][j].getZ() == 0) auxS = "Z\'";
						if (matriz[i][j].getZ() == 1) auxS = 'Z';
					}
					if (matriz[i][j].getY() == matriz[i][j - 1].getY() && matriz[i][j].getY() == matriz[i + 1][j].getY() && matriz[i + 1][j - 1].getY() == matriz[i][j].getY())
					{
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
					}
					bolsa[auxi][0].setS(auxS);
					bolsa[auxi][0].ConfirmarCf();
					auxi++;
				}
				// inferior - derecha
				if (i == 1 && j != 3 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i][j + 1].getF() == 1 && matriz[i - 1][j].getF() == 1 && matriz[i - 1][j + 1].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i][j + 1].getR());
					bolsa[auxi][2].setN(matriz[i - 1][j].getR());
					bolsa[auxi][3].setN(matriz[i - 1][j + 1].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i][j + 1].ConfirmarGRP();
					matriz[i - 1][j].ConfirmarGRP();
					matriz[i - 1][j + 1].ConfirmarGRP();
					if (matriz[i][j].getX() == matriz[i][j + 1].getX() && matriz[i][j].getX() == matriz[i - 1][j].getX() && matriz[i - 1][j + 1].getX() == matriz[i][j].getX())
					{
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][j].getX() == 1) auxS = 'X';
					}
					if (matriz[i][j].getZ() == matriz[i][j + 1].getZ() && matriz[i][j].getZ() == matriz[i - 1][j].getZ() && matriz[i - 1][j + 1].getZ() == matriz[i][j].getZ())
					{
						if (matriz[i][j].getZ() == 0) auxS = "Z\'";
						if (matriz[i][j].getZ() == 1) auxS = 'Z';
					}
					if (matriz[i][j].getY() == matriz[i][j + 1].getY() && matriz[i][j].getY() == matriz[i - 1][j].getY() && matriz[i - 1][j + 1].getY() == matriz[i][j].getY())
					{
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
					}
					bolsa[auxi][0].setS(auxS);
					bolsa[auxi][0].ConfirmarCf();
					auxi++;
				}
				//inferior - izquierda
				if (i == 1 && j != 0 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i][j - 1].getF() == 1 && matriz[i - 1][j - 1].getF() == 1 && matriz[i - 1][j].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i][j - 1].getR());
					bolsa[auxi][2].setN(matriz[i - 1][j].getR());
					bolsa[auxi][3].setN(matriz[i - 1][j - 1].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i][j - 1].ConfirmarGRP();
					matriz[i - 1][j].ConfirmarGRP();
					matriz[i - 1][j - 1].ConfirmarGRP();
					if (matriz[i][j].getX() == matriz[i][j - 1].getX() && matriz[i][j].getX() == matriz[i - 1][j].getX() && matriz[i - 1][j - 1].getX() == matriz[i][j].getX())
					{
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][j].getX() == 1) auxS = 'X';
					}
					if (matriz[i][j].getZ() == matriz[i][j - 1].getZ() && matriz[i][j].getZ() == matriz[i - 1][j].getZ() && matriz[i - 1][j - 1].getZ() == matriz[i][j].getZ())
					{
						if (matriz[i][j].getZ() == 0) auxS = "Z\'";
						if (matriz[i][j].getZ() == 1) auxS = 'Z';
					}
					if (matriz[i][j].getY() == matriz[i][j - 1].getY() && matriz[i][j].getY() == matriz[i - 1][j].getY() && matriz[i - 1][j - 1].getY() == matriz[i][j].getY())
					{
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
					}
					bolsa[auxi][0].setS(auxS);
					bolsa[auxi][0].ConfirmarCf();
					auxi++;
				}
				// pared - derecha - superior
				if (i == 0 && j == 3 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i + 1][j].getF() == 1 && matriz[i][0].getF() == 1 && matriz[i + 1][0].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i + 1][j].getR());
					bolsa[auxi][2].setN(matriz[i][0].getR());
					bolsa[auxi][3].setN(matriz[i + 1][0].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i + 1][0].ConfirmarGRP();
					matriz[i + 1][j].ConfirmarGRP();
					matriz[i][0].ConfirmarGRP();
					if (matriz[i][j].getX() == matriz[i][0].getX() && matriz[i][j].getX() == matriz[i + 1][j].getX() && matriz[i + 1][0].getX() == matriz[i][j].getX())
					{
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][j].getX() == 1) auxS = 'X';
					}
					if (matriz[i][j].getZ() == matriz[i][0].getZ() && matriz[i][j].getZ() == matriz[i + 1][j].getZ() && matriz[i + 1][0].getZ() == matriz[i][j].getZ())
					{
						if (matriz[i][j].getZ() == 0) auxS = "Z\'";
						if (matriz[i][j].getZ() == 1) auxS = 'Z';
					}
					if (matriz[i][j].getY() == matriz[i][0].getY() && matriz[i][j].getY() == matriz[i + 1][j].getY() && matriz[i + 1][0].getY() == matriz[i][j].getY())
					{
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
					}
					bolsa[auxi][0].setS(auxS);
					bolsa[auxi][0].ConfirmarCf();
					auxi++;
				}
				//pared - derecha - inferior
				if (i == 1 && j == 3 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i - 1][j].getF() == 1 && matriz[i][0].getF() == 1 && matriz[i - 1][0].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i - 1][j].getR());
					bolsa[auxi][2].setN(matriz[i][0].getR());
					bolsa[auxi][3].setN(matriz[i - 1][0].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i - 1][0].ConfirmarGRP();
					matriz[i - 1][j].ConfirmarGRP();
					matriz[i][0].ConfirmarGRP();
					if (matriz[i][j].getX() == matriz[i][0].getX() && matriz[i][j].getX() == matriz[i - 1][j].getX() && matriz[i - 1][0].getX() == matriz[i][j].getX())
					{
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][j].getX() == 1) auxS = 'X';
					}
					if (matriz[i][j].getZ() == matriz[i][0].getZ() && matriz[i][j].getZ() == matriz[i - 1][j].getZ() && matriz[i - 1][0].getZ() == matriz[i][j].getZ())
					{
						if (matriz[i][j].getZ() == 0) auxS = "Z\'";
						if (matriz[i][j].getZ() == 1) auxS = 'Z';
					}
					if (matriz[i][j].getY() == matriz[i][0].getY() && matriz[i][j].getY() == matriz[i - 1][j].getY() && matriz[i - 1][0].getY() == matriz[i][j].getY())
					{
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
					}
					bolsa[auxi][0].setS(auxS);
					bolsa[auxi][0].ConfirmarCf();
					auxi++;
				}
				// pared - izquierda - superior
				if (i == 0 && j == 0 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i + 1][j].getF() == 1 && matriz[i][3].getF() == 1 && matriz[i + 1][3].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i + 1][j].getR());
					bolsa[auxi][2].setN(matriz[i][3].getR());
					bolsa[auxi][3].setN(matriz[i + 1][3].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i + 1][3].ConfirmarGRP();
					matriz[i + 1][j].ConfirmarGRP();
					matriz[i][3].ConfirmarGRP();
					if (matriz[i][j].getX() == matriz[i][3].getX() && matriz[i][j].getX() == matriz[i + 1][j].getX() && matriz[i + 1][3].getX() == matriz[i][j].getX())
					{
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][j].getX() == 1) auxS = 'X';
					}
					if (matriz[i][j].getZ() == matriz[i][3].getZ() && matriz[i][j].getZ() == matriz[i + 1][j].getZ() && matriz[i + 1][3].getZ() == matriz[i][j].getZ())
					{
						if (matriz[i][j].getZ() == 0) auxS = "Z\'";
						if (matriz[i][j].getZ() == 1) auxS = 'Z';
					}
					if (matriz[i][j].getY() == matriz[i][3].getY() && matriz[i][j].getY() == matriz[i + 1][j].getY() && matriz[i + 1][3].getY() == matriz[i][j].getY())
					{
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
					}
					bolsa[auxi][0].setS(auxS);
					bolsa[auxi][0].ConfirmarCf();
					auxi++;
				}
				// pared - izquierda - inferior
				if (i == 1 && j == 0 && matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false && matriz[i - 1][j].getF() == 1 && matriz[i][3].getF() == 1 && matriz[i - 1][3].getF() == 1)
				{
					bolsa[auxi][0].setN(matriz[i][j].getR());
					bolsa[auxi][1].setN(matriz[i - 1][j].getR());
					bolsa[auxi][2].setN(matriz[i][3].getR());
					bolsa[auxi][3].setN(matriz[i - 1][3].getR());
					matriz[i][j].ConfirmarGRP();
					matriz[i - 1][3].ConfirmarGRP();
					matriz[i - 1][j].ConfirmarGRP();
					matriz[i][3].ConfirmarGRP();
					if (matriz[i][j].getX() == matriz[i][3].getX() && matriz[i][j].getX() == matriz[i - 1][j].getX() && matriz[i - 1][3].getX() == matriz[i][j].getX())
					{
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][j].getX() == 1) auxS = 'X';
					}
					if (matriz[i][j].getZ() == matriz[i][3].getZ() && matriz[i][j].getZ() == matriz[i - 1][j].getZ() && matriz[i - 1][3].getZ() == matriz[i][j].getZ())
					{
						if (matriz[i][j].getZ() == 0) auxS = "Z\'";
						if (matriz[i][j].getZ() == 1) auxS = 'Z';
					}
					if (matriz[i][j].getY() == matriz[i][3].getY() && matriz[i][j].getY() == matriz[i - 1][j].getY() && matriz[i - 1][3].getY() == matriz[i][j].getY())
					{
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
					}
					bolsa[auxi][0].setS(auxS);
					bolsa[auxi][0].ConfirmarCf();
					auxi++;
				}
			}
		}

	}
	void BuscarGrupos1_3v(bolsa** bolsa, funcion3v** matriz) {
		int auxi = 0;
		string auxS;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 4; j++) {
				if (matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false) {
					bolsa[auxi][0].setN(matriz[i][j].getR());
					matriz[i][j].ConfirmarGRP();
					if (matriz[i][j].getX() == 0) auxS = "X\'";
					if (matriz[i][j].getX() == 1) auxS = 'X';
					bolsa[auxi][0].setS(auxS);
					if (matriz[i][j].getY() == 0) auxS = "Y\'";
					if (matriz[i][j].getY() == 1) auxS = 'Y';
					bolsa[auxi][1].setS(auxS);
					if (matriz[i][j].getZ() == 0) auxS = "Z\'";
					if (matriz[i][j].getZ() == 1) auxS = 'Z';
					bolsa[auxi][2].setS(auxS);
					bolsa[auxi][0].ConfirmarCf();
					auxi++;
				}
			}
		}
	}

	//GRUPOS POR 2 VARIABLES
	void BuscarGrupos1(bolsa** bolsa, funcion** matriz) {
		int auxi = 0;
		string auxS;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				if (matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false) {
					bolsa[auxi][0].setN(matriz[i][j].getR());
					matriz[i][j].ConfirmarGRP();
					if (matriz[i][j].getX() == 0) auxS = "X\'";
					if (matriz[i][j].getX() == 1) auxS = 'X';
					bolsa[auxi][0].setS(auxS);
					if (matriz[i][j].getY() == 0) auxS = "Y\'";
					if (matriz[i][j].getY() == 1) auxS = 'Y';
					bolsa[auxi][1].setS(auxS);
					bolsa[auxi][0].ConfirmarCf();
					auxi++;
				}
			}
		}
	}
	void BuscarGrupos2(bolsa** bolsa, funcion** matriz) {

		int auxi = 0;
		int auxj = 0;
		string auxS;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				if (matriz[i][j].getF() == 1 && matriz[i][j].getGRP() == false)
				{
					if (j != 1 && matriz[i][j + 1].getF() == 1) {
						bolsa[auxi][auxj].setN(matriz[i][j].getR());
						bolsa[auxi][auxj + 1].setN(matriz[i][j + 1].getR());
						matriz[i][j].ConfirmarGRP();
						matriz[i][j + 1].ConfirmarGRP();
						if (matriz[i][j].getX() == 0) auxS = "X\'";
						if (matriz[i][i].getX() == 1) auxS = 'X';
						bolsa[auxi][0].setS(auxS);
						bolsa[auxi][0].ConfirmarCf();
						auxi++;
					}
					if (i != 0 && matriz[i - 1][j].getF() == 1) {
						bolsa[auxi][auxj].setN(matriz[i - 1][j].getR());
						bolsa[auxi][auxj + 1].setN(matriz[i][j].getR());
						matriz[i][j].ConfirmarGRP();
						matriz[i - 1][j].ConfirmarGRP();
						if (matriz[i][j].getY() == 0) auxS = "Y\'";
						if (matriz[i][j].getY() == 1) auxS = 'Y';
						bolsa[auxi][0].setS(auxS);
						bolsa[auxi][0].ConfirmarCf();
						auxi++;

					}
				}
			}
		}

	}
	void BuscarGrupos4(bolsa** bolsa, funcion** matriz) {
		string auxS;
		if (matriz[0][0].getF() == 1 && matriz[0][0].getGRP() == false && matriz[0][1].getF() == 1 && matriz[1][0].getF() == 1 && matriz[1][1].getF() == 1) {
			bolsa[0][0].setN(matriz[0][0].getR());
			bolsa[0][1].setN(matriz[0][1].getR());
			bolsa[0][2].setN(matriz[1][0].getR());
			bolsa[0][3].setN(matriz[1][1].getR());
			matriz[0][0].ConfirmarGRP();
			matriz[0][1].ConfirmarGRP();
			matriz[1][0].ConfirmarGRP();
			matriz[1][1].ConfirmarGRP();
			auxS = '1';
			bolsa[0][0].setS(auxS);
			bolsa[0][0].ConfirmarCf();
		}
	}

};