/*
Programa para aplicar el teorema de pitagoras
Gabriel Esteban Castillo Ramirez
10-04-2017
*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std; 
double ladoUno,ladoDos;
int opcion; 
int main()
{
	do{
		cout<<"Programa para aplicar el teorema de Pitagoras\n";
		cout<<"Con un triangulo recto de lados A,B y C con C como la hipotenusa: presione\n";
		cout<<"1. Para hallar A\n";
		cout<<"2. Para hallar B\n";
		cout<<"3. Para hallar C\n";
		cout<<"4. Para Salir\nIngrese: ";
		cin>>opcion;
		switch(opcion)
		{
			case 1:
			case 2:{
					cout<<"Ingrese el cateto: ";
					cin>>ladoUno;
					cout<<"Ingrese la hipotenusa: ";
					cin>>ladoDos; 
					if(ladoUno<=0||ladoDos<=0||ladoDos<=ladoUno)
					{
						cout<<"Ingreso Invalido";
					}
					else
					{
						cout<<"El lado restante es: "<<sqrt(pow(ladoDos,2)-pow(ladoUno,2));
					}
					break;
					}
			case 3:{
					cout<<"Ingrese el cateto: ";
					cin>>ladoUno;
					cout<<"Ingrese el cateto restante: ";
					cin>>ladoDos;
					if(ladoUno<=0||ladoDos<=0)
					{
						cout<<"Ingreso Invalido";
					}
					else
					{
						cout<<"La hipotenusa es: "<<sqrt(pow(ladoDos,2)+pow(ladoUno,2));
					}
					break;
					}
			case 4:{
					cout<<"El programa ha finalizado"; 
					break;
					}
			default:{
					cout<<"Opcion Invalida";
					break;
					}
		}
		cout<<"\nPresione un boton para continuar";
		getch();
		system("cls");	
	}while(opcion!=4);
	return 0; 	
}
