// Ejemplo de uso de una funcion

void setup() {

  Serial.begin(9600);

  int dato1 = 2;  // Ingrese el primer numero
  int dato2 = 3;  // Ingrese el segundo numero
  int total = Suma(dato1, dato2);

  Serial.print("El resultado es ");
  Serial.println(total);
}

void loop() {
  // Nada para hacer
}

// Toma dos numeros enteros, los suma y devuelve el resultado
int Suma(int numero1, int numero2) {
  int resultado = numero1 + numero2;
  return resultado;
}