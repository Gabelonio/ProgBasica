/*
Calcular Area de un Cilindro
Gabriel Esteban Castillo Ramirez 
07-04-2017
*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
const double PI=3.14159265358979323846,altura=10,radio=2;
main()
{
	cout<<"Programa para hallar el area de un cilindro de altura 10 y radio 2";
	cout<<"\nEl area es: "<<pow(radio,2)*PI*altura<<" unidades cubicas";
	getch();
	return 0; 
}
