//Ejercicio 6.1
//17-03-17
//Gabriel Esteban Castillo Ramirez 
Algoritmo calcularNotas
	Definir promedioRep,promedioApr,contadorApr,contadorNotas,nota,promedio Como Real
	Escribir"Calculador de notas y promedios"
	Esperar 2 Segundos 
	Borrar Pantalla
	Hacer
		Escribir "Nota No.",contadorNotas+1,"   Presione -1 para acabar proceso"
		Leer nota
		Si nota>=0 y nota<=5 
			contadorNotas=contadorNotas+1
			promedio=promedio+nota
			Si nota<3
				promedioRep=promedioRep+nota
			Sino
				promedioApr=promedioApr+nota
				contadorApr=contadorApr+1
			FinSi
		Sino
			Si nota!=-1
				Escribir "Nota inválida"
				Esperar 1 Segundo
			FinSi
		FinSi
		Borrar Pantalla
	Hasta Que nota==-1
	
	Escribir" La cantidad de notas reprobadas es: ",contadorNotas-contadorApr
	Escribir" La cantidad de notas aprobadas es: ",contadorApr
	Si contadorNotas!=0
		Escribir" El promedio del total de notas es: ",promedio/contadorNotas
		Si contadorApr!=0
			Escribir" El promedio de notas Aprobadas es: ",promedioApr/contadorApr
		Sino
			Escribir" No hay notas Aprobadas"
		FinSi
		Si (contadorNotas-contadorApr)!=0
			Escribir" El promedio de notas Reprobadas es: ",promedioRep/(contadorNotas-contadorApr) 
		Sino
			Escribir" No hay notas Reprobadas"
		FinSi
	sino 
		Escribir" No hay notas"
	FinSi	
FinAlgoritmo
