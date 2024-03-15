// Pasaje de argumentos por referencia 
Función Suma (numero1 Por Referencia,numero2 Por Referencia)
	numero1 <- numero1+1
	numero2 <- numero2+1
	Escribir 'El contenido de numero1 es ', numero1
	Escribir 'El contenido de numero2 es ', numero2
FinFunción

Algoritmo Sumando
	Definir dato1, dato2 Como Entero
	dato1 <- 3
	dato2 <- 5
	Escribir 'El contenido original de dato1 es ', dato1
	Escribir 'El contenido original de dato2 es ', dato2
	Suma(dato1,dato2)
	Escribir 'Se actualizo el contenido original de dato1 a ', dato1
	Escribir 'Se actualizo el contenido original de dato2 a ', dato2
FinAlgoritmo
