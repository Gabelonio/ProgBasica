/*
Programa para calcular la fuerza entre dos cargas
Gabriel Esteban Castillo Ramirez
10-04-2017
*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
const double k=8.99*pow(10,9);
double magnitudUno,magnitudDos,coordxUno,coordyUno,coordxDos,coordyDos;
int main()
{
	cout<<"Programa para calcular la magnitud fuerza entre \ndos cargas con coordenadas polares";
	cout<<"\nIngrese la primera Magnitud : ";
	cin>>magnitudUno;
	cout<<"\nIngrese la coordenada X de la primera carga: ";
	cin>>coordxUno;
	cout<<"\nIngrese la coordenada Y de la primera carga: ";
	cin>>coordyUno;
	cout<<"\nIngrese la segunda Magnitud: ";
	cin>>magnitudDos;
	cout<<"\nIngrese la coordenada X de la segunda carga: ";
	cin>>coordxDos;
	cout<<"\nIngrese la coordenada Y de la segunda carga: ";
	cin>>coordyDos;
	if(coordxUno==coordxDos&&coordyUno==coordyDos)
	{
		cout<<"\nCoordenadas Invalidas";	
	}
	else
	{
		cout<<"La magnitud es: "<<k*abs(magnitudUno*magnitudDos)/(pow(coordyDos-coordyUno,2)+pow(coordxDos-coordyUno,2));
	}
	getch();
	return 0;
}
