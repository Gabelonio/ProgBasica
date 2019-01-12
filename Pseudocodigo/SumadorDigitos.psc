//Ejercicio 6.2
//17-03-17
//Gabriel Esteban Castillo Ramirez 
Algoritmo sumarDigitos
	Definir num,divisor,suma,contador,digito,restador como Real
	Escribir"Sumador de digitos"
	Escribir"Digite el numero"
	Leer num
	si num<0
		num=-num
	FinSi
	restador<-num-trunc(num)
	mientras restador!=0
		num=num*10
		restador=restador*10
		restador=restador-trunc(restador)
	FinMientras
	Mientras num>0 Hacer
		contador<-0
		divisor<-10
		mientras (num/divisor)>1
			divisor=divisor*10
			contador=contador+1
		FinMientras
		digito=num-(num%(10^(contador)))
		num=num-digito 
		digito=digito/(10^(contador))
		suma=suma+digito		
	Fin Mientras
	Escribir"La suma es: ",suma
FinAlgoritmo
