// Funciones, pasaje de argumentos por referencia

void setup() {

  Serial.begin(9600);

  int dato1, dato2;
  dato1 = 3;
  dato2 = 5;

  Serial.print("El contenido original de dato1 es ");
  Serial.println(dato1);
  Serial.print("El contenido original de dato2 es ");
  Serial.println(dato2);

  Suma(dato1, dato2);

  Serial.print("Se actualizo el contenido de dato1 a ");
  Serial.println(dato1);
  Serial.print("Se actualizo el contenido de dato2 a ");
  Serial.println(dato2);
}

void loop() {
  // Nada para hacer
}

// Las variables usadas como argumento pueden ser modificadas por la funcion
void Suma(int &numero1, int &numero2) {

  numero1 = numero1 + 1;
  numero2 = numero2 + 1;

  Serial.print("El contenido de numero1 es ");
  Serial.println(numero1);
  Serial.print("El contenido de numero2 es ");
  Serial.println(numero2);
}