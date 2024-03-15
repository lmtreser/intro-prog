// Funcion "Datos de usuario"

void setup() {

  Serial.begin(9600);
  datos();
}

void loop() {
  // Nada para hacer
}

void datos() {

  String nombre, edad;
  nombre = "Juan";
  edad = 25;

  Serial.print("El nombre ingresado es: ");
  Serial.println(nombre);
  Serial.print("La edad ingresada es: ");
  Serial.println(edad);
}