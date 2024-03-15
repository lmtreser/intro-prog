// Funcion "Suma de numeros"

void setup() {

  Serial.begin(9600);
  
  Serial.print("La suma es: ");
  Serial.println(sumar());
}

void loop() {
  // Nada para hacer
}

int sumar() {
  int s;
  s = 10 + 5;
  return s;
}