int apinA=2;
int bpinB=3;
int enablepin=11;

void setup() {
 pinMode(apinA,OUTPUT);
 pinMode(bpinB,OUTPUT);
 pinMode(enablepin,OUTPUT);
 analogWrite(enablepin,100);
}
void loop() {
  digitalWrite(apinA,LOW);
    digitalWrite(bpinB,HIGH);
    delay(1000);`q 98i
}
     
