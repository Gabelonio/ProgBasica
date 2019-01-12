//Ejercicio 6.5
//17-03-17
//Gabriel Esteban Castillo Ramirez 
Algoritmo Factorial
	Definir num,fac como Entero
	fac<-1
	Escribir"Calculador de Factorial"
	Escribir"Ingrese el numero"
	Leer num
	si num>=0
		si num==0
			fac=1	
		Sino
			Para contador<-1 Hasta num Con Paso 1 Hacer
				fac=fac*contador
			Fin Para
		FinSi
		Escribir"El Factorial es: ",fac
	sino	
		Escribir"Número Inválido"
	FinSi
FinAlgoritmo
