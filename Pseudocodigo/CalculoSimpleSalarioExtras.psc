//Ejercicio 2
//Gabriel Esteban Castillo Ramirez
//03-03-2017
Algoritmo calcularSalarioConExtras
	Escribir "Programa para calcular el salario"
	Escribir "Ingrese el numero de horas trabajadas"
	Leer Nohoras
	Escribir "Ingrese el valor por hora"
	Leer Valhora
	Si Nohoras>=40
		Extra=((Nohoras-40)*(Valhora*1.5))
		Salario=(40*Valhora)+Extra
	Sino
		Salario=NoHoras*Valhora 
	FinSi	
	EScribir "El salario es: ",Salario
FinAlgoritmo
