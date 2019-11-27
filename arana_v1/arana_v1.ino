
#include "Pata.h"
#include <Servo.h>

 // (hombro, codo, mano)
Pata izqAdelante, izqAtras, derAdelante, derAtras;

void setup()
{
  Serial.begin(9600);

  derAdelante.init(4, 2, 3);
  derAdelante.posInicial(130, 90, 90);
  derAdelante.setPosesHombro(170, 70); // primero:160,70
  derAdelante.setPosesCodoManoArriba(40, 150);
  derAdelante.setPosesCodoManoAbajo(90, 120);

  izqAtras.init(13, 11, 12);
  izqAtras.posInicial(130, 90, 90);
  izqAtras.setPosesHombro(170, 70); // primero:160,70
  izqAtras.setPosesCodoManoArriba(40, 150);
  izqAtras.setPosesCodoManoAbajo(90, 120);

  //_____________________________________________________

  izqAdelante.init(10, 8, 9);
  izqAdelante.posInicial(60, 90, 90);
  izqAdelante.setPosesHombro(30, 100); // primero:20,100
  izqAdelante.setPosesCodoManoArriba(150, 40);
  izqAdelante.setPosesCodoManoAbajo(90, 90);

  derAtras.init(7, 5, 6);
  derAtras.posInicial(60, 90, 90);
  derAtras.setPosesHombro(30, 100); // primero:20,100
  derAtras.setPosesCodoManoArriba(150, 40);
  derAtras.setPosesCodoManoAbajo(90, 90);

  delay(3000);

  Serial.println("pasando por setup");

}

void loop()
{


  //CAMINANDO

  izqAtras.pasoContraDireccion();
  izqAdelante.pasoEnSuDireccion();

  derAdelante.avanceDer();
  derAtras.avanceDer();
  izqAdelante.avanceIzq();
  izqAtras.avanceIzq();

  delay(600);

  derAtras.pasoContraDireccion();
  derAdelante.pasoEnSuDireccion();

  derAdelante.avanceDer();
  derAtras.avanceDer();
  izqAdelante.avanceIzq();
  izqAtras.avanceIzq();

  delay(600);
}
