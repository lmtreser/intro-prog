/*  Lazo Para (FOR)

    OPERADORES COMPUESTOS
    
    *=  Multiplicacion
    ++  Incremento
    +=  Suma
    --  Decremento
    -=  Resta
    /=  Division
*/

void setup() {

  Serial.begin(9600);

  for (int A = 0; A <= 10; A*=2) {
    Serial.print("El valor de A es: ");
    Serial.println(A);
  }
}

void loop() {
  // Nada para hacer
}