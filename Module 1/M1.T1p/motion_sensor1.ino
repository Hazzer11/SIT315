void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, INPUT);
  Serial.begin(9600);
}
int val=0;
void loop()`val=digitalRead(7);
  
  if (val==HIGH){
  	digitalWrite(8, HIGH);
    Serial.println("Motion Detected");
  }
  else {
    digitalWrite(8, LOW);
    Serial.println("No Motion Detected");
  };
  delay(1000);
}