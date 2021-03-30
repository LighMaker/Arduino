
//ICI ON DÉCLARE SES VARIABLES GLOBALES ET ON INDIQUE LE NOM DES LIBRAIRIES QUE L'ON VA UTILISER
int led=8;   //Je déclare la variable led comme un ENTIER et je lui donne la valeur de 8
int Duree;   // Je déclare la variable Duree comme un ENTIER et je lui donne la valeur de 1000

// LA PARTIE SETUP NE S'EFFECTUE QU'UNE SEULE FOIS
void setup() {  
  pinMode(led, OUTPUT);// initialize le pin 8 comme étant une variable de sortie (Donc comme un pin qui va transmettre une information)
  pinMode(A5, INPUT);
}

// LA PARTIE LOOP S'EFFECTUE INDEFINIMENT
void loop() {
  Duree = analogRead(A5);
  Duree = map(analogRead(A5), 0, 1023, 10, 1000);
  digitalWrite(led, HIGH);   // Ordonne de mettre à la valeur haute (1) le potentiel du pin 8, donc allume la led
  delay(Duree);               // Ordonne d'attendre 1000 milliseconde (soit une seconde)
  digitalWrite(led, LOW);    // Ordonne de mettre à la valeur basse (0) le potentiel du pin 8, donc éteint la led
  delay(Duree);               // Ordonne d'attendre 1000 milliseconde (soit une seconde) 
}
