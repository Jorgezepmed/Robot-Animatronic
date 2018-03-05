//MOVIEMIENTOS DE SERVOS
/*
JDZ
*Test #1 de los moviemientos de los servos para el movimiento de ojos, boca y cejas
*/

#include <Servo.h>

Servo ojoX;   //Llamamos como "ojoX" al servo que hace el movimiento en X del ojo
Servo ojoY;   //Llamamos como "ojoY" al servo que hace el movimiento en Y del ojo
Servo boca;   //Lamamos como "boca" al servo que hace movimiento de la boca
Servo ceja_izq;  //Llamamos como "ceja_izq" al servo que hace el moviemiento de la ceja izquerda (viendolo tu de frente)
Servo ceja_der;  //Llamamos como "ceja_der" al servo que hace el moviemiento de la ceja derecha (viendolo tu de frente)

int horX =0;      //creamos una variable donde guardarmeos los valores del joystick para el movimento horizontal (ojoX)
int verY =1;      //creamos una variable donde guardarmeos los valores del joystick para el movimento horizontal (ojoY)
int horPos = 90;
int verPos 0 90;
int bot1


void setup()
{
  Serial.begin(9600);
  Serial.printIn("Servo test"); //test


}
