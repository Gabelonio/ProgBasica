/*
Programa para calcular el area y perimetro de varios poligonos
Gabriel Esteban Castillo Ramirez
24-04-2017
*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
//declaracion de funciones 
double areaCuadrado(double a);
double perimetroCuadrado(double a);
double areaRombo(double a,double b);
double perimetroRombo(double a,double b);
double areaParalelogramo(double a,double b);
double perimetroParalelogramo(double a,double b);
double areaTrapecio(double a,double b,double c);
double perimetroTrapecio(double a,double b,double c); 
char opcion;
double datoUno,datoDos,datoTres,area,perimetro; 
int main()
{
	do{
		cout<<"Programa para calcular area y perimetro de varios poligonos\nIngrese\n1.Para el cuadrado\n2.Para el Rombo\n3.Para el Paralelogramo\n4.Para el Trapecio\n5.Para Salir";
		opcion=getch(); 
		switch(opcion)
		{
			case '1':{
					cout<<"\nIngrese el Lado: ";
					cin>>datoUno; 
					if(datoUno<=0)
					{
						opcion='e';
					}
					else
					{
						area=areaCuadrado(datoUno);
						perimetro=perimetroCuadrado(datoUno);
					}
					break;
			}
			case '2':{
					cout<<"\nIngrese La diagonal Mayor: ";
					cin>>datoUno; 
					cout<<"\nIngrese La diagonal Menor: ";
					cin>>datoDos;
					if(datoUno<=0||datoDos<=0||datoUno<=datoDos)
					{
						opcion='e';
					}
					else
					{
						area=areaRombo(datoUno,datoDos);
						perimetro=perimetroRombo(datoUno,datoDos);
					}
					break;
			}
			case '3':{
					cout<<"\nIngrese la Base: ";
					cin>>datoUno;
					cout<<"\nIngrese El lado restante: ";
					cin>>datoDos;
					cout<<"\nIngrese La Altura: ";
					cin>>datoTres;
					if(datoUno<=0||datoDos<=0||datoTres<=0)
					{
						opcion='e';
					}
					else
					{
						area=areaParalelogramo(datoUno,datoTres);
						perimetro=perimetroParalelogramo(datoUno,datoDos);
					}
					break;
			}
			case '4':{
					cout<<"\nIngrese La Base Mayor : ";
					cin>>datoUno;
					cout<<"\nIngrese La Base Menor: ";
					cin>>datoDos; 
					cout<<"\nIngrese La Altura: ";
					cin>>datoTres;
					if(datoUno<=0||datoDos<=0||datoTres<=0||datoUno<=datoDos)
					{
						opcion='e';
					}
					else
					{
						area=areaTrapecio(datoUno,datoDos,datoTres);
						perimetro=perimetroTrapecio(datoUno,datoDos,datoTres);
					}
					break;
			}
			case '5':{
					cout<<"\nPrograma Finalizado\n";
					break;
			}
			default:{
					opcion='d';
					cout<<"\nIngreso no Valido\n"; 	
					break;
			}
		}	
		if(opcion!='e'&&opcion!='5'&&opcion!='d'){cout<<"\nEl area es: "<<area<<"\nEl perimetro es: "<<perimetro<<"\n";}
		if(opcion=='e'){cout<<"\nPlanteamiento inconsistente\n";} 
		system("pause");
		system("cls");
	}while(opcion!='5');
	getch();
	return 0; 
}
//cuerpo de funciones 
double areaCuadrado(double a){return pow(a,2);}
double perimetroCuadrado(double a){return a*4;}
double areaRombo(double a,double b){return a*b/2;}
double perimetroRombo(double a,double b){return sqrt(pow(a,2)+pow(b,2))*4;}
double areaParalelogramo(double a,double b){return a*b;}
double perimetroParalelogramo(double a,double b){return a*2+b*2;}
double areaTrapecio(double a,double b,double c){return (a+b)*c/2;}
double perimetroTrapecio(double a,double b,double c){return 2*(sqrt(pow((a-b)/2,2)+pow(c,2)))+a+b;}
