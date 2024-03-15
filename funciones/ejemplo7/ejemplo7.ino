/*  Este algoritmo simula la lectura de temperatura desde un sensor
    y muestra los valores en pantalla. Opcionalmente es posible 
    solicitarle que calcule la misma en grados Fahrenheit
*/

float Temperatura, TemperaturaF;
String Menu;

void setup() {

  Serial.begin(9600);
  Serial.println("Lectura del sensor (en °C): ");
}

void loop() {

  if (Serial.available() > 0) {

    String input = Serial.readStringUntil('\n');
    Temperatura = input.toFloat();  // Convertir String en Float

    Serial.print("La temperatura es: ");
    Serial.print(Temperatura);
    Serial.println("°C");

    Serial.println("¿Desea mostrar la temperatura en grados Fahrenheit?");
    Serial.println("[S]i o [N]o");

    while (Serial.available() == 0) {
      // Esperar a que el usuario ingrese el segundo número
    }
    Menu = Serial.readStringUntil('\n');

    if (Menu == "S") {
      TemperaturaF = CalcularFahrenheit(Temperatura);
      Serial.print("La temperatura es: ");
      Serial.print(TemperaturaF);
      Serial.println("°F");
    }
  }
}

float CalcularFahrenheit(float ValorC) {
  float ValorF;
  ValorF = (ValorC * 1.8) + 32;
  return ValorF;
}