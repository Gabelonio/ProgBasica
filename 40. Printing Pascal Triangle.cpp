/*
Programa para imprimir el triangulo de pascal
24-04-17
Gabriel Esteban Castillo Ramirez 
*/
#include<iostream>
#include<conio.h>
using namespace std; 
int trianguloPascalRec(int a);
int trianguloPascalIt(int a); 
int pot; 
int main()
{
    do{
        cout<<"Programa para imprimir el triangulo de Pascal"<<endl<<"Ingrese la potencia: ";
        cin>>pot;
        if(pot<0)
        {
            cout<<"Ingreso no valido\n";
            system("pause");
            system("cls"); 
        }
    }while(pot<0);
    //formar el triangulo usando un contador desde cero hasta el numero(pisos) 
	for(int h=1;h<=2;h++)
	{
		(h==1)?cout<<"Forma Recursiva\n":cout<<"Forma iterativa\n"; 	
		for(int i=0;i<=pot;i++)
		{
			//genera los espacios
			for(int k=pot-i;k>=0;k--)
			{
				cout<<" ";
			}
			//forma el contenido por potencia conforme avanza la piramide
			for(int j=i;j>=0;j--)
			{
				(h==1)?cout<<trianguloPascalRec(i)/(trianguloPascalRec(j)*trianguloPascalRec(i-j))<<" ":cout<<trianguloPascalIt(i)/(trianguloPascalIt(j)*trianguloPascalIt(i-j))<<" ";				 
			}
			cout<<"\n";
		}
		cout<"\n\n";
		system("pause");	
	}
    return 0;
}
int trianguloPascalRec(int a)
{
    return (a==0)?1:a*trianguloPascalRec(a-1); 
}
int trianguloPascalIt(int a)
{
	int retorno=1;
	if(a==0)
	{
		return 1;
	}
	else
	{
		for(int i=1;i<=a;i++)
		{
			retorno*=i;	
		}
		return retorno; 
	}
}
