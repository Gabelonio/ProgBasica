/*
Programa para calcular la solucion de una ecuacion cuadratica
Gabriel Esteban Castillo Ramirez
21-04-2017
*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std; 
int a,b,c,opcion; 
int main()
{
    do{
        cout<<"Programa para encontrar la solucion en una ecuacion de segundo grado\nPresione:\n1.Para Ingresar\n2.Para Salir\n"; 
        cin>>opcion;
        switch(opcion)
        
        {
            case 1:{
                        cout<<"\nIngrese a: ";
    	                cin>>a;
	                    cout<<"\nIngrese b: ";
	                    cin>>b;
	                    cout<<"\nIngrese c: ";
	                    cin>>c;
	                    if(a==0)
    	                {
	      	                if(b==0)
	       	                {
		      	                if(c==0)
			                    {
				                    cout<<"No hay x que despejar (0=0)"; 	
		      	                }
			                    else
			                    {
				                    cout<<"La ecuacion es inconsistente"; 
			                    }	
		                    } 
                            else
		                    {
			                     cout<<"x= "<<-c/b;	
		                    }	
	                    }
	                    else
	                    {
		                    if(b==0)
		                    {
		  	                   if(c==0)
			                   { 
			     	                 cout<<"x= 0";	
			                   }
			                   else if(c/a<0)
			                   {
				                     cout<<"x="<<sqrt(-c/a)<<"\nx=-"<<sqrt(-c/a); 
			                   }
			                   else
			                   {
	                 		         cout<<"x="<<sqrt(c/a)<<"i\nx=-"<<sqrt(c/a)<<"i"; 
			                   }			
		                    }
		                    else
		                    {
			                   if(c==0)
			                   {
				                    cout<<"x= 0\nx="<<-b/a;
			                   }
		                       else if(((pow(b,2))-(4*a*c))==0)
			                   {
		                  	    	cout<<"x="<<-b/(2*a);
			                   }
			                   else if(((pow(b,2))-(4*a*c))>0)
			                   {
			                    	cout<<"x="<<(-b+sqrt((pow(b,2))-(4*a*c)))/(2*a)<<"\nx="<<(-	b-sqrt((pow(b,2))-(4*a*c)))/(2*a);
			                   }
		                 	   else
		                  	   {
		                  	    	cout<<"x="<<-b/(2*a)<<"-"<<sqrt(-((pow(b,2))-(4*a*c)))/(2*a)<<"i\nx="<<-b/(2*a)<<"+"<<sqrt(-((pow(b,2))-(4*a*c)))/(2*a)<<"i";
		                  	   }
		                    }
	                    }
                        break; 
                    }
            case 2:{
                    cout<<"\nPrograma Finalizado"; 
                    break; 
                   }
            default:{
                    cout<<"\nOpcion invalida"; 
                    break; 
                   }
        }
        cout<<"\n\nPresione una tecla para continuar";
        getch();
        system("cls");
    }while(opcion!=2);
    return 0;
}
