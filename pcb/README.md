### PCB Jardim

Controlador modular para 8x [LEDs RGB de potência (3W)](https://www.adafruit.com/product/2530).  
Método de controle: [shiftPWM](https://github.com/elcojacobs/ShiftPWM) (PWM + shift register).  
Comunicação entre as placas: protocolo RS485.  
Criado com [Eagle PCB Design V7.6.0](https://cadsoft.io/) + [SparkFun Eagle Libraries](https://github.com/sparkfun/SparkFun-Eagle-Libraries).  

##### LEDs
- Led D2: indicador alimentação do circuito (5V)
- Led D5: indicador alimentação LEDs (12V)
- Led D3: LED de uso geral

##### Conectores
- Power In: alimentação do circuito (12V)
- Power LED: alimentação LEDs (12V) 24W
- C485: comunicação RS485
- USB to Serial: upload de firmware
- Power Select: jumper seletor de alimentação (Power In / USB)
- Mode Select: jumper seletor de modo (master=vcc/slave=gnd)
