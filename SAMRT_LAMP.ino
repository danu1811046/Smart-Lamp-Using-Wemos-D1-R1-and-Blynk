#define BLYNK_PRINT Serial
#include <BlynkSimpleEsp8266.h>
#include <ESP8266WiFi.h>
char auth[] = "your auth token";
char ssid[] = "your wifi name";
char pass[] = "your wifi password";

const int relay1 = D0;
const int relay2 = D1;
const int relay3 = D3;
const int relay4 = D4;

//BlynkTimer timer;

void setup(){
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass,"blynk-cloud.com", 8080);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
  digitalWrite(relay3, LOW);
  digitalWrite(relay4, LOW);
}

void loop() {
  Blynk.run();
}
