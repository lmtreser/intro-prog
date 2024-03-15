// Este algoritmo simula la lectura de temperatura desde un sensor
// y muestra los valores en pantalla. Opcionalmente es posible 
// solicitarle que calcule la misma en grados Fahrenheit

Funcion valorF <- CalcularFahrenheit (ValorC)
	ValorF = (ValorC * 1.8) + 32
FinFuncion

Algoritmo LecturaTemperatura
	
	Definir  Temperatura Como Real
	Definir  TemperaturaF Como Real
	Definir  Menu Como Caracter
	
	Escribir "Lectura del sensor (en °C): "
	Leer Temperatura
	Escribir "La temperatura es: ", Temperatura, " °C"
	Escribir "¿Desea mostrar la temperatura en grados Fahrenheit?"
	Escribir "[S]i o [N]o"
	
	Leer Menu
	Si Menu == "S"
		TemperaturaF = CalcularFahrenheit(Temperatura)
		Escribir "La temperatura es: ", TemperaturaF, "°F"
	FinSi
	
FinAlgoritmo
