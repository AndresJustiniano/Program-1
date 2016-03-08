// Area Paralelogramo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;

void main()
{   
	int b,h,a;
		cout << "introduzca la base" << endl;
		cin >> b;
		cout << "introduzca la altura" << endl;
		cin >> h;
		a=b*h;
		cout << "El area de un paralelogramo es:" << a;
		getch();

}

