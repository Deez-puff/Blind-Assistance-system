#define trigPin 2
#define echoPin 3
#define buzzer 8

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  if (distance > 120 || distance == 0) {
    digitalWrite(buzzer, LOW);
  } 
  else if (distance > 60) {
    beep(500);
  } 
  else if (distance > 30) {
    beep(200);
  } 
  else {
    beep(80);
  }
}

void beep(int d) {
  digitalWrite(buzzer, HIGH);
  delay(d);
  digitalWrite(buzzer, LOW);
  delay(d);
}
