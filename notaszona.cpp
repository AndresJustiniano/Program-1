// notaszona.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "stdlib.h"
using namespace std;
void main()
{   
	float NP, P1, P2, P3, EF, Promedio, NF;
	int NR,i;
	cout << "Bienvenido Usuario" <<endl;
	cout << "Ingrese el Numero de Registro: " << endl;
	cin  >> NR;
	Promedio=0;
	i=0;
	while (NR!=-999)
		{
			cout << "Ingrese la nota practica: " << endl;
			cin >> NP;
			cout << "Ingrese la nota del primer parcial: " << endl;
			cin >> P1;
			cout << "Ingrese la nota del segundo parcial: " << endl;
			cin >> P2;
			cout << "Ingrese la nota del tercer parcial: " << endl;
			cin >> P3;
			cout << "Ingrese la nota del Examen final: " << endl;
			cin >> EF;
			NF= (NP*0.2)+((P1+P2+P3)/3)+(EF*0.4);
			Promedio=Promedio+NF;
			system("cls");
			cout << "Ingrese el Numero de Registro: " << endl;
			cin >> NR;
			i++; //i<- i+1 contador 
	   }
	cout << " el Promedio final es: " <<endl;
	cout << Promedio/i;
	getch(); 
}

