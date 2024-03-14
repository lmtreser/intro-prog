/*  COMENZANDO A PROGRAMAR
    Desde PSeInt a Arduino
*/

// Variables
float sensorHumedad;    // Definir Como Real
int sensorTemperatura;  // Definir Como Entero
String mensaje;         // Definir Como Caracter
bool estado;            // Definir Como Logico

// Se ejecuta al iniciar, una vez
void setup() {

  // Asignar valores a las variables
  sensorHumedad = 1.45;
  sensorTemperatura = 15;
  mensaje = "La temperatura es: ";
  estado = true;

  // Habilita el monitor Serial, necesario para Escribir y Leer
  Serial.begin(9600);

  // Escribir
  Serial.print(mensaje);
  Serial.println(sensorTemperatura);
  Serial.println("Esto es un texto a mostrar en pantalla");
}

// Se ejecuta sin parar
void loop() {

  // Leer sensorTemperatura
  if (Serial.available() > 0) {

    String input = Serial.readStringUntil('\n');
    sensorTemperatura = input.toInt();  // Convertir String en Int

    // Escribir
    Serial.print("El dato ingresado es: ");
    Serial.println(sensorTemperatura);

    Serial.println("---------------------");
    Serial.println("El contenido de las variables es: ");
    Serial.print(sensorHumedad);
    Serial.print(" - ");
    Serial.print(sensorTemperatura);
    Serial.print(" - ");
    Serial.println(estado);
  }
}