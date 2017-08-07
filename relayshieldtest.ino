int MotorControl = 5;    
int MotorControl2 = 4;
int MotorControl3 = 6;    
int MotorControl4 = 7;
int led = 13;

// the setup routine runs once when you press reset:
void setup()  
{
  pinMode(led, OUTPUT);
  pinMode(MotorControl, OUTPUT);
  pinMode(MotorControl2, OUTPUT);
  pinMode(MotorControl3, OUTPUT);
  pinMode(MotorControl4, OUTPUT);
}


void loop()  {

  digitalWrite(MotorControl,HIGH); 
  digitalWrite(MotorControl2,HIGH);
  delay(1200); 
  digitalWrite(MotorControl,LOW);
  digitalWrite(MotorControl2,LOW);
  delay(30000); 
}
