void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(17, INPUT);
  pinMode(16,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int v = digitalRead(17);
  if(v==HIGH){
    Serial.println("有人經過");
    digitalWrite(16,HIGH);
    delay(100);
    digitalWrite(16,LOW);
  }else{
    Serial.println("沒人經過");
  }
  delay(500);
}
