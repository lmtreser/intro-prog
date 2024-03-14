/*  OPERADORES

  RELACIONALES
  
    > 		    mayor que 		      3 > 2
    <         menor que           2 < 3
    == 		    igual que 		      3 == 3
    <=		    menor o igual que	  2 <= 5
    >=		    mayor o igual que	  4 >= 3
    !=        distinto que		    3 != 5

  LOGICOS
  
    &&        Y logico (and)      (7 > 6) && (4 < 10) - Verdadero
    ||        O logico (or)	      (7 < 6) || (4 = 10)	- Falso
    !         negacion (not)      !(2 < 5)            - Falso

  ARITMETICOS
  
    +		      suma				        total = cantidad1 + cantidad2
    -		      resta				        total = cantidad3 - cantidad4
    *		      multiplicacion		  area = base * altura
    /         division			      resultado = sensor / 4
    %         modulo				      resto = numero % div
    =         asignacion          resultado = 23
*/

float Num1, Num2, Resultado;

void setup() {
  Serial.begin(9600);
  Serial.println("Ingrese el primer numero:");
}

void loop() {

  if (Serial.available() > 0) {

    String input = Serial.readStringUntil('\n');
    Num1 = input.toFloat();  // Convertir String en Float

    Serial.println("Ingrese el segundo numero:");

    while (Serial.available() == 0) {
      // Esperar a que el usuario ingrese el segundo número
    }
    input = Serial.readStringUntil('\n');
    Num2 = input.toFloat();

    // Ahora se calcula la suma y se guarda el resultado en la variable C
    Resultado = Num1 - Num2;
    Serial.print("El resultado es: ");
    Serial.println(Resultado);
  }
}  //FinAlgoritmo