//Ejercicio 6.4
//17-03-17
//Gabriel Esteban Castillo Ramirez 
Algoritmo determinarNumeros
	Definir num,pares,impares,positivos,negativos Como Entero
	Escribir"Determinador de numeros pares,impares,negativos y positivos"
	Para contador<-1 Hasta 50 Con Paso 1 Hacer
		Escribir"Ingrese Numero Num. ",contador
		Leer num
		si num%2==0
			pares=pares+1	
		sino
			impares=impares+1
		FinSi
		si num>0
			positivos=positivos+1
		sino
			si num!=0
				negativos=negativos+1
			FinSi
		FinSi
	Fin Para
	Escribir"La cantidad de numeros pares es: ",pares
	Escribir"La cantidad de numeros impares es: ",impares
	Escribir"La cantidad de numeros positivos es: ",positivos
	Escribir"La cantidad de numeros negativos es: ",negativos
	
FinAlgoritmo
