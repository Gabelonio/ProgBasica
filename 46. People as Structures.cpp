/*
Programa para registar e imprimir datos de tres personas
24-05-17
Gabriel Esteban Castillo Ramirez
*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct persona
{
	string nombre,apellido,telefono;
	char direccion[20]; 
};
persona registro[3];
int cantidad;
float suma=0;  
int main()
{
	cout<<"Programa para realizar los registros de 3 personas\n";
	//ingresar arreglo
	for(int i=0;i<3;i++)
	{
		cout<<"\n\nPersona "<<i+1<<"\nIngrese nombre: ";
		cin>>registro[i].nombre; 
		cout<<"\nIngrese Apellido: ";
		cin>>registro[i].apellido;
		cout<<"\nIngrese Telefono: ";
		cin>>registro[i].telefono;
		char a[2];
		gets(a);
		cout<<"\nIngrese Direccion: ";
		gets(registro[i].direccion);
	}
	system("cls "); 
	//imprimir arreglo
	for(int i=0;i<3;i++)
	{
		cout<<"\n\nPersona "<<i+1<<"\nNombre: ";
		cout<<registro[i].nombre;
		cout<<"\n Apellido: ";
		cout<<registro[i].apellido;
		cout<<"\n Telefono: ";
		cout<<registro[i].telefono;
		cout<<"\n Direccion: ";
		cout<<registro[i].direccion;
	}
	getch();
	return 0;
}
