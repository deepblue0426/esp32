int MQ2=36;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(15,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(MQ2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int v =analogRead(MQ2);
  Serial.println(v);
  if(v >= 1600){
    analogWrite(4, 255);
    analogWrite(15, 255);
  }
  else if(v >= 800){
    analogWrite(4,255);
  }
  else if(v >=400){
    analogWrite(4,255);
    analogWrite(2,255);
  }
  else{
    analogWrite(2,255);
  }
  delay(100);
}
