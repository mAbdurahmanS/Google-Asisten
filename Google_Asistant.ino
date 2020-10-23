#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "pFJ00bugBupd1ldDUjMbpCEwFM-tixyf";
char ssid[] = "lol";
char pass[] = "123456789";
void setup()
{
Serial.begin(9600);
Blynk.begin(auth, ssid, pass);

}
void loop()
{
Blynk.run();
}
