//Ejercicio 4
//Gabriel Esteban Castillo Ramirez
//03-03-2017 
Algoritmo calcularSegundosRestantes
	Escribir"Segundos restantes para el minuto"
	Escribir"Ingrese los segundos"
	Leer Noseg
	Mientras Noseg>=60 Hacer
		Noseg=Noseg-60
	Fin Mientras
	Si Noseg==0
		Noseg=60
	FinSi
	Escribir"Los segundos que faltan para el siguiente minuto son: ",60-Noseg	
FinAlgoritmo
