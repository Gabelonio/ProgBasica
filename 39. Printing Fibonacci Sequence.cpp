/*
Programa para imprimir la sucesion de Fibonacci
24-04-17
Gabriel Esteban Castillo Ramirez 
*/
#include<iostream>
#include<conio.h>
using namespace std; 
int numeroLimite;
//Declaracion de Funcion
int realizarSerieFibonacciRec(int numero);
int realizarSerieFibonacciIt(int numero);
int main()
{
	cout<<"Programa para imprimir la sucesion de Fibonacci";
	do{
		cout<<"\nIntroduzca el ultimo termino a visualizar: ";
		cin>>numeroLimite;
		if(numeroLimite<0)
		{
			cout<<"\nIngreso Erroneo\n"; 
			system("pause");
			system("cls");
		}
	}while(numeroLimite<0);
	cout<<"\nModo Recursivo\n";
	for(int i=0;i<=numeroLimite;i++)
	{
		//invocacion de la funcion
		cout<<realizarSerieFibonacciRec(i)<<" "; 
	}
	cout<<"\nModo Iterativo\n";
    for(int i=0;i<=numeroLimite;i++)
	{
		//invocacion de la funcion
		cout<<realizarSerieFibonacciIt(i)<<" "; 
	}
	getch();
	return 0; 
}
//Cuerpos de la funcion
int realizarSerieFibonacciRec(int num)
{
	return (num<=1)?num:realizarSerieFibonacciRec(num-1)+realizarSerieFibonacciRec(num-2); 
}
int realizarSerieFibonacciIt(int num)
{
    int ac=1,ant1=0,ant2; 
	if(num<=1)
	{
		return num;
	}
	else
	{
        for(int i=2;i<=num;i++)
        {
            ant2=ant1;
            ant1=ac; 
            ac=ant1+ant2; 
        }
		return ac; 	
	} 
}
