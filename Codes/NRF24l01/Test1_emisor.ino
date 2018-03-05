+
//EMISOR
/*
JDZ
*Test #1 del EMISOR para un nRF24L01 
*Objetivo prender y apagar un led con radiofreciuencia
*/

// Incluimos las librerías necesarias
  #include <SPI.h> // Librería para la comunicación SPI

  // Librerías para el funcionamiento del módulo NRF24L01
  #include <nRF24L01.h>
  #include <RF24.h>

  // Declaramos los pines de control del módulo NRF24L01
  #define CE 9
  #define CSN 10

  // Se crea el objeto tipo RF24
  RF24 radio(CE, CSN);

  // Se declara el canal (64 bits en hexadecimal) para transmisión RF
  const uint64_t canal = 0xE8E8F0F0E1LL;

  //Variable que enviamos mediante RF (timpo string siempre)
  unsigned int estado_pulsador[1];

  int pulsador = 7 //Pin digital del pulsador

  //Variables imternas del pulsador

  int encender = 0;
  int anterior = 0;
  int estado = 0;

  void setup()
  {
    pinMode(pulsador, INPUT); //Pin como entrada
    radio.begin(); //Iniciamos la comunicacion RF
    radio.openWritingPipe(canal); //Se abre canal para escirtira
  }

void loop()
{
  estado = digitalRead(pulsador); //Guardamos el estado actual del pulsador

  if(estado && anterior == 0):
  {
    encerder = 1 - encender;
    delay(300); //Evita rebotes del pulsador
  }

  anterior = estado;  //Actualizamos el estado del pulsador

  if(encender) //Si el estado interno pasa de LOW a HIGH
  {
    estado_pulsador[0] = 1;
  }
  else //si el estado interno pasa de HIGH a LOW
  {
    estado_pulsador[0] = 0; //La variable vale 0
  }
    //Se envia el valor de la variable estado_pulsador[0] a traveszde RF
    radio.write(estado_pulsador, sizeof(estado_pulsador));


}
