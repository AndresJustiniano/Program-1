// factorialvalidacion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main()
{
	int factorial,i,n;
	// factorial es un acumulador de producto
	// i es un contador
    // n es el numero al que se necesita calcular el factorial
	// validar la entrada
	factorial=1; //iniciar el acumulador de producto
	do {
		cout << "Ingrese el valor de n: ";
		cin  >> n;
	} while (n<0); // La condicion debe contemplar los valores incorrectos
	               // Negar La condicion correcta
	while (i<=n)
	{
		factorial = factorial * i; // Acumulador de producto
	    i=i++;
	}
	cout << "El Factorial de  " << n << " es: " << factorial;
	getch();
}

