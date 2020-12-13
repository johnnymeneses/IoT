const int PINO_SENSOR = A0; // Pino A0 conectado ao sensor de som

void setup() {
  
  pinMode(PINO_SENSOR, INPUT); // Pino A0 definido como saida
  Serial.begin(9600); // Inicializa a comunicacao serial
  
}

void loop() {

  Serial.println(analogRead(PINO_SENSOR)); // Le as informacoes obtidas do sensor
  delay(50); // Tempo de atualizacao de informacoes
  
}
