void setup() {    
  pinMode(9, OUTPUT); pinMode(10, OUTPUT); // right motor  
  pinMode(11, OUTPUT); pinMode(12, OUTPUT); // left motor
  pinMode(2, INPUT); // left sensor
  pinMode(3, INPUT); // right sensor
}
void loop() {  
  if((digitalRead(2)==0)&&(digitalRead(3)==0)){  // forward
    digitalWrite(9,1);digitalWrite(10,0);
    digitalWrite(11,0);digitalWrite(12,1);
  } else if ((digitalRead(2)==1)&&(digitalRead(3)==0)){ // left
    digitalWrite(9,1);digitalWrite(10,0);
    digitalWrite(11,0);digitalWrite(12,0);
  } else if ((digitalRead(2)==0)&&(digitalRead(3)==1)){ // right
    digitalWrite(9,0);digitalWrite(10,0);
    digitalWrite(11,0);digitalWrite(12,1);
  } else if ((digitalRead(2)==1)&&(digitalRead(3)==1)){ // stop
    digitalWrite(9,0);digitalWrite(10,0);
    digitalWrite(11,0);digitalWrite(12,0);
  } 
}
