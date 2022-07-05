//sensore di temperatura e umidità, DHT11, scaricare e includere la libreria DHT e collegare (guardando il sensore dalla parte blu)
//il primo pin a A0
//il secondo pin a 5V
//il terzo a GND

//lanciare il codice e aprire la lente di ingrandimento in alto a destra per vedere l'output 

#include <dht.h>


#define dht_apin A0 // Analog Pin sensor is connected to
 
dht DHT;
 
void setup(){
 
  Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor
 
}//end "setup()"
 
void loop(){
  //Start of Program 
 
    DHT.read11(dht_apin);
    
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
    
    delay(5000);//Wait 5 seconds before accessing sensor again.
 
  //Fastest should be once every two seconds.
 
}// end loop(dsd
