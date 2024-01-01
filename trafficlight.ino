
int green = 5;
int yellow = 6;
int red = 7;
int alarm = 9;

void setup() {
  Serial.begin(9600);
  pinMode(green , OUTPUT);
  pinMode(yellow , OUTPUT);
  pinMode(red , OUTPUT);
  pinMode(alarm , OUTPUT);
  digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
}

void loop() {
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  delay(6000);
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(3000);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(5500);
  for (int i = 0; i <= 2; i++) {
    digitalWrite(red, LOW);
    delay(500);
    digitalWrite(red, HIGH);
    digitalWrite(alarm, HIGH);
    delay(500);
    digitalWrite(alarm, LOW);
  }

}
