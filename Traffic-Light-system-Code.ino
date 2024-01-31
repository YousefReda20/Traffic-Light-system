int red=8;
int yellow=6;
int green=2;
int on=500;
int off=500;

void setup()
{
  pinMode(red,1);
  pinMode(yellow,1);
  pinMode(green,1);
}

void loop()
{
  digitalWrite(red,1);
  delay(on); 
  digitalWrite(yellow,1);
  delay(on); 
  digitalWrite(yellow,0);
  delay(off);
  digitalWrite(yellow,1);
  delay(on);
  digitalWrite(yellow,0);
  delay(off);
  digitalWrite(yellow,1);
  delay(on);
  digitalWrite(yellow,0);
  digitalWrite(red,0);
  digitalWrite(green,1);
  delay(on);
  digitalWrite(green,0);
  delay(700);
}