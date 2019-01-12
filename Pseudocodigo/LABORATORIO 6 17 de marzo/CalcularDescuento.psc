//Ejercicio 6.3
//17-03-17
//Gabriel Esteban Castillo Ramirez 
Algoritmo calcularDescuento
	Definir valorProducto Como Real
	Escribir "Determinador del descuento del 5%"
	Escribir "Digite el precio venta del producto"
	Leer valorProducto
	si valorProducto>=0
		si ((valorProducto)+(valorProducto*0.19))>13000
			valorProducto=valorProducto*0.95
		FinSi
		Escribir"Factura"
		EScribir"Precio venta del producto: ",valorProducto
	sino
		Escribir "El precio es inválido"
	FinSi
FinAlgoritmo
