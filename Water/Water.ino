#define Grove_Water_Sensor 7
void setup() {
  // put your setup code here, to run once:
pinMode(Grove_Water_Sensor,INPUT);
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(digitalRead(Grove_Water_Sensor)==LOW){
    digitalWrite(LED_BUILTIN,LOW);
  }else{
    digitalWrite(LED_BUILTIN,HIGH);
  }
}
