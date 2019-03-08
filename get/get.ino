#include <ESP8266WiFi.h>

 
const char* ssid     = "royal-kosmo";
const char* password = "0978558521";
const char* host = "smart-home.in.ua";

char[] property;
char[] value;
void setup() {

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
 
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
  }
}

void loop()
{ 
  WiFiClient client;
 

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