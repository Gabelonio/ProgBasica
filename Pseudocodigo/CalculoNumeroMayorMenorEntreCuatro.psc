//Ejercicio 5.2.2
//Gabriel Esteban Castillo Ramirez
//12-03-17
Algoritmo calcularMayoryMenor
	Definir num1,num2,num3,num4,numenor,numayor Como Real
	Escribir "Calculador de Numero menor y mayor entre cuatro Numeros"
	Escribir "Ingrese primer numero"
	Leer num1
	Escribir "Ingrese segundo numero"
	Leer num2
	Escribir "Ingrese tercer numero"
	Leer num3
	Escribir "Ingrese cuarto numero"
	Leer num4
	Si num1>num2
		Si num1>num3
			Si num1>num4
				numayor=num1
			Sino
				numayor=num4
			FinSi
		Sino
			Si num3>num4
				numayor=num3
			Sino
				numayor=num4
			FinSi
		FinSi
		Si num2<num3
			Si num2<num4
				numenor=num2
			Sino
				numenor=num4
			FinSi
		Sino
			Si num3<num4
				numenor=num3
			Sino
				numenor=num4
			FinSi
		FinSi
	Sino 
		Si num2>num3
			Si num2>num4
				numayor=num2
			Sino 
				numayor=num4
			FinSi
		Sino
			Si num3>num4
				numayor=num3
			Sino
				numayor=num4
			FinSi
		FinSi
		Si num1<num3
			Si num1<num4
				numenor=num1
			Sino
				numenor=num4
			FinSi
		Sino
			Si num3<num4
				numenor=num3
			Sino
				numenor=num4
			FinSi
		FinSi
	FinSi
	Escribir "El numero mayor es: ",numayor
	Escribir "El numero menor es: ",numenor
FinAlgoritmo
