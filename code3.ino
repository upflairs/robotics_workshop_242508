void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT); pinMode(10, OUTPUT); // right motor  
  pinMode(11, OUTPUT); pinMode(12, OUTPUT); // left motor
}

void loop() {
  if(Serial.available()){
    char ch = Serial.read();
    if(ch=='w'){ // forward
      digitalWrite(9,1);digitalWrite(10,0);
      digitalWrite(11,0);digitalWrite(12,1);
    } else if (ch=='a'){ // left
      digitalWrite(9,1);digitalWrite(10,0);
      digitalWrite(11,0);digitalWrite(12,0);
    } else if (ch=='d'){ // right
      digitalWrite(9,0);digitalWrite(10,0);
      digitalWrite(11,0);digitalWrite(12,1);
    } else if(ch=='z'){ // back
      digitalWrite(9,0);digitalWrite(10,1);
      digitalWrite(11,1);digitalWrite(12,0);
    } else if (ch=='s'){ // stop
      digitalWrite(9,0);digitalWrite(10,0);
      digitalWrite(11,0);digitalWrite(12,0);
    }
  }
}
