// serie1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main()
{
	int i,n,suma;
	suma=0;
	do {
		cout << "Ingrese el Valor de N: ";
		cin  >> n;
	} while(n<0);
	for (i=1;i<=n;i++)
		suma=suma+i;
	cout << " EL Resultado es: " << suma ;
	getch();
}

