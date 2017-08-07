

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
  
}

void loop()
{
for(int f = 0; f < 5; f = f + 2)
{
  Serial.print( "I rolled a " );
  int a = random(1, 21);
  int STR = 4;
  int BA = 7;
  int c = a + STR + BA;
  Serial.println(c);
  delay(1000);
} 
delay(30000);
}
