// Si...Entonces Anidado (if)

void setup() {

  Serial.begin(9600);

  int A = 0;

  if (A >= 10) {
    if (A == 10) {
      Serial.println("Ingresaste un numero IGUAL a 10");
    } else {
      Serial.println("Ingresaste un numero MAYOR a 10");
    }
  } else {
    Serial.println("Ingresaste un numero MENOR a 10");
  }
}

void loop() {
  // Nada para hacer
}