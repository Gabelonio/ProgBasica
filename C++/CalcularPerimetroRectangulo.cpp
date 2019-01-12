/*
Programa para calcular el perimetro de un rectangulo
Gabriel Esteban Castillo Ramirez
10-04-2017
*/
#include<iostream>
#include<conio.h>
using namespace std;
double largoRect,anchoRect;
int main()
{
	cout<<"Programa que calcula el perimetro de un rectangulo\n";
	cout<<"Ingrese Altura: ";
	cin>>largoRect;
	if(largoRect>0)
	{
		cout<<"Ingrese Ancho: ";
		cin>>anchoRect;
		if(anchoRect>0)
		{
			cout<<"El perimetro es: "<<(largoRect*2)+(anchoRect*2)<<" unidades lineales";
		}
		else
		{
			cout<<"Ancho Invalido";
		}
	}
	else
	{
		cout<<"Altura invalida ";
	}
	getch();
	return 0;
}
