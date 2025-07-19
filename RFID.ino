#include <Servo.h>
Servo myservo;
String card = "";
unsigned int i = 0;
#define buzzer 11
#define SERVO_PIN 3
#define ACCESS_DELAY 2000
#define DENIED_DELAY 1000
void setup() {
  Serial.begin(9600);
  myservo.attach(SERVO_PIN);
  myservo.write( 70 );
  delay(7500);
  myservo.write( 0 );
  Serial.println("Put your card to the reader...");
  Serial.println();
  pinMode(buzzer,OUTPUT);
}

void loop() {
  card = "";
  i = 0;
  while (i < 12)
  {
    if (Serial.available() > 0)
    {
      char a = Serial.read();
      card = card + a;
      i++;
    }
  }
  Serial.println(card);
  if ((card == "2C00FF125496") ||(card=="2C00FCDF222E"))
  {
   
    Serial.println("Authorized access");
    Serial.println();
    myservo.write( 70 );
     digitalWrite(buzzer, HIGH);
    delay(100);
     digitalWrite(buzzer, LOW);
    delay(7500);
    myservo.write( 0 );
    
  }
  else
  { Serial.println(" Access denied");
  digitalWrite(buzzer, HIGH);
    delay(300);
     digitalWrite(buzzer, LOW);
   
  }
  delay(500);
}
