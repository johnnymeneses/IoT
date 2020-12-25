// v0.1 - Rodas configuradas via Push Button para frente e para trás
// v0.2 - Carro anda pra frente, anda pra trás e para
// v0.3 - Carro faz curva, anda de ré e para. 
// v0.4 - Instalação do Sensor. Reconnhece o obstáculo e para
// v0.5 - Andar pra frente, pra tras e quando reconhecer o obstáculo: volta
// v1.0 - Primeira versão do carro
// v1.1 - Instalação do Sensor de Luz e leitura
// v1.2 - Instalação barra de LED para farol
// v2.0 - Segunda versão do carro


#include <Arduino.h>


//Motor1
//Motor2

#define IN1 9
#define IN2 8

#define IN3 6
#define IN4 5


void setupMotores()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void sentidoFrente()
{
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
}

void sentidoVolta()
{
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
}

sentidoFreio()
{
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);

}

void setup() 
{
  setupMotores();
}


void loop()
{
  sentidoFrente();
  delay(1500);
  sentidoVolta();
  delay(1000);
  sentidoFrente();
  delay(1000);
  sentidoFreio();
  delay(10000);


}