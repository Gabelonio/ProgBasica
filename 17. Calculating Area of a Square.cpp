/*
Calcular Area de un Cuadrado
Gabriel Esteban Castillo Ramirez 
07-04-2017
*/
#include<iostream>
#include<conio.h>
#include<math.h>
#define ladoCuadrado 5;
using namespace std;
main()
{
	int ladoOperado=ladoCuadrado; 
	cout<<"Programa para calcular el area de un cuadrado de 5 unidades de lado ";
	cout<<"\nEl area es: "<<pow(ladoOperado,2)<<" unidades cuadradas";
	getch();
	return 0; 
}
