#define VERDE 9
#define VERMELHO 10
#define BOTAO 13
// DEFINE AS PORTAS LED E BORÃO

int tempo = 0;
int bp = 0;
int contador = 0;  
// variavei do botão, tempo e contador de vezes
  
void setup () {
  
  pinMode(VERDE, OUTPUT);
  pinMode(VERMELHO, OUTPUT);
  pinMode(BOTAO, INPUT);
  Serial.begin(9600);
  // define que botão vai receber um input, ou seja vai ser apertado
}

void loop ()
{
  tempo = millis();
  bp = digitalRead(BOTAO);
  if(bp == HIGH) {
  	contador ++;
    Serial.print(contador);
  	delay(30);
  }
  if(bp == LOW) {
    digitalWrite(VERDE, LOW);
    digitalWrite(VERMELHO, HIGH);
  
  }

  if((contador >= 20) || (tempo >= 40000)){
    digitalWrite(VERDE, HIGH);
    digitalWrite(VERMELHO, LOW);
    delay(20000);
    tempo = 0;
    contador = 0;
  }    
}    