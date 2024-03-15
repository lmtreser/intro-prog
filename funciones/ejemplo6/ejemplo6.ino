// Funcion "Calcular el doble"

void setup() {

  Serial.begin(9600);

  float n;
  n = 3;

  Serial.print("El numero a evaluar es: ");
  Serial.println(n);
  Serial.print("Su doble es: ");
  Serial.println(doble(n));
}

void loop() {
  // Nada para hacer
}

float doble(float numero) {
  float d;
  d = numero * 2;
  return d;
}