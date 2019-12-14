
const int pin1 = 5;
const int pin2 = 6;
const int pin3 = 9;

int state1 = 0;
int state2 = 0;
int state3 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(pin1, INPUT);
  pinMode(pin2, INPUT);
  pinMode(pin3, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  state1 = digitalRead(pin1);
  state2 = digitalRead(pin2);
  state3 = digitalRead(pin3);
  Serial.print(state1); 
  Serial.print(" "); 
  
  Serial.print(state2); 
  Serial.print(" "); 
  
  Serial.print(state3); 
  Serial.println(); 
  delay(50);
}
