#include <ESP8266WiFi.h>
#include "AkServer.h"

#define WIFI_SSID "盘尼西林"
#define WIFI_PWD "19910524"

String SERVER_HOST = "http://192.168.1.10:80";
String TOKEN = "af3bda13d5f04ebaaaf47c467239d639";

AkServer akServer(SERVER_HOST, WiFi.macAddress(), TOKEN);

void setup()
{
    Serial.begin(115200);
    WiFi.begin(WIFI_SSID, WIFI_PWD);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
    }
    while (!akServer.registerMcu())
    {
        delay(500);
    }
}

void loop()
{
    akServer.putData("12345678");
    delay(3000);
}
