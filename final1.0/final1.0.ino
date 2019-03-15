const int led_1 = 3;
const int led_2 = 5;
const int led_3 = 6;
const int ir_1 = 9;
const int ir_2 = 10;
const int ir_3 = 11;
const int ldr = A5;
int b = 0;
int c = 0;
int d = 0;
void setup() {
// put your setup code here, to run once:
pinMode(led_1,OUTPUT);
pinMode(led_2,OUTPUT);
pinMode(led_3,OUTPUT);
pinMode(ir_1,INPUT);
pinMode(ir_2,INPUT);
pinMode(ir_3,INPUT);
pinMode(ldr,INPUT);
Serial.begin(9600);
}
void loop() {
// put your main code here, to run repeatedly:
int a = 40;//analogRead(ldr);
b = digitalRead(ir_1);
c = digitalRead(ir_2);
d = digitalRead(ir_3);
int threshold = analogRead(ldr);
Serial.println(ldr);
//delay(5);
if (a <= threshold){
int min = 20;
int max = 1000;
analogWrite(led_1,min);
analogWrite(led_2,min);
analogWrite(led_3,min);
if (b == LOW){
analogWrite(led_1,max);
} else
{
analogWrite(led_1,min);
}
if (c == LOW){
analogWrite(led_2,max);
} else
{
analogWrite(led_2,min);
}
if (d == LOW){
analogWrite(led_3,max);
} else
{
analogWrite(led_3,min);
}
}else
{digitalWrite(led_1,LOW);
digitalWrite(led_2,LOW);
digitalWrite(led_3,LOW);}
}
