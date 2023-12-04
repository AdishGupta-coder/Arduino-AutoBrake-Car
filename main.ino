int motoral=13;
int negativea=12;
int motorbr=11;
int negativeb=10;
void setup() {
  // put your setup code here, to run once:
  pinMode(motoral,OUTPUT);
  pinMode(negativea,OUTPUT);
  pinMode(motorbr,OUTPUT);
  pinMode(negativeb,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(motoral,HIGH);
  digitalWrite(negativea,LOW);
  digitalWrite(motorbr,HIGH);
  digitalWrite(negativeb,LOW);
  delay(5000);
  digitalWrite(motoral,LOW);
  digitalWrite(negativea,LOW);
  digitalWrite(motorbr,LOW);
  digitalWrite(negativeb,LOW);
  delay(2000);
  digitalWrite(motoral,LOW);
  digitalWrite(negativea,HIGH);
  digitalWrite(motorbr,LOW);
  digitalWrite(negativeb,HIGH);
  delay(5000);
  digitalWrite(motoral,LOW);
  digitalWrite(negativea,LOW);
  digitalWrite(motorbr,LOW);
  digitalWrite(negativeb,LOW);
  delay(2000);
  digitalWrite(motoral,LOW);
  digitalWrite(negativea,LOW);
  digitalWrite(motorbr,HIGH);
  digitalWrite(negativeb,LOW);
  delay(5000);
  digitalWrite(motoral,LOW);
  digitalWrite(negativea,LOW);
  digitalWrite(motorbr,LOW);
  digitalWrite(negativeb,LOW);
  delay(2000);
  digitalWrite(motoral,HIGH);
  digitalWrite(negativea,LOW);
  digitalWrite(motorbr,LOW);
  digitalWrite(negativeb,LOW);
  delay(5000);
  digitalWrite(motoral,LOW);
  digitalWrite(negativea,LOW);
  digitalWrite(motorbr,LOW);
  digitalWrite(negativeb,HIGH);
  delay(2000);
}
