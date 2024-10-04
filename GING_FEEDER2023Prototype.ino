#define BLYNK_TEMPLATE_ID "TMPL6E8xXcYA6"
#define BLYNK_TEMPLATE_NAME "GUNGGING"
#define BLYNK_AUTH_TOKEN "u6cb3DMP0xfj2XYT4WtWXgPQEIHSURK1"
/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "SAHOUSE2020  2G";
char pass[] = "11012709";
//Servo
#include <Servo.h>
Servo myservo1; 
Servo myservo2; 
Servo myservo3; 

void setup(){
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  
  myservo1.attach(12);
  myservo2.attach(13);
  myservo3.attach(15);
}
void loop(){
  Blynk.run();
if(digitalRead(5)==0){
  myservo1.write(0);
}
if(digitalRead(5)==1){
  myservo1.write(180);
}
if(digitalRead(4)==0){
  myservo2.write(0);
}
if(digitalRead(4)==1){
  myservo2.write(180);
}
if(digitalRead(0)==0){
  myservo3.write(0);
}
if(digitalRead(0)==1){
  myservo3.write(180);
}

}