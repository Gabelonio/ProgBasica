//Ejercicio 5
//Gabriel Esteban Castillo Ramirez
//03-03-2017 
Algoritmo determinarPrimo
	Escribir "Determinar si el numero es primo o no"
	Escribir "Ingrese el numero"
	Leer Num
	Para Divisor<-1 Hasta Num Con Paso 1 Hacer
		Si Num%Divisor==0
			contador=contador+1
		FinSi
	Fin Para
	Si contador==2
		Escribir "El numero es primo"
	Sino
		Escribir "El numero no es primo"
	FinSi
FinAlgoritmo
