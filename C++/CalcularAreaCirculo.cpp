/*
Programa para calcular el area de un circulo
Gabriel Esteban Castillo Ramirez
10-04-2017
*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std; 
const double PI=3.14159265358979328;
double radioCirculo;
int main()
{
	cout<<"Programa que calcule el area de un circulo\n";
	cout<<"Ingrese el radio: ";
	cin>>radioCirculo;
	if(radioCirculo>0)
	{
		cout<<"El area es: "<<PI*pow(radioCirculo,2)<<" unidades cuadradas";
	}
	else
	{
		cout<<"radio invalido"<<endl;
	}
	getch();
	return 0;
}

