// Primer ejemplo con PSeInt

// Defino variables para mi algoritmo
int numero1;
int numero2;
int resultado;

void setup() {

  // Habilitar monitor Serial
  Serial.begin(9600);
  // Solicitarle datos al usuario
  Serial.println("Usuario ingresa un numero entero por favor:");
}

void loop() {

  // Si llegan datos
  if (Serial.available() > 0) {

    String input = Serial.readStringUntil('\n');
    numero1 = input.toInt();  // Convertir String en Int

    Serial.println("Usuario ingresa otro numero entero por favor:");

    while (Serial.available() == 0) {
      // Esperar a que el usuario ingrese el segundo número
    }

    input = Serial.readStringUntil('\n');
    numero2 = input.toInt();  // Convertir String en Int

    // Realizar la operacion correspondiente
    resultado = numero1 * numero2;
    Serial.print("El resultado de la operacion es: ");
    Serial.println(resultado);
    Serial.println("Programa finalizado. Muchas gracias.");
  }
}