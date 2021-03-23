//il ciclo for serve per ripetere un'operazione un numero finito di volte

void setup() {
}

void loop() {
  for (int i =0; i<10;i++){  //simile alla funzione range in Python, dentro la parentesi ci indica il punto di inizio, il punto di stop e l'incremento definitom 
  }
}

//FACCIAMO L'ESEMPIO CREANDO IL FADE (ACCENDI E SPEGNI LED IN MODO GRADUALE)
void setup() {
}

void loop() {
  for (int i =0; i<255;i++){          //Qui stiamo spiegando ad arduino con il ciclo for che la variabile i deve partire da valore 0, finire a 255 (max valore luminosità led) con un incremento della variabile a +1 (si può scrivere anche i=i+1), in questo modo crescerà gradualmente con un ritardo di queste azioni di 5 ms
    analogWrite(11,i);
    delay(5);
  }
  for (int i =255; i>=0; i=i-1){      // qui facciamo l'operazione inversa, così vedremo accendersi  e spegnersi in maniera graduale
    analogWrite(11,i);
    delay(5);
  }
}
