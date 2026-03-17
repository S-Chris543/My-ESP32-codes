// Código para obtener la MAC de una ESP32
#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  
  delay(1000);

  while(!Serial){
    delay(10);
  }
  // Inicializa WiFi en modo estación (necesario para ESP-NOW)
  WiFi.mode(WIFI_STA);

  // Obtiene la MAC
  String mac = WiFi.macAddress();

  Serial.print("Direccion MAC: ");
  Serial.println(mac);
}

void loop() {

}
