// Le code à compiler sur Arduino s'écrit en C/C++ mais je recommande de juste copier coller le code parce que l'extension proposée par l'IDE Arduino, c'est ".ino"


  // On définit la position des LED par rapport aux PINs de la carte
const int LED_Green = 3; // LED verte
const int LED_Blue = 5; // LED Bleue
const int LED_Red = 6; // LED rouge

  // On définit les 3 PINs comme sorties
void setup()
{
  pinMode(LED_Green, OUTPUT);
  pinMode(LED_Blue, OUTPUT);
  pinMode(LED_Red, OUTPUT);
}


  // On détermine dans la boucle la valeur des 3 PINs pour avoir une couleur précise
void loop()
{
  digitalWrite(LED_Green, 0);
  digitalWrite(LED_Blue, 255);
  digitalWrite(LED_Red, 0);
}
