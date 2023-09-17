int P,Q,R,A;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 A = digitalRead(2);
 B = digitalRead(3);
 C = (!B);
digitalWrite(5,C);
}
