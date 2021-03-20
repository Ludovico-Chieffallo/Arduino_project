/*Qui vediamo la funzione analogWrite
cos'è un PWM? in arduino 1 sono i pin 3-5-6-9-10-11 e sono segnati con la tilde (~).Sono quei Pin capaci di emettere un segnale particolare detto PWM(pulse-width modulation) capace ad esempio di accendere un led per metà
il Led non si può accendere per metà in realtà, ma solo acceso e spento e questa funzione ci aiuta accendendo e spegnendo il led talmente tante volte che il nostro occhio fa una media di tutte le pulsazioni restituendoci un effetto di intensità minore
per questa funzione non abbiamo bisogno di spacificare nulla nella sezione setup 
nella versione loop invece richiamiamo la funzione analogWrite e nella parentesi specifichiamo il punto dove attacheremo l'anodo(+) e il secondo numero è arbitrario da 0 a 255 e definisce l'intensità voluta dove 0 è minor intensità e 255 è il massimo dell'intensità
*/
void setup() {
}

void loop() {
  analogWrite (11, 30);
}
