//Definição do uso dos pinos do Arduino
#define pinRele 4    //am


//Configuração do projeto no Arduino
void setup() {
  //INICIA COMUNICACAO SERIAL
  Serial.begin(9600);

  //Configura o estado das portas do Arduino
  pinMode(pinRele, OUTPUT);
}

void loop() {

  //Teste do Relé
  digitalWrite(pinRele, HIGH);
  Serial.println("Estado do Rele: LIGADO");
  delay(1000);

  digitalWrite(pinRele, LOW);
  Serial.println("Estado do Rele: DESLIGADO");  
  delay(1000);
}