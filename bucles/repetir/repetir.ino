// Lazo Repetir (DO WHILE)

void setup() {

  Serial.begin(9600);

  int A = 0;
  do {
    A++;
    Serial.print("El valor de A es: ");
    Serial.println(A);
  } while (A > 10);
}

void loop() {
  // Nada para hacer
}