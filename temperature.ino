#include<DHT.h>
#define DHTPIN 4
#define DHTTYPE DHT11
float temp;

DHT dht(DHTPIN, DHTTYPE);
void setup() {
   Serial.begin(9600);
   dht.begin();
}



void loop() {
   temp = dht.readTemperature();
   Serial.print("temp: ");
   Serial.print(temp);
   // read analog volt from sensor and save to variable temp
  // temp = temp * 0.48828125;
   //temp = (temp*1000-500)/10;
   // convert the analog volt to its temperature equivalent
   //Serial.print("TEMPERATURE = ");
  // Serial.print(temp); // display temperature value
   Serial.print("*C");
   Serial.println();
   delay(1000); // update sensor reading each one second
}
