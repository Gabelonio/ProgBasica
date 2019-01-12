/*
Programa para realizar distintos calculos con un numero
Gabriel Esteban Castillo Ramirez
24-04-2017
*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
//declaracion de las funciones
double raizCuadrada(double numero);
double raizCubica(double numero);
double cubo(double numero);
double logNatural(double numero);
double logVulgar(double numero) ;
double exponencial(double numero);
char opcion;
double numero ; 
int main()
{
	do{
		cout<<"Programa para realizar calculos de raices, exponentes, logaritmos y exponencial\nIngrese el numero\n";
		cin>>numero;
		cout<<"Presione \n1.Para Raiz Cuadrada\n2.Para Raiz Cubica\n3.Para el Cubo\n4.Para el Logaritmo Natural\n5.Para el Logaritmo Vulgar\n6.Para la exponencial\n7.Para salir" ;
		opcion=getch(); 	
		switch(opcion)
		{
			case '1':{
					(numero<0)?opcion='e':numero=raizCuadrada(numero); 
					break;
			}
			case '2':{
					numero=raizCubica(numero);
					break;
			}
			case '3':{
					numero=cubo(numero);
					break;
			}
			case '4':{
					(numero<=0)?opcion='e':numero=logNatural(numero);
					break;
			}
			case '5':{
					(numero<=0)?opcion='e':numero=logVulgar(numero);
					break;
			}
			case '6':{
					numero=exp(numero);
					break;
			}
			case '7':{
					cout<<"\nPrograma Finalizado";
					break;
			}
			default:{
					opcion='a';
					cout<<"\nComando no Valido"; 
					break;
			}
		}
		if(opcion!='a'&&opcion!='7'){(opcion=='e')?cout<<"\nNumero no valido para la operacion\n":cout<<"\nEl resultado es: "<<numero<<"\n";}		
		system("pause");
		system("cls");
	}while(opcion!='7');
	getch();
	return 0; 
}
//cuerpo de las funciones
double raizCuadrada(double n){return sqrt(n);}
double raizCubica(double n){return cbrt(n);}
double cubo(double n){return pow(n,3);}
double logNatural(double n){return log(n);}
double logVulgar(double n){return log10(n);}
double exponencial(double n){return exp(n);}
