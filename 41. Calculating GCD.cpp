/*
Programa para calcular el maximo comun divisor
Gabriel Esteban Castillo Ramirez
29-04-2017
*/
#include<iostream>
#include<conio.h>
#define ESC 27
using namespace std; 
int encontrarDivisorRec(int a,int b,int c);
int encontrarDivisorIt(int a,int b,int c);
int divisorRec,divisorIt,numero;  
char opcion;
int main()
{
	cout<<"Programa para calcular el maximo comun divisor entre los numeros\nIngrese el primer numero: ";
	cin>>numero; 
	cout<<"\nIngrese el segundo numero: ";
	cin>>divisorRec;
	divisorIt=divisorRec; 
	divisorRec=encontrarDivisorRec(numero,divisorRec,divisorRec);
	divisorIt=encontrarDivisorIt(numero,divisorIt,divisorIt);   
	do{
		cout<<"\nPresione\nUna tecla cualquiera para ingresar un numero\nEsc para salir"; 
		opcion=getch(); 
	    if(opcion!=ESC)
	    {
	    	cout<<"\nIngrese el numero: " ; 
	    	cin>>numero;
			divisorRec=encontrarDivisorRec(numero,divisorRec,divisorRec); 
			divisorIt=encontrarDivisorIt(numero,divisorIt,divisorIt);   
	    	cout<<"\n"; 
	    	system("pause"); 
	    	system("cls"); 
		}
		else
		{
			cout<<"\nPrograma Finalizado\nMinimo Comun Divisor usando metodo recursivo: "<<divisorRec<<"\nMinimo Comun Divisor usando metodo iterativo: "<<divisorIt;
		}
	}while(opcion!=ESC); 
	getch();
	return 0; 
}
int encontrarDivisorRec(int a,int b,int c)
{
	return (a%c==0&&b%c==0)?c:encontrarDivisorRec(a,b,c-1); 
}
int encontrarDivisorIt(int a,int b,int c)
{
	while(a%c!=0||b%c!=0)
	{
		c--;		
	}
	return c; 
}

