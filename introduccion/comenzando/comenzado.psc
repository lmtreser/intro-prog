// COMENZANDO A PROGRAMAR

// Todo algoritmo en pseudocodigo tiene la siguiente estructura general:
//
// 	Algoritmo sin_titulo
//		accion 1;
//		accion 1;
//		.
//		.
//		.
//		accion n;
//	FinAlgoritmo

Algoritmo comenzar
	
	//  VARIABLES
	// Almacenan datos, los nombres de variables deben constar solo de letras, numeros y/o guion_bajo (_)
	// comenzando siempre con una letra. Hay tres tipos de datos:
	// Numerico: numeros, tanto enteros como reales. Para separar decimales se utiliza el punto.
	// Logico: solo puede tomar dos valores: VERDADERO o FALSO.
	// Caracter: caracteres o cadenas de caracteres encerrados entre comillas (pueden ser dobles o simples). 
	Definir sensorHumedad Como Real;
	Definir sensorTemperatura Como Entero;
	Definir mensaje Como Caracter;
	Definir estado Como Logico;
		
	// OPERADORES
	// Asignacion, permite almacenar un dato en una variable
	sensorHumedad = 1.45;
	sensorTemperatura = 15;
	mensaje = "La temperatura es: ";
	estado = Verdadero;
	
	// Escritura, la instruccion Escribir permite mostrar valores al ambiente.
	Escribir mensaje;
	Escribir sensorTemperatura;
	Escribir  "Esto es un texto a mostrar en pantalla";
	
	// Lectura, la instruccion Leer permite ingresar informacion desde el ambiente.
	Leer sensorTemperatura;
	Escribir "El dato ingresado es: ", sensorTemperatura;
	
	Escribir "---------------------";
	Escribir "El contenido de las variables es: ";
	Escribir sensorHumedad, " - ", sensorTemperatura, " - ", estado;
	
FinAlgoritmo