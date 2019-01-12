/*
Programa para calcular la nota definitiva del estudiante uninversitario
Gabriel Esteban Castillo Ramirez
21-04-2017
*/
#include<iostream>
#include<conio.h>
using namespace std; 
int opcion;
double sumaPorcentajes,porcentaje,nota; 
int main()
{
	do{
		porcentaje=0.3;
		sumaPorcentajes=0; 
		cout<<"Programa para calcular la nota definitiva del estudiante universitario\nMenu\nIngrese un numero:\n1.Ingresar Notas\n2.Salir\n";
		cin>>opcion;
		switch(opcion)
		{
			case 1:{
					for(int i=1;i<=3;++i)
					{
						if(i==3)
						{
							porcentaje=0.4; 	
						}
						do{
							cout<<"Nota Numero "<<i<<" Porcentaje "<<porcentaje*100<<" :";
							cin>>nota;
							if(nota<0||nota>5)
							{
								cout<<"\nNota Invalida\n";
							}
						}while(nota<0||nota>5);
						sumaPorcentajes+=nota*porcentaje ;
					}
					cout<<"\n\nSu nota es: "<<sumaPorcentajes<<"\n";
					if(sumaPorcentajes>4.5)
					{
						cout<<"Felicitaciones, usted llegara lejos";
					}
					else if(sumaPorcentajes>=4)
					{
						cout<<"Puede hacerlo mejor ";
					}
					else if(sumaPorcentajes>=3)
					{
						cout<<"Debe esforzarse mas"; 
					}
					else
					{
						cout<<"Debe repetir la asignatura";
					} 
					break;
					}
			case 2:{
					cout<<"Programa Finalizado"; 
					break;
				   }
			case 3:{
					cout<<"Opcion Invalida"; 
					break;
					}
		} 
		cout<<"\n\nPresione una tecla para continuar";
        getch();
        system("cls");
    }while(opcion!=2);
    return 0;
}
