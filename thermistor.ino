

#include <DHT.h>

DHT dht(3, DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
  // put your setup code here, to run once:

}

void loop() {

  float h = dht.readHumidity();
  float t_c = dht.readTemperature();
  float t_f = dht.readTemperature(true);
  float t_k = t_c + 273.15;

  Serial.println("Humidity = " + String(h) + "%" );
  Serial.println("Temperature = " + String(t_c)  + "\xc2\xb0 C");
  Serial.println("Temperature = " + String(t_f)  + "\xc2\xb0 F");
  Serial.println("Temperature = " + String(t_k)  + "K\n");

  delay(1000);
 
}
