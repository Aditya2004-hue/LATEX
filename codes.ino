int P,Q,R,A;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 P = digitalRead(2);
 Q = digitalRead(3);
 R = digitalRead(4);
 A = (P && !Q);
digitalWrite(5,A);
}
