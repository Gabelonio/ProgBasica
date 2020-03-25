/*
Programa para comparar numeros en un arreglo
05-05-17
Gabriel Esteban Castillo Ramirez 
*/
#include<iostream>
#include<conio.h>
using namespace std;
//declaracion de funciones
void llenarArreglo(int arreglo[]);
bool verificarArreglo(int arreglo[]);
void inicializarArreglo(int arreglo[]);
void compararNumeros(int arreglo[],int numero); 
int numeros[15],numero;
char opcion ;
int main()
{
	inicializarArreglo(numeros);
	do{ 
		cout<<"Programa para comparar numeros en un arreglo\nPresione\n1.Para llenar el arreglo\n2.Para ingresar el numero a comparar\n3.Para salir";
		opcion=getch();
		switch(opcion)
		{
			case '1':{
					cout<<"\nIngrese los numeros\n";
					llenarArreglo(numeros);	
					break;
			}
			case '2':{
					if(verificarArreglo(numeros))
					{
						cout<<"\nNo ha ingresado los numeros \n";
					}
					else
					{
						cout<<"\nIngrese el numero: ";
						cin>>numero;  
						compararNumeros(numeros,numero);				
					}
					break;
			}
			case '3':{
					cout<<"\nPrograma Finalizado\n";
					break;
			}
			default:{
					cout<<"\nComando Invalido\n";
					break;
			}
		} 	
		system("pause");
		system("cls"); 
	}while(opcion!='3');
	return 0;
}
//cuerpos de las funcion
void inicializarArreglo(int arreglo[])
{
	for(int i=0;i<15;i++)
	{
		arreglo[i]=0; 
	}
}
//verificar que se haya llenado el arreglo 
bool verificarArreglo(int arreglo[])
{
	bool retorno;
	for(int i=0;i<15;i++)
	{
		retorno=(arreglo[i]==0); 
		if(retorno==false){break;}	
	}
	return retorno; 
}
void llenarArreglo(int arreglo[])
{
	for(int i=0;i<15;i++)
	{
		cout<<"Numero  "<<i+1<<": ";
		cin>>arreglo[i];
	}
}
void compararNumeros(int arreglo[],int numero)
{
	bool existencia=false; 
	for(int i=0;i<15;i++)
	{
		if(existencia==false){existencia=arreglo[i]==numero;} 
		if(arreglo[i]==numero){cout<<numero<<" se encuentra en la posicion "<<i<<"\n";}
	}
	if(existencia==false){cout<<"\nEl numero no existe en el arreglo\n";}
}
