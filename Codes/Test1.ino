//MOVIEMIENTOS DE SERVOS
/*
JDZ
*Test #1 de los moviemientos de los servos para el movimiento de ojos, boca y cejas
*/

#include <Servo.h>

//Nombres de Servos
Servo ojoX;   //Llamamos como "ojoX" al servo que hace el movimiento en X del ojo
Servo ojoY;   //Llamamos como "ojoY" al servo que hace el movimiento en Y del ojo
Servo boca;   //Lamamos como "boca" al servo que hace movimiento de la boca
Servo ceja_izq;  //Llamamos como "ceja_izq" al servo que hace el moviemiento de la ceja izquerda (viendolo tu de frente)
Servo ceja_der;  //Llamamos como "ceja_der" al servo que hace el moviemiento de la ceja derecha (viendolo tu de frente)

//Joystick
int horX =0;      
int verY =1;    

int horPos = 90;
int verPos = 90;

//Nombres de botones
const int bot1 = 6;
const int bot2 = 7;
const int bot3 = 8;

//Variables de botones
int bot1_state = 0;
int bot2_state = 0;
int bot3_state = 0;
boolean state;

void setup()
{
  Serial.begin(9600);
  Serial.printIn("Servo test");
  
  //Servos
  ojoX.attach(1);
  ojoY.attach(2);
  boca..attach(3);
  ceja_izq.attach(4);
  ceja_der.attach(5);
  pinMode(bot1,INPUT);
  pinMode(bot2,INPUT);
  pinMode(bot3,INPUT);
 
}

void loop()
{
  //Servos
  horPos = analogRead
  
  //Botones
  bot1_state = digitalRead(bot1);
  bot2_state = digitalRead(bot2);
  bot3_state = digitalRead(bot3);
  
  
}
