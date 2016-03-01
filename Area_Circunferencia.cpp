// Area_Circunferencia.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;


void main()
{   float radio,area;
	cout << "Ingrese Radio: ";
	cin >> radio;
	area=(radio*radio*3.1415);
	cout << "El area de una circunferencia es: " << area;
	getch();
}

