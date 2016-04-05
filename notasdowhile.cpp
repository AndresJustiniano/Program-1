// notasdowhile.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "stdlib.h"
using namespace std;



void main()
{    
	int NR, i;
	float NP, P1, P2, P3, EF, NF,s;
	char m; //Permite Ingresar Variables con letras
	s=0;
    i=1;
	do 
	{
		cout << "Ingrese el Numero de registro: " << endl;
		cin >> NR;
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
		s=s+NF;
		cout << "¿Desea continuar?" << endl;
		cin >> m;
		i++;
	}while (m!= 'N');
	       cout << "El Promedio Final es: " << s/(i-1) << endl;
		   getch();
}

