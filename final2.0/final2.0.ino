const int led_time=2;
const int led_2=5;
const int led_3=6;
int blink = HIGH;
void setup() {
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,INPUT);
pinMode(10,INPUT);
pinMode(11,INPUT);
}

void loop() {
digitalWrite(2,blink);
if (digitalRead(11) == HIGH){
analogWrite(5,35);
analogWrite(6,35);
while (digitalRead(9) == LOW)
{
Serial.println(&quot;ir1&quot;);
analogWrite(5,250);
}
while (digitalRead(10) == HIGH)
{
Serial.println(&quot;ir2&quot;);
analogWrite(6,250);

}
}

else {
digitalWrite(5,LOW);
digitalWrite(6,LOW);
}

}
