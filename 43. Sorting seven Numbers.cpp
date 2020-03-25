/*
Programa para organizar 7 numeros enteros
05-05-17
Gabriel Esteban Castillo Ramirez 
*/
#include<iostream>
#include<conio.h>
#define limite 2147483647
using namespace std;
void imprimirArreglo(int arreglo[],int a,int b);
void ordenar(int arreglo[]);
int numeros[7]; 
int main()
{
	cout<<"Programa para organizar 7 numeros enteros\n";
	//llenando el arreglo
	for(int i=0;i<7;i++)
	{
		cout<<"\nNumero "<<i+1<<": "; 
		cin>>numeros[i];
	}
	ordenar(numeros); 
	getch();
	return 0;
}
//cuerpos de las funciones
void imprimirArreglo(int arreglo[])
{
	cout<<"\nOrdenamiento Ascendente\n";
	for(int i=0;i<7;i++)
	{
		cout<<arreglo[i]<<" "; 
	}
	cout<<"\nOrdenamiento Descendente\n";
	for(int i=6;i>-1;i--)
	{
		cout<<arreglo[i]<<" "; 
	}
}
void ordenar(int arreglo[])
{
	int solucion[7],numMenor,cont;
	for(int i=0;i<7;i++)
	{
		cont=0; 
		numMenor=limite;
		//discrimina por menor
		for(int j=0;j<7;j++)
	    { 
			if(numMenor>=arreglo[j]&&(i==0||(solucion[i-1]<arreglo[j])))
			{
				numMenor=arreglo[j];		
			}
    	}
    	//Repite en el arreglo solucion los numeros repetidos en la sucesion
    	for(int k=0;k<7;k++)
    	{
    		if(numMenor==arreglo[k])
			{
				cont++; 
			}				
		}
		while(cont>1)
		{
			solucion[i]=numMenor;
			i++;
			cont--; 
		}
    	solucion[i]=numMenor; 
	}
	imprimirArreglo(solucion);
}
