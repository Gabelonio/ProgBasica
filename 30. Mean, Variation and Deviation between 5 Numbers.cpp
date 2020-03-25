/*
Programa para calcular el promedio,la varianza y variacion estandar de 5 numeros
Gabriel Esteban Castillo Ramirez
21-04-2017
*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int opcion; 
double numUno,numDos,numTres,numCuatro,numCinco,promedio,varianza;
int main()
{
	do{
		cout<<"Programa para encontrar promedio,varianza y desviacion estandar de 5 numeros\nMenu:\n1.Para Ingresar\n2.Para Salir\n";
		cin>>opcion;
		switch(opcion)
		{
			case 1:{
					cout<<"\nIngrese numero 1: "; 
					cin>>numUno;
					cout<<"\nIngrese numero 2: ";
					cin>>numDos;
					cout<<"\nIngrese numero 3: ";
					cin>>numTres;
					cout<<"\nIngrese numero 4: ";
					cin>>numCuatro;
					cout<<"\nIngrese numero 5: ";
					cin>>numCinco; 
					promedio=(numUno+numDos+numTres+numCuatro+numCinco)/5;
					varianza=(pow((numUno-promedio),2)+pow((numDos-promedio),2)+pow((numTres-promedio),2)+pow((numCuatro-promedio),2)+pow((numCinco-promedio),2))/5;
					cout<<"El promedio es: "<<promedio<<"\nLa varianza es: "<<varianza<<"\nLa desviacion estandar es: "<<sqrt(varianza);		
					break;
				   }
			case 2:{
					cout<<"Programa Finalizado"; 
					break;
					}
			default:{
					cout<<"Ingreso Invalido"; 
					break;
					}
		}
		cout<<"\nPresione tecla para reiniciar"; 
		getch();
		system("cls");
	}while(opcion!=2);
	return 0; 
}
