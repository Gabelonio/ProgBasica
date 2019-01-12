//Ejercicio 5.2.3
//Gabriel Esteban Castillo Ramirez
//12-03-17
Algoritmo calcularDescuento
	Definir monto Como Real;
	Escribir "Calculador de Descuento"
	Escribir "Ingrese Monto"
	Leer monto
	Si monto>=0
		Si monto>100
			Escribir"El descuento es: ",monto*0.1
		Sino
			Si monto<100
				Escribir"El descuento es: ",monto*0.02
			FinSi
		FinSi
	Sino
		Escribir"Dato inválido" 
	FinSi
FinAlgoritmo
