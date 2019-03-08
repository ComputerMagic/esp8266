#include <ESP8266WiFi.h>

 
const char* ssid     = "royal-kosmo";
const char* password = "0978558521";
const char* host = "smart-home.in.ua";

char[] property;
char[] value;

byte t = 0;


void setup() {

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
 
  while (WiFi.status() != WL_CONNECTED && t != 20)
  {
    delay(500);
    t++;
  }
}

void loop()
{ 
  WiFiClient client;
  GETprint("test", "1");
}


void GETprint(property, value){
  char[] print = property + "=" + value;
  if (client.connect(host, 80))
    {
    client.print( "GET /get.php?");
    client.print(print);
    client.println( " HTTP/1.1");
    client.print( "Host:" );
    client.println(host);
    client.println( "Connection: close" );
    client.println();
    client.println();
  }
  else Serial.println("ERROR client print");
}