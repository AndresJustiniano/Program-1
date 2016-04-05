// notasforawhile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "stdlib.h"
using namespace std;
void main()
{    
	int n,i=1;
	float NP, P1, P2, P3, EF, NF,Promedio;
	Promedio=0;
	cout << "Ingrese el Numero de Estudiantes: " << endl;
    cin >> n;
	while (i<=n)
	{	
        cout << "Ingrese la nota practica: " << endl;
		cin >> NP;
		cout << "Ingrese la nota del Primer Parcial: " << endl;
		cin >> P1;
		cout << "Ingrese la nota del Segundo Parcial: " << endl;
		cin >> P2;
		cout << "Ingrese la nota del Tercer Parcial: " << endl;
		cin >> P3;
		cout << "Ingrese la nota del Examen Final: " << endl;
		cin >> EF;
		NF= (NP*0.2) + ((P1+P2+P3)/3)*0.4+(EF*0.4);
		Promedio=Promedio+NF;
	    i++;
		getch();
		system ("cls");
	}
	cout << "El Promedio Final es: "<< endl;
	cout << Promedio/i;
    getch();
}
