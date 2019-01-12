//Ejercicio 5.2.5
//Gabriel Esteban Castillo Ramirez
//12-03-17
Algoritmo calcularAreaCirculoAreaCuadrado
	Definir medicion Como Real
	Definir opc Como Entero
	Escribir"Calculador de Área de Circunferencia y Cuadrado" 
	Repetir
		Escribir "Presione:"
		Escribir "1. para hallar el área de una circunferencia"
		Escribir "2. para hallar el área de un cuadrado"
		Escribir "0. para salir"
		Leer opc
		Si opc==1
			Escribir "Ingrese radio"
			Leer medicion
			Si medicion>0
				Escribir"El Área es: ",pi*medicion*medicion," Unidades cuadradas"
			Sino
				Escribir"Radio inválido"
			FinSi
		Sino
			Si opc==2
				Escribir "Ingrese lado"
				Leer medicion
				Si medicion>0
					Escribir"El Área es: ",medicion*medicion," Unidades cuadradas"
				Sino
					Escribir"Lado inválido"
				FinSi
			Sino
				Si opc==0
					EScribir"Ejecución Finalizada" 
				Sino
					Escribir"Opción Inválida"
				FinSi
			FinSi			
		FinSi
	Hasta Que  opc==0
FinAlgoritmo
