const byte potPin = 14;
int val,i;
float r2,vol;

void setup() {
  Serial.begin(9600);
  Serial.println("Hello,World!");
}

void loop() {
  for(i=0;i<=5;i++) {
    val = 0.7*val+0.3*analogRead(potPin);
    vol = val*2.5/4095;
    r2 = vol*1000000/2.5;
    Serial.print("AnalogRead = ");
    Serial.println(analogRead(potPin));
    Serial.print("sensorValue = ");
    Serial.println(val);
    Serial.print("sensorVoltage = ");
    Serial.println(vol);
    Serial.print("R2 = ");
    Serial.println(r2/1000);
    delay(500);
  }
}
