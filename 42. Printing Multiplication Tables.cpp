/*
Programa para imprimir las tablas de multiplicar
05-05-17
Gabriel Esteban Castillo Ramirez 
*/
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	for(int i=0;i<11;i++)
	{
		cout<<i; 
		for(int j=0;j<10;j++)
		{
			//diferenciar primer linea de las tablas de multiplicar
			(i==0)?cout<<setw(4)<<j+1:cout<<setw(4)<<(j+1)*i; 
		}
		cout<<"\n";
	}
	getch();
	return 0; 
}
