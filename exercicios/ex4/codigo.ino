// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(5, INPUT);
}

int var;
void loop()
{
  var = digitalRead(5);
  if(var){
    digitalWrite(2, HIGH);
  }else{
    digitalWrite(2, LOW);
  }
  delay(10);
}
