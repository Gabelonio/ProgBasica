//Ejercicio 5.2.5
//Gabriel Esteban Castillo Ramirez
//12-03-17
Algoritmo calcularAreaCirculoAreaCuadrado
	Definir medicion Como Real
	Definir opc Como Entero
	Escribir"Calculador de �rea de Circunferencia y Cuadrado" 
	Repetir
		Escribir "Presione:"
		Escribir "1. para hallar el �rea de una circunferencia"
		Escribir "2. para hallar el �rea de un cuadrado"
		Escribir "0. para salir"
		Leer opc
		Si opc==1
			Escribir "Ingrese radio"
			Leer medicion
			Si medicion>0
				Escribir"El �rea es: ",pi*medicion*medicion," Unidades cuadradas"
			Sino
				Escribir"Radio inv�lido"
			FinSi
		Sino
			Si opc==2
				Escribir "Ingrese lado"
				Leer medicion
				Si medicion>0
					Escribir"El �rea es: ",medicion*medicion," Unidades cuadradas"
				Sino
					Escribir"Lado inv�lido"
				FinSi
			Sino
				Si opc==0
					EScribir"Ejecuci�n Finalizada" 
				Sino
					Escribir"Opci�n Inv�lida"
				FinSi
			FinSi			
		FinSi
	Hasta Que  opc==0
FinAlgoritmo
