// OPERADORES

Algoritmo operadores
	
	// RELACIONALES
	// 	> 		mayor que 		3 > 2
	// 	< 		menor que 		2< 3
	// 	= 		igual que 			3=3
	// 	<=		menor o igual que	2 <= 5
	// 	>=		mayor o igual que	4>=3
	// 	<>		distinto que		3<>5
	
	// LOGICOS
	// 	& (Y)		Y logico			(7>6) & (4<10) 	// verdadero
	//	| (O)		O logico			(7<6) | (4=10)	// falso
	//	~ (NO)		negacion				~(2<5)		// falso
	
	// ALGEBRAICOS
	// 	+		suma				total = cantidad1 + cantidad2
	//	-		resta				total = cantidad3 - cantidad4
	//	*		multiplicacion		area = base * altura
	//	/		division			resultado = sensor / 4
	//	^		potenciacion		superficie = 3.41 * radio^2
	//	% (MOD)	modulo				resto = numero MOD div
	
	Definir Num1, Num2 , Resultado como Real;
	Escribir "Ingrese el primer numero:";
	Leer Num1;
	Escribir "Ingrese el segundo numero:";
	Leer Num2;
	Resultado = Num1 - Num2;
	Escribir "El resultado es: ", Resultado;
	
FinAlgoritmo