/* 
Programa generador de cuadrados magicos
04-05-2017
Gabriel Esteban Castillo Ramirez
*/ 
#include<iostream>
#include<conio.h>
#include<iomanip>
//genera numeros aleatorios
#include <cstdlib>
#include<time.h>
#define ESCAPE 27
using namespace std;
bool verificarRepeticion(int numero,int arreglo[4][4]);
bool verificarSuma(int arreglo[4][4]) ;
void inicializarMatriz(int matriz[4][4]);
void generarNumero(int numuno,int numdos,int arreglo[4][4]);
int generarNumero(int arreglo[4][4]);
void generarCuadroTres();
void generarCuadroCuatro();
const int ESQUINA [9][4]={{4,9,13,8},{1,12,15,6},{1,8,14,11},{2,7,11,14},{1,4,15,14},{4,7,9,14},{2,5,15,12},{3,6,13,12},{3,6,13,12	}};
const int CENTRO[9][4]={{15,10,2,7},{14,3,4,13},{7,2,10,15},{15,10,6,3},{10,7,8,9},{15,12,6,1},{7,4,10,13},{14,11,4,5},{10,7,8,9	}};
char opcion;  
int main()
{
	do{
		cout<<"Programa para generar cuadrados magicos de 3x3 y 4x4\nPresione\n1.Para cuadro de 3x3\n2.Para cuadro de 4x4\nEsc para salir  ";
		opcion=getch();
		cout<<"\n\n";
		switch(opcion)
		{
			case '1':{
						generarCuadroTres()	;		
						break;
			}
			case '2':{
						generarCuadroCuatro();
						break;
			}
			case ESCAPE:{
						cout<<"\nPrograma Finalizado\n";
						break;
			}
			default:{
						cout<<"\nComando Invalido\n";
						break;
			}
		}
		cout<<"\n"; 
		system("pause");
		system("cls");
	}while(opcion!=ESCAPE);
	return 0; 
}
//cuerpos de las funciones
void generarCuadroTres()
{
	//incializar el numero aleatorio	
	srand(time(NULL));
	int matriz[3][3];
	matriz[1][1]=5;
	while(true)
	{
		matriz[0][0]=1+rand()%9;
		if(matriz[0][0]%2==0)
		break;  
	}
	//se llena la matriz a partir del numero aleatorio de la esquina
	matriz[2][2]=10-matriz[0][0]; 
	while(true)
	{
		matriz[0][2]=1+rand()%9;
		if((matriz[0][2]%2==0)&&(matriz[0][2]!=matriz[0][0])&&(matriz[0][2]!=matriz[2][2]))
		break;
	}
	matriz[2][0]=10-matriz[0][2];
	matriz[0][1]=15-matriz[0][0]-matriz[0][2];
	matriz[2][1]=15-matriz[2][0]-matriz[2][2];
	matriz[1][0]=15-matriz[0][0]-matriz[2][0];
	matriz[1][2]=15-matriz[0][2]-matriz[2][2];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)	
			cout<<matriz[i][j]<<" "; 
		cout<<"\n"; 
	}
}
void inicializarMatriz(int matriz[4][4])
{
	matriz[0][1]=0;
	matriz[0][2]=0;
	matriz[1][0]=0;
	matriz[2][0]=0;
	matriz[1][3]=0;
	matriz[2][3]=0;
	matriz[3][1]=0;
	matriz[3][2]=0;
}
void generarCuadroCuatro()
{
	//incializar el numero aleatorio	
	srand(time(NULL));
	int matriz[4][4],numeroUno,numeroDos;
	numeroUno=rand()%9;
	numeroDos=rand()%4; 
	//inicializar matriz
	inicializarMatriz(matriz); 
	//generar esquinas y centro
	generarNumero(numeroUno,numeroDos,matriz); 
	//generar contenido
	while(true)
	{
		//generar centro
		inicializarMatriz(matriz);
		while(true)
		{
			inicializarMatriz(matriz);
			matriz[0][1]=generarNumero(matriz);
			matriz[0][2]=generarNumero(matriz);
			matriz[3][1]=generarNumero(matriz);
			matriz[3][2]=generarNumero(matriz);	
			if(((matriz[0][0]+matriz[0][1]+matriz[0][2]+matriz[0][3])==34)&&((matriz[0][1]+matriz[1][1]+matriz[2][1]+matriz[3][1])==34)&&((matriz[0][2]+matriz[1][2]+matriz[2][2]+matriz[3][2])==34)&&((matriz[3][0]+matriz[3][1]+matriz[3][2]+matriz[3][3])==34))
				break;
		}
		matriz[1][0]=generarNumero(matriz);
		matriz[2][0]=generarNumero(matriz);
		matriz[1][3]=generarNumero(matriz);
		matriz[2][3]=generarNumero(matriz);
		if(verificarSuma(matriz))
		break;
	 
	}	
	//imprime la matriz
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<setw(3)<<matriz[i][j];
		}
		cout<<"\n"; 
	}
}
bool verificarRepeticion(int numero,int arreglo[4][4])
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(arreglo[i][j]==numero)
			{
				return false;
			}
		}
	}
	return true; 
}
bool verificarSuma(int arreglo[4][4])
{
	int sumauno,sumados;
	for(int i=0;i<4;i++)
	{
		sumauno=0;
		sumados=0; 
		for(int j=0;j<4;j++)
		{
			sumauno+=arreglo[i][j];
			sumados+=arreglo[j][i];
		}
		if(sumauno!=34||sumados!=34)
		{
			return false; 
		}
	}
	return true;
}
int generarNumero(int arreglo[4][4])
{
	int numero;	
	while(true)
	{	
		numero=1+rand()%16;
		if(verificarRepeticion(numero,arreglo)	)
			break;
	}
	return numero;
}
void generarNumero(int numuno,int numdos,int matriz[4][4])
{
	switch(numdos)
	{
		case 0:{
				matriz[0][0]=ESQUINA[numuno][0]; 
				matriz[0][3]=ESQUINA[numuno][1];
				matriz[3][0]=ESQUINA[numuno][2];
				matriz[3][3]=ESQUINA[numuno][3];
				matriz[1][1]=CENTRO[numuno][0];
				matriz[1][2]=CENTRO[numuno][1];
				matriz[2][1]=CENTRO[numuno][2];
				matriz[2][2]=CENTRO[numuno][3];
				break;
		}
		case 1:{
				matriz[0][0]=ESQUINA[numuno][2]; 
				matriz[0][3]=ESQUINA[numuno][0];
				matriz[3][0]=ESQUINA[numuno][3];
				matriz[3][3]=ESQUINA[numuno][1];
				matriz[1][1]=CENTRO[numuno][2];
				matriz[1][2]=CENTRO[numuno][0];
				matriz[2][1]=CENTRO[numuno][3];
				matriz[2][2]=CENTRO[numuno][1];
				break;
		}
		case 2:{
				matriz[0][0]=ESQUINA[numuno][3]; 
				matriz[0][3]=ESQUINA[numuno][2];
				matriz[3][0]=ESQUINA[numuno][1];
				matriz[3][3]=ESQUINA[numuno][0];
				matriz[1][1]=CENTRO[numuno][3];
				matriz[1][2]=CENTRO[numuno][2];
				matriz[2][1]=CENTRO[numuno][1];
				matriz[2][2]=CENTRO[numuno][0];
				break;
		}
		case 3:{
				matriz[0][0]=ESQUINA[numuno][1]; 
				matriz[0][3]=ESQUINA[numuno][3];
				matriz[3][0]=ESQUINA[numuno][0];
				matriz[3][3]=ESQUINA[numuno][2];
				matriz[1][1]=CENTRO[numuno][1];
				matriz[1][2]=CENTRO[numuno][3];
				matriz[2][1]=CENTRO[numuno][0];
				matriz[2][2]=CENTRO[numuno][2];
				break;
		}
	}
}
