//Ejercicio 6.7
//17-03-17
//Gabriel Esteban Castillo Ramirez 
Algoritmo calcularSumaNumeros
	Definir n,minimo,maximo,suma Como Entero
	Escribir"Calculador de suma de pares entre N y 20"
	Escribir"Ingrese N"
	Leer n
	si n<20
		minimo=n
		maximo=20
	Sino
		minimo=20
		maximo=n
	FinSi
	Repetir
		si minimo%2==0
			suma=suma+minimo
		FinSi
		minimo=minimo+1
	Hasta Que minimo>maximo
	Escribir " El resultado es: ",suma
FinAlgoritmo
