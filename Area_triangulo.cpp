// Area_triangulo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;
void main()
{
	float base,altura,area;
	cout << "ingrese la base: " << endl;
	cin >> base;
	cout << "ingrese la altura: " << endl;
	cin >> altura;
	area=(base*altura)/2;
	cout << "el area del triangulo es: " << area;
	getch() ;
}

