void setup()
{
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(10, HIGH);
  delay(500);
}

int on = 20;
int off = 0;
int a = 30;
int b = 45;
int c = 60;
int d = 75;
int e = 90;

void loop()
{
  if (analogRead(A0) > a)
  {
    analogWrite(3, on);
  }
  else
  {
    analogWrite(3, off);
  }
  if (analogRead(A0) > b)
  {
    analogWrite(5, on);
  }
  else
  {
    analogWrite(5, off);
  }
  if (analogRead(A0) > c)
  {
    analogWrite(6, on);
  }
  else
  {
    analogWrite(6, off);
  }
  if (analogRead(A0) > d)
  {
    analogWrite(9, on);
  }
  else
  {
    analogWrite(9, off);
  }
  if (analogRead(A0) > e)
  {
    analogWrite(10, on);
  }
  else
  {
    analogWrite(10, off);
  }
  
  Serial.println(analogRead(A0));
  delay(20);
}
