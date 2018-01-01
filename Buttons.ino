int trigger = 13;//for green led
int jump = 12;//for red led
int reload = 11;//for yellow led
int special = 10;//for blue led
int redled = 4;
int yellowled = 3;
int blueled = 2;
int greenled = 5;
void setup() 
{
  serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(trigger, INPUT);
  pinMode(jump, INPUT);
  pinMode(reload, INPUT);
  pinMode(special, INPUT);
  
  pinMode(greenled, OUTPUT);
  pinMode(redled, OUTPUT);
  pinMode(yellowled, OUTPUT);
  pinMode(blueled, OUTPUT);
 // pinMode(jump, INPUT);
 // pinMode(reload, INPUT);
}

void loop() 
{
 
  // put your main code here, to run repeatedly:
  if(digitalRead(trigger) == LOW )
  {
    digitalWrite(greenled, HIGH);
  }
  digitalWrite(greenled, LOW);
  
  if(digitalRead(jump) == LOW)
  {
    digitalWrite(redled, HIGH);
  }
  digitalWrite(redled, LOW);
  
  if(digitalRead(reload) == LOW)
  {
   digitalWrite(yellowled, HIGH);
  }
  digitalWrite(yellowled, LOW);
 
  if(digitalRead(special) == LOW)
  {
   digitalWrite(blueled, HIGH);
  }
  digitalWrite(blueled, LOW);
 
 /*     delay(1000);
      
      delay(1000);
      
      delay(1000);
      
      delay(1000);
      
      delay(1000);
      
      delay(1000);
      
      delay(1000);
      
      delay(1000);    */
    
 /*   else
    {
      analogWrite(greenled, LOW);
    }*/

}
