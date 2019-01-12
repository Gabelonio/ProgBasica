/*
Programa para calcular el promedio de tres estudiantes
Gabriel Esteban Castillo Ramirez
10-04-2017
*/
#include<iostream>
#include<conio.h>
using namespace std; 
int numNotas;
double sumaNotas=0,nota,sumaPromedios=0;
int main()
{
	cout<<"Programa para calcular el promedio de 3 estudiantes"; 
	cout<<"\nIngrese el numero de notas por estudiante: ";
	cin>> numNotas;
	if(numNotas>0)
	{
		for(int i=1;i<=3;i++)
		{
			sumaNotas=0;
			cout<<"\nEstudiante No."<<i<<endl;
			for(int j=1;j<=numNotas; j++)
			{
				do{ 
				 	cout<<"Nota No."<<j<<": ";
				 	cin>>nota;	
					if(nota>5||nota<0)
					{
						cout<<"\nNota invalida\n ";	
					}			 	
				}while(nota>5||nota<0);
				sumaNotas+=nota;
			}
			sumaPromedios+=(sumaNotas/numNotas);								
		}
		cout<<"El promedio de los 3 estudiantes es: "<<sumaPromedios/3;
	}	
	else
	{
		cout<<"\nNumero Invalido ";
	}
	getch();
	return 0;
}

