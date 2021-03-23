//Vediamo come possiamo usare la porta seriale passando i dati da arduino al computer
void setup() {
  Serial.begin(9600); //così andremo a definire òa velocità tra arduino e il computer
}

void loop() {
  Serial.println("ciao");
 delay(500);
}
//UNA VOLTA CARICATO LO SKETCH, SI VA SUL SERIAL MONITOR (IN ALTO A DESTRA) E AVREMO IL RISULTATO SUL COMPUTER

//Serial.println funziona anche on le variabili

int x=0;          //Definiamo la variabile
void setup() {
  Serial.begin(9600); 
}

void loop() {
  x++;            //Spieghiamo che x=x+1 in loop
  Serial.print("x vale: ");
  Serial.println(x);     //Qual è la differenza tra Serial.print() e Serial.println()? Serial.println() avanza alla riga successiva, quindi va a capo mentre Serial.print() non aggiunge nulla
  delay(500);
}

//RICORDIAMO DI VERIFICARE I RISULTATI SUL MONITOR SERIALE IN ALTO A DESTRA

