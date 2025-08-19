const int trigPin = 9;
const int echoPin = 10;
const int LED1 = 11;
const int LED2 = 12;
const int t = trigPin;
const int e = echoPin;
const int L1 = LED1;
const int L2 = LED2;
void setup() {

Serial.begin(115200);
pinMode(t,OUTPUT);
pinMode(e,INPUT);
pinMode(L1,OUTPUT);
pinMode(L2,OUTPUT);
}

void loop() {
long duration;
float distance;
digitalWrite(trigPin,LOW);
delay(1000);
digitalWrite(trigPin,HIGH);
delay(1000);
digitalWrite(trigPin,LOW);
duration = pulseIn(echoPin, HIGH);
distance = duration*0.034/2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

if (distance <= 10){
  digitalWrite(L1,HIGH);
  digitalWrite(L2,LOW);
}
if (distance > 20){
  digitalWrite(L1,HIGH);
  digitalWrite(L2,HIGH);
}

delay(500);
}
