/*
Programa para calcular el factorial
Gabriel Esteban Castillo Ramirez
29-04-2017
*/
#include<iostream>
#include<conio.h>
#define ENTER 13 
using namespace std;
int factorialRec(int a);
int factorialIt(int a);
char opc;
int num;  
int main()
{
	do{
		cout<<"Programa Para calcular el factorial de un numero \nPresione \nEnter Para Ingresar\nOtra tecla para Salir";	
		opc=getch();
		if(opc==ENTER)
		{
			do{
				cout<<"\nIngrese el numero: "; 
				cin>>num;
				if(num<0)
				{
					cout<<"\nNumero invalido\n"; 
				}	
			}while(num<0);
			cout<<"El factorial hallado recursivamente es: "<<factorialRec(num)<<"\nEl factorial hallado iterativamente es: "<<factorialIt(num)<<"\n";
			system("pause");
			system("cls"); 
		}
		else
		{
			cout<<"\nPrograma Finalizado"; 
		}
	}while(opc==ENTER); 
	getch();
	return 0; 
}
int factorialRec(int a)
{
	return (a<=1)?1:a*factorialRec(a-1); 
}
int factorialIt(int a)
{
	if(a==0){a=1;}
	int ret=a;
	for(int i=1;i<a;i++)
	{ 
		ret*=i; 
	}
	return ret; 
}
