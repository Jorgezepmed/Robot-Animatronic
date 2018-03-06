
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
int joyX =0;      //Entrada analogica del joystick del movimineto en X
int joyY =1;      //Entrada analogica del joystick del movimineto en Y

//Variables donde se guardan los grados
int horPos = 90;
int verPos = 90;

//Nombres de botones y entradas digtales
 int bot1 = 6;
 int bot2 = 7;
 int bot3 = 8;

//Variables de botones
int bot1_state = 0;
int bot2_state = 0;
int bot3_state = 0;

void setup()
{
  Serial.begin(9600);
  Serial.print("Servo test");

  //Servos
  ojoX.attach(1);
  ojoY.attach(2);
  boca.attach(3);
  ceja_izq.attach(4);
  ceja_der.attach(5);
  pinMode(bot1,INPUT);
  pinMode(bot2,INPUT);
  pinMode(bot3,INPUT);

}

void loop()
{
  //Servos
  horPos = analogRead(joyX);
  verPos = analogRead(joyY);
  horPos = map(horPos, 0,1023,0,180);
  verPos = map(verPos, 0,1023,0,180);
  Serial.print(horPos);
  Serial.print("\t");
  Serial.print(verPos);

  ojoX.write(horPos);
  ojoY.write(verPos);
  delay(50);

  //Botones
  bot1_state = digitalRead(bot1);
  bot2_state = digitalRead(bot2);
  bot3_state = digitalRead(bot3);

//Movimiento de boca

  if(bot1_state == HIGH)
  {
    boca.write(160);
  }
  if (bot1_state == LOW)
  {
    boca.write(90);
  }

//Cejas
if (bot2_state == HIGH)
{
  ceja_der.write(110);
  ceja_izq.write(110);
}
if (bot2_state == LOW)
{
  ceja_der.write(90);
  ceja_izq.write(90);
}

}
