/*
Programa para registrar alumnos y calcular el promedio 
24-05-17
Gabriel Esteban Castillo Ramirez
*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct alumno
{
	string nombre,apellido;
	float calificacion[3],promedio; 	
};
int main()
{
	alumno clase[10];
	cout<<"Programa para calcular el promedio de 10 estudiantes con sus 3 notas\n";
	for(int i=0;i<10;i++)
	{ 
		cout<<"Estudiante No. "<<i+1<<"\n";
		cout<<"Ingrese el Nombre: ";
		cin.ignore();
		cin>>clase[i].nombre;
		cout<<"\nIngrese el Apellido: ";
		cin.ignore();
		cin>>clase[i].apellido;
		for(int j=0;j<3;j++)
		{	
			do{
				cout<<"\nIngrese la nota "<<j+1<< ": ";
				cin>>clase[i].calificacion[j];
				if(clase[i].calificacion[j]<0||clase[i].calificacion[j]>5)
					cout<<"\nNota no valida\n";
			}while(clase[i].calificacion[j]<0||clase[i].calificacion[j]>5);
			clase[i].promedio+=clase[i].calificacion[j];	
		}
		clase[i].promedio/=3;
	}
	system("cls"); 
	for(int i=0;i<10;i++)
	{
		cout<<"\n\nEstudiante "<<i+1<<"\nNombre: ";
		cout<<clase[i].nombre<<" "<<clase[i].apellido;
		cout<<"\nPromedio: ";
		cout<<clase[i].promedio;
	}
	getch();
	return 0;
}

