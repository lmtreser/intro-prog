// Ejemplo que toma dos numeros, los suma y muestra el resultado

float A, B, C;

void setup() {
  // Habilitar monitor Serial
  Serial.begin(9600);

  Serial.println("Ingrese el primer numero:");
}

void loop() {

  if (Serial.available() > 0) {

    String input = Serial.readStringUntil('\n');
    A = input.toFloat();  // Convertir String en Float

    Serial.println("Ingrese el segundo numero:");

    while (Serial.available() == 0) {
      // Esperar a que el usuario ingrese el segundo número
    }
    input = Serial.readStringUntil('\n');
    B = input.toFloat();

    // Ahora se calcula la suma y se guarda el resultado en la variable C
    C = A + B;
    Serial.print("El resultado es: ");
    Serial.println(C);
  }
}  //FinAlgoritmo