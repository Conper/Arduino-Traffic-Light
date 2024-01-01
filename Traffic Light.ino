
int verde = 5;
int amarillo = 6;
int rojo = 7;
int alarma = 9;

void setup() {
  Serial.begin(9600);
  pinMode(verde , OUTPUT);
  pinMode(amarillo , OUTPUT);
  pinMode(rojo , OUTPUT);
  pinMode(alarma , OUTPUT);
  digitalWrite(verde, LOW);
  digitalWrite(amarillo, LOW);
  digitalWrite(rojo, LOW);
}

void loop() {
  digitalWrite(rojo, LOW);
  digitalWrite(verde, HIGH);
  delay(6000);
  digitalWrite(verde, LOW);
  digitalWrite(amarillo, HIGH);
  delay(3000);
  digitalWrite(amarillo, LOW);
  digitalWrite(rojo, HIGH);
  delay(5500);
  for (int i = 0; i <= 2; i++) {
    digitalWrite(rojo, LOW);
    delay(500);
    digitalWrite(rojo, HIGH);
    digitalWrite(alarma, HIGH);
    delay(500);
    digitalWrite(alarma, LOW);
  }

}
