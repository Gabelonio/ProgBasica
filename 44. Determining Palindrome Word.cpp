/*
Programa para determinar una palabra palindroma
05-05-17
Gabriel Esteban Castillo Ramirez 
*/
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
using namespace std; 
#define ESCAPE 27
void inicializarArreglo(char palabra[]); 
bool determinarPalindromo(char palabra[]); 
char opcion,palabra[20]; 
int main()
{
	do{
		cout<<"Programa para determinar una palabra palindroma o capicua\nPresione\nCualquier tecla para iniciar\nEsc para finalizar"; 
	    opcion=getch();
	    if(opcion!=ESCAPE)
	    {
	    	inicializarArreglo(palabra); 
	    	cout<<"\nIngrese la Palabra: ";
	    	gets(palabra);
	    	(determinarPalindromo(palabra))?cout<<"La palabra es palindromo\n":cout<<"La palabra no es palindromo\n";
		}
		else
		{
			cout<<"\nPrograma Finalizado\n"; 
		}
		system("pause");
		system("cls"); 
	}while(opcion!=ESCAPE);
	return 0;
}
//Definicion de funcion
void inicializarArreglo(char palabra[])
{
	for(int i=0;i<20;i++)
	{
		palabra[i]=' '; 
	}  
}
bool determinarPalindromo(char palabra[])
{
	bool retorno;
	int cont=19;
	//quita los espacios en la comparacion  
	for(int a=0;a<20;a++){while(palabra[cont-a]==' '){cont--; }}
	//compara las ultimas y primeras letras de la palabra 
	for(int a=0;a<cont;a++) 
	{		
		//compara ultimo con primer  dato char en el paso a
		retorno=tolower(palabra[a])==tolower(palabra[cont-a-1]);
		//si encuentra una diferencia se sale del ciclo
		if(retorno==false){break;} 
	}
	return retorno; 
}
