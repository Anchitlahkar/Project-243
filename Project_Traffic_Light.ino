#define LED_yellow 26
#define LED_green 27
#define LED_red 14



void setup() {
  // put your setup code here, to run once:
  pinMode(LED_red,OUTPUT);
  pinMode(LED_yellow,OUTPUT);
  pinMode(LED_green,OUTPUT);
}

void loop() {
  // red
  digitalWrite(LED_red,HIGH);
  delay(8000);
  digitalWrite(LED_red,LOW);
  delay(250);
  
  for (int i = 0; i <= 8; i++) {
    digitalWrite(LED_red,HIGH); 
    delay(750);
    digitalWrite(LED_red,LOW); 
    delay(250);
  }


  // yellow
  digitalWrite(LED_yellow,HIGH);
  delay(8000);
  digitalWrite(LED_yellow,LOW);
  delay(250);
  
  for (int i = 0; i <= 8; i++) {
    digitalWrite(LED_yellow,HIGH); 
    delay(750);
    digitalWrite(LED_yellow,LOW); 
    delay(250);
  }


  // green
  digitalWrite(LED_green,HIGH);
  delay(8000);
  digitalWrite(LED_green,LOW);
  delay(250);
  
  for (int i = 0; i <= 8; i++) {
    digitalWrite(LED_green,HIGH); 
    delay(750);
    digitalWrite(LED_green,LOW); 
    delay(250);
  }
}
