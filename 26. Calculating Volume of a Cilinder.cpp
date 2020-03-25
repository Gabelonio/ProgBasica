/*
Programa para calcular el volumen de un cilindro
Gabriel Esteban Castillo Ramirez
10-04-2017
*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
double radioCilin,alturaCilin;
const double PI=3.14159265358979328;
int main()
{
	cout<<"Programa que calcule el volumen de un cilindro\n";
	cout<<"Ingrese el radio: ";
	cin>>radioCilin;
	if(radioCilin>0)
	{
		cout<<"Ingrese la altura: ";
		cin>>alturaCilin;
		if(alturaCilin>0)
		{
			cout<<"El volumen es: "<<PI*pow(radioCilin,2)*alturaCilin <<"Unidades cubicas";
		}
		else
		{
			cout<<"\nAltura Invalida";
		}
	}
	else
	{
		cout<<"\nRadio Invalido";
	}
	getch();
	return 0;
}
