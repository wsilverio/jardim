/*
  PROJETO: LUZ, CIENCIA E EMOCAO
  EXPERIMENTO: JARDIM
  UNIVERSIDADE FEDERAL DO PARANA
  DEPARTAMENTO DE ENGENHARIA ELETRICA
*/

#include <SPI.h>

#define MASTER  HIGH
#define SLAVE   LOW

// modo de operacao
#define MODE  MASTER

// pinos
#define LED_PIN   3
#define MODE_PIN  12
#define SS_PIN    10
#define SCK_PIN   13
#define MOSI_PIN  11

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(MODE_PIN, INPUT_PULLUP);
  pinMode(SS_PIN, OUTPUT);
  pinMode(SCK_PIN, OUTPUT);
  pinMode(MOSI_PIN, OUTPUT);
  
  Serial.begin(9600);
  SPI.begin();
}

void loop() {

}

