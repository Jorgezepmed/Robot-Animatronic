//RECEPTOR
/*
JDZ
*Test #1 del RECEPTOR para un nRF24L01
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

int LED = 7; //Pin digital 7 para el LED

void setup()
{
  radio.begin(); //Iniciamos la comunicacion RF
  radio.openReadingPipe(1,canal); //Se abre el canal para lectura
  radio.startListening(); //Comienza a escuchar por el canal abierto para lectura
  pinMode(LED, OUTPUT); //Pin digital 7 como salida
  digitalWrite(LED, LOW); //inicialmente el LED esta apagado
}

void loop()
{
while(radio.available()) //Siempre que haya informacion disponinle del RF
{
  radio.read(estado_pulsador, sizeof(estado_pulsador));  //Se recibe el valor de la variable estado_pulsador[0] atraves de RF
}

}
