//Ejercicio 6.6
//17-03-17
//Gabriel Esteban Castillo Ramirez 
Algoritmo calcularMedia
	Definir num,suma Como Real
	Escribir "Calcular la media de 100 numeros"
	Para contador<-1 Hasta 100 Con Paso 1 Hacer
		Escribir "Ingrese Numero: ",contador
		Leer num
		suma=suma+num		
	Fin Para
	Escribir"La media es: ",(suma/100)
FinAlgoritmo
