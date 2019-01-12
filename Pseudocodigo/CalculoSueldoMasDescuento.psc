//Ejercicio 5.2.1
//Gabriel Esteban Castillo Ramirez
//12-03-17
Algoritmo calcularDescuentoySueldo 
	Definir sueldo,descuento Como Real;
	Escribir "Calculador de Descuento y Sueldo Neto"
	Escribir "Ingrese sueldo"
	Leer sueldo
	Si sueldo>=0
		Si sueldo <=1000000
			descuento=sueldo*0.1
		Sino
			Si sueldo>1000000 y sueldo<=2000000
				descuento=sueldo*0.05
			Sino
				descuento=sueldo*0.03
			FinSi
			
		FinSi
		sueldo=sueldo-descuento
		Escribir"Descuento: ",descuento
		Escribir"   Sueldo: ",sueldo
	Sino 
		Escribir "Dato erróneo"
	FinSi
FinAlgoritmo
