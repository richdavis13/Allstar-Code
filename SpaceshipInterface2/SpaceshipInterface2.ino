int switchState = 0;
void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, INPUT);
}
void loop() {
  switchState =digitalRead(2);
  //the button is not pressed
  if (switchState == LOW){
    //the button is not pressed
    digitalWrite(3, LOW);
    digitalWrite(4,LOW);
    digitalWrite(5, LOW);
    digitalWrite(6 , HIGH);
  }
  else{ //the button is pressed
    digitalWrite(3, HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6 , LOW);
    delay(250); //wait for a quarter second
    //Toggles LEDs
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);//wait for quarter second
  }
}//Goes back to beginning
