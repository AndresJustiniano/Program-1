// Votacion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;
void main()
{
	int edad;
	cout << "Ingrese la edad" << endl;
	cin >> edad;
	if (edad>=18)
	    cout << "Es Mayor de Edad, por lo tanto puede votar" << endl;
	else 
	    cout << "Es Menor de Edad, por lo tanto no puede votar" << endl;
	getch();
}