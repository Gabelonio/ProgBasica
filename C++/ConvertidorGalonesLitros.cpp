/*
Convertir Galones a Litros
Gabriel Esteban Castillo Ramirez 
07-04-2017
*/
#include<iostream>
#include<conio.h>
#define noGalones 15;
using namespace std; 
double noLitros=noGalones; 
main()
{
	//Conversion a Galones
	noLitros*=3.7854;
	cout<<"Programa para convertir galones a litros (15 Galones)  ";
	cout<<"\nNumero de Galones: "<<noGalones;
	cout<<"\nNumero de Litros: "<<noLitros;
	getch(); 
	return 0; 
}

