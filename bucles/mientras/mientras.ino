// LazoMientras (WHILE)

int A = 0;

void setup() {

  Serial.begin(9600);
}

void loop() {

  while (A < 10) {

    A = A + 1;
    Serial.print("El valor de A es: ");
    Serial.println(A);
  }

}  //FinAlgoritmo