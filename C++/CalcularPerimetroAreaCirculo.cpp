/*
Programa para calcular perimetro y area de un circulo
Gabriel Esteban Castillo Ramirez
10-04-2017
*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
const double PI=3.141592;
double radioCirculo;
int main()
{
	cout<<"Programa que calcula el perimetro y area del circulo\n";
	cout<<"Ingrese el radio: ";
	cin>>radioCirculo;
	if(radioCirculo>0)
	{
		cout<<"El area es: "<<PI*pow(radioCirculo,2);
		cout<<"\nEl perimetro es : "<<2*PI*radioCirculo;
	}
	else
	cout<<"Radio Invalido";
	getch();
	return 0; 
}
