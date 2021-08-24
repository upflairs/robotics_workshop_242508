void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(11, 1);
  digitalWrite(12, 0);
  delay(2000);
  digitalWrite(11, 0);
  digitalWrite(12, 1);
  delay(2000);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  delay(2000);
}
