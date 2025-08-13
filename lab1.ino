// C++ code
//
int leds[]={2,3,4,5,6};
void setup()
{ 
  for(int i=0;i<5;i++){
  pinMode(i, OUTPUT);
  }

}

void loop()
{
  for(int i=0;i<5;i++){
  digitalWrite(leds[i], HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(leds[i], LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }
  for(int i=5;i>0;i--){
  digitalWrite(leds[i], HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(leds[i], LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }

}