const byte LED = 7;
int val;

void setup() {
  Serial.begin(9600);
  Serial.println("Hello, World!");
}

void loop() {
  if(Serial.available()) {
    val = Serial.read();
    if(val == '1') {
      digitalWrite(LED,HIGH);
      Serial.println("Input Number:1");
      Serial.println("LED ON");
    }
    else if (val == '0') {
      digitalWrite(LED,LOW);
      Serial.println("Input Number:0");
      Serial.println("LED OFF"); 
    }
  }
}
