#define SENSE A0 // EYE BLINK SENSOR  
#define buzzer 2 // BUZZER

void setup()
{  
pinMode(SENSE, INPUT);
pinMode(2, OUTPUT);
pinMode(LED_BUILTIN, OUTPUT); 
}
void loop()
{
if(digitalRead(SENSE))
{
  digitalWrite(LED_BUILTIN, LOW);
  pinMode(2, LOW);
}
else
{
    delay (200);
    if(digitalRead(SENSE))
    {
  digitalWrite(LED_BUILTIN, LOW);
 pinMode(2, LOW);
}
    else
   digitalWrite(LED_BUILTIN, HIGH);  
     pinMode(2, HIGH);
   }
}


