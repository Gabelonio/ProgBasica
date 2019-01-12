/*
Declarar Variables Double y Char y realizar Casting
Gabriel Esteban Castillo Ramirez 
07-04-2017
*/
#include<iostream>
#include<conio.h>
using namespace std;
double c=5.0,d=10.4;
int a=89,b=4;
main()
{
	cout<<"Programa para demostrar que C es debilmente Tipado\nValores iniciales\nc=5.0\td=10.4\na=89\tb=4";
	c=a;
	cout<<"\n\nLa variable c ha tomado el valor de a, ahora c es: "<<c;
	b=d;
	cout<<"\n\nLa variable b ha tomado el valor de d, ahora b es: "<<b;
	a=10.3;
	d=-10;
	cout<<"\n\nRealizando asignaciones de valores decimales (10.3) a un entero\ny de valores enteros (-10) a una variable de Doble Precision:\nAhora a es "<<a<<" y d es "<<d;
	cout<<"\n\n\nC es Doblemente Tipado ya que nos ha ahorrado el casting entre variables y el   mismo compilador las ha hecho";
	getch()	;
	return 0;
}
