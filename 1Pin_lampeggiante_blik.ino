//In arduino ci sono 2 "sedi", SETUP E LOOP, con la prima parte abbiamo spiegato ad arduino che volevamo selezionare il led in posizione 13 (pinMode(13, OUTPUT)
//Nella seconda parte grazie a digitalWrite spieghiamo ad arduino che deve compiere un'azione su quel pin, con HIGH spieghiamo che deve accendere e con LOW spieghiamo che deve spegnere, mentre con delay definiamo il tempo dell'azione 1000 ms=1 sec acceso e 1 sec spento

void setup() {
  pinMode(13, OUTPUT);  
}                                                 
void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}

//Possiamo collegare anche un led esterno ad Arduino, l'importante è fare attenzione alla posizione di catodo(-)(con linguetta più corta) e anodo(+)(con linguetta più lunga), SI POSIZIONA CON ANODO(+) NELLA POSIZIONE 13 MENTRE IL CATODO(-) IN POSIZIONE GND
