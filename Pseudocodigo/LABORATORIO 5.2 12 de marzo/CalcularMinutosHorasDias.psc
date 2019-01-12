//Ejercicio 5.2.4
//Gabriel Esteban Castillo Ramirez
//12-03-17
Algoritmo calcularMinutosHorasyDias
	Definir seg,dia,hora Como Entero
	Definir min Como Real
	Escribir "Calculador de Minutos, Horas y Dias"
	Escribir "Ingrese los segundos"
	Leer seg
	Si seg>=0
		Mientras seg>=86400
			seg=seg-86400
			dia=dia+1
		FinMientras
		Mientras seg>=3600
			seg=seg-3600
			hora=hora+1
		FinMientras
		Mientras seg>=60
			seg=seg-60
			min=min+1
		FinMientras
		min=min+(seg/60)
		Escribir dia," Dias ",hora," Horas ",min," Minutos" 
	Sino
		Escribir"Dato inválido" 
	FinSi
FinAlgoritmo
