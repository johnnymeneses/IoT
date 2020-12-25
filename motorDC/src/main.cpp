#include <Arduino.h>

#define botaoA 13
#define botaoB 12


void setup() 
{
  Serial.begin(9600);
  pinMode(botaoA, INPUT_PULLUP);
  pinMode(botaoB,INPUT_PULLUP);
}

void loop() 
{



}


void loop ()
{
    digitalWrite(led,HIGH);                         // Atribui nível lógico alto ao pino do LED, acendendo-o
    delay(500);                                     // Espera 500 milissegundos (meio segundo)
    digitalWrite(led, LOW);                         // Atribui nível lógico baixo ao pino do LED, apagando-o
}


//Função com Retorno
int f()
{
    return 1;
}

//Exemplo de chamada
int x = f();

//Função com Parâmetros
int soma(int a, int b)
{
    return a+b;
}
//Exemplo de chamada
int y = soma(5,5);

// Estruturas de Controle
while( i< 3)
{
    i = i+1;
};

for(i = 0; i < 3; i++) 
{
  //instrução
}

if(i == 2) {
      digitalWrite(led, HIGH); // Atribui nível lógico alto ao pino do LED, acendendo-o
      delay(200);              // Espera 200 milissegundos (um segundo)
      digitalWrite(led, LOW);  // Atribui nível lógico baixo ao pino do LED, apagando-o
      delay(1800);             // Espera 1800 milissegundos (um segundo)
    } else {
      digitalWrite(led, HIGH); // Atribui nível lógico alto ao pino do LED, acendendo-o
      delay(1000);             // Espera 1000 milissegundos (um segundo)
      digitalWrite(led, LOW);  // Atribui nível lógico baixo ao pino do LED, apagando-o
      delay(1000);             // Espera 1000 milissegundos (um segundo)
    }
  }