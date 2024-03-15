// Algoritmo Multiple

void setup() {

  Serial.begin(9600);

  int A = 1;

  switch (A) {

    case 1:
      Serial.println("Ingresaste el valor 1");
      break;

    // Rango de valores
    // https://forum.arduino.cc/t/switch-case-multiple-outputs-with-same-option/497570/2
    case 2 ... 3:
      Serial.println("Ingresaste el valor 2 o 3, no estoy seguro");
      break;

    default:
      Serial.println("El dato ingresado no es correcto");
  }
}

void loop() {

  // Nada para hacer
}