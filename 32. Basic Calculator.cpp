/*
Programa para realizar distintos calculos entre dos numeros 
Gabriel Esteban Castillo Ramirez
24-04-2017
*/
#include<iostream>
#include<conio.h>
//colocando el codigo de escape como su nombre 
#define ESCAPE 27
using namespace std;
//deficiones de funciones
double sumarNumeros(double a,double b);
double restarNumeros(double a,double b);
double multiplicarNumeros(double a,double b);
double dividirNumeros(double a,double b);
int dividirNumeros(int a,int b); 
char opcion,operacion; 
double numeroUno,numeroDos,resultado;
int main()
{
	do{	
		cout<<"Programa para realizar distintos calculos en dos numeros\nIngrese una tecla para ejecutar\nPresione Esc para salir";
		opcion=getch();
		if(opcion!=ESCAPE)
		{
			cout<<"\nIngrese el primer numero: ";
			cin>>numeroUno; 
			cout<<"\nIngrese el segundo numero: "; 
			cin>>numeroDos;
			cout<<"\nIngrese la operacion\n1.Para suma\n2.Para Resta\n3.Para multiplicacion\n4.Para division real\n5.Para division Entera \n" ;
			opcion=getch();
			switch(opcion)
			{
				case '1':{
							operacion='+';
							resultado= sumarNumeros(numeroUno,numeroDos);		
							break;
				}
				case '2':{
							operacion='-';
							resultado= restarNumeros(numeroUno,numeroDos);  
							break;
				}
				case '3':{
							operacion='*';
							resultado= multiplicarNumeros(numeroUno,numeroDos);
							break;
				}
				case '4':{
							if(numeroDos==0)
							{
								operacion='e';
							}
							else
							{
								operacion='/';
								resultado=dividirNumeros(numeroUno,numeroDos);
							}
							break;
				}
				case '5':{
							if(numeroDos==0)
							{
								operacion='e';
							}
							else
							{
								operacion='/';
								resultado=dividirNumeros((int)numeroUno,(int)numeroDos);
							}
							break;
				}
				default:{
							operacion='x';
							cout<<"Opcion Invalida"; 
							break;
				}
			}		
			if(operacion=='e')cout<<"\nNo se puede dividir por cero"	;
			else if(operacion!='x')cout<<"\n"<<numeroUno<<operacion<<numeroDos<<"="<< resultado;			
			system("pause");
			system("cls");	
		}
		else
		{
			cout<<"\nPrograma Finalizado";
		}
	}while(opcion!=ESCAPE); 
	getch();
	return 0;
}
//cuerpo de funciones
double sumarNumeros(double a,double b)
{
	return a+b; 
}
double restarNumeros(double a,double b)
{
	return a-b; 
}
double multiplicarNumeros(double a,double b)
{
	return a*b; 
}
double dividirNumeros(double a,double b)
{
	return a/b;
}
int dividirNumeros(int a,int b)
{
	return a/b; 
 } 
