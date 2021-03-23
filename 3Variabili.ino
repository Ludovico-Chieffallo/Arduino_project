/*le variabili sono fondamentali in arduino, sono come dei cassetti dove conservare le informazioni
in arduino non è possibile creare cassetti generici, ma devono essere specifici, quindi o lettere o numeri o caratteri ecc.
facciamo un esempio
*/
int temperatura=10; //in questo modo abbiamo creato una variabile chiamata temperatura assegnando un valore
void setup() {
}
void loop() {
}

//Possiamo anche creare un "cassetto" vuoto
int temperatura;  //in questo modo non abbiamo assegnagnato un valore
void setup() {
  temperatura=0;  //qui sovrascriviamo un valore e lo definiamo, successivamente nella sezione loop lo sovrascriveremo nuovamente
}
void loop() {
  temperatura=12;  //nella sezione loop adesso abbiamo definito la variabile che però VALE SOLO PER LA SEZIONE LOOP
}                 
//OGNI VARIABILE VALE NELLA SEZIONE NELLA QUALE VIENE DEFINITA, se la mettiamo prima della sezione setup e loop, stiamo comunicando al programma che la variabile ci interessa per tutto il trascritto, mentre se la inseriamo in una di queste sezioni, definiamo il luogo dove vogliamo che sia presente

//Per incrementare il valore della variabile possiamo fare così
int i =0;
void setup() {
}
void loop() {
  i=i+1;     //si può scrivere anche i++
}

//bisogna fare attenzione allo SCOPE quindi come dicevamo prima alla posizione dove definiamo la variabile

//FACCIAMO UN ESEMPIO
int led=13  //ci servirà per far lampeggiare il pin numero 13
void setup() {
  pinMode(led, OUTPUT9); //qui non abbiamo bisogno di definire dove si trova il led  perchè lo abbiamo già definito prima
}
void loop() {
  digitalWrite(led, HIGH); //Così il led 13 si attiverà e lo riconosce in quella posizione perchè abbiamo definito la variabile prima   
}
