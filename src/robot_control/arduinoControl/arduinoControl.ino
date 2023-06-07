#include <string.h>

// Velocidades
float velLineal;
float velAngular;

// Motor A
int enA = 9;
int in1 = 8;
int in2 = 7;

// Motor B
int enB = 4;
int in3 = 6;
int in4 = 5;

int ruta;

void setup()          
{
  Serial.begin(9600);
  // Terminales de salida en el Arduino
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

bool contador = false;

void loop()
{
    if (Serial.available()) {
    delay(10);
    // Read input from serial
    String data = Serial.readString();
    int ruta = data.toInt();}
  if (contador == false)
  {
   
    if (ruta == 1)
    {
      // Avanzar ruta predeterminada
      avanceRuta2();
    }
    else if (ruta == 2)
    {
      // Avanzar ruta 2 (agrega el código necesario)
      avanceRuta2();
    }
    else if (ruta == 3)
    {
      // Avanzar ruta 3 (agrega el código necesario)
      avanceRuta3();
    }
    else if (ruta == 21)
    {
      avanceRutaManip1();
    }
    else if (ruta == 22)
    {
      avanceRutaManip2();
    }
  }
  
  contador = true;

  while (contador==true )
  {

  }
}

void avanceRutaPredeterminada()
{
  adelante(35);
  delay(1000);
  izquierda(35);
  delay(1300);
  adelante(35);
  delay(1000);
  derecha(35);
  delay(1300);
  adelante(35);
  delay(2000);
  quieto();
  delay(3000);
}

void avanceRuta12()
{
  adelante(35);
  delay(1000);
  izquierda(35);
  delay(1600);
  adelante(35);
  delay(1500);
  derecha(35);
  delay(1000);
  adelante(35);
  delay(800);
  Superderecha(35);
  delay(1150);
  adelante(35);
  delay(200);
  quieto();
  delay(5000);
  Superderecha(35);
  delay(200);
  adelante(35);
  Superderecha(35);
  delay(700);
  derecha(35);
  delay(200);
  quieto();
  delay(3000);

}

void avanceRuta13()
{
  adelante(35);
  delay(1000);
  izquierda(35);
  delay(1600);
  adelante(35);
  delay(1500);
  derecha(35);
  delay(1000);
  adelante(35);
  delay(800);
  Superderecha(35);
  delay(1200);
  adelante(35);
  delay(200);
  quieto();
  delay(5000);
  Superderecha(35);
  delay(200);
  adelante(35);
  Superderecha(35);
  delay(600);
  derecha(35);
  delay(1000);
  adelante(35);
  delay(1000);
  Superderecha(35);
  delay(1500);
  quieto();
  delay(3000);

}
void rutaprueba()
{
Superderecha(35);
delay(4000);
atras(35);
delay(4000);
quieto();
delay(3000);

}
void avanceRuta2()
{
  adelante(35);
  delay(600);
  izquierda(35);
  delay(1600);
  adelante(35);
  delay(1500);
  derecha(35);
  delay(500);
  adelante(35);
  delay(1300);
  Superderecha(35);
  delay(100);
  quieto();
  delay(3000);
}

void avanceRuta3()
{
  adelante(35);
  delay(1200);
  izquierda(35);
  delay(1600);
  adelante(35);
  delay(800);
  derecha(35);
  delay(500);
  adelante(35);
  delay(800);
  Superizquierda(35);
  delay(1200);
  quieto();
  delay(3000);
}

void avanceRutaManip1()
{
  quieto();
  delay(500);
  adelante(35);
  delay(1500);
  izquierda(35);
  delay(1500);
  adelante(35);
  delay(1200);
  izquierda(35);
  delay(1500);
  adelante(35);
  delay(1000);
  quieto();
  delay(3000);
}

void avanceRutaManip2()
{
  quieto();
  delay(500);
  adelante(35);
  delay(1500);
  izquierda(35);
  delay(1500);
  adelante(35);
  delay(2100);
  derecha(35);
  delay(1500);
  adelante(35);
  delay(500);
  quieto();
  delay(3000);
}

void adelante(float velocidadLineal)
{
  // Calcular la velocidad respecto al máximo (35cm/s)
  int activacion = int(abs(255 * (velocidadLineal / 35)));

  // Velocidad del Motor A y B
  analogWrite(enA, activacion*0.95);
  analogWrite(enB, activacion );//izquierda

  // Motor A gira adelante
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  // Motor B gira adelante
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void atras(float velocidadLineal)
{
  // Calcular la velocidad respecto al máximo (35cm/s)
  int activacion = int(abs(255 * (velocidadLineal / 35)));

  // Velocidad del Motor A y B
  analogWrite(enA, activacion);
  analogWrite(enB, activacion*0.97);

  // Motor A gira atrás
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  // Motor B gira atrás
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void izquierda(float velocidadAngular)
{
  // Calcular la velocidad respecto al máximo (50deg/s)
  int activacion = int(abs(255 * (velocidadAngular / 50)));

  // Velocidad del Motor A y B
  analogWrite(enA, activacion);
  analogWrite(enB, 0);

  // Motor A gira adelante
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  // Motor B queda estático
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void derecha(float velocidadAngular)
{
  // Calcular la velocidad respecto al máximo (50deg/s)
  int activacion = int(abs(255 * (velocidadAngular / 50)));

  // Velocidad del Motor A y B
  analogWrite(enA, 0);
  analogWrite(enB, activacion);

  // Motor A queda estático
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);

  // Motor B gira adelante
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void Superderecha(float velocidadAngular)
{
  // Calcular la velocidad respecto al máximo (50deg/s)
  int activacion = int(abs(255 * (velocidadAngular / 50)));

  // Velocidad del Motor A y B
  analogWrite(enA, activacion);
  analogWrite(enB, activacion);

  // Motor A queda estático
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  // Motor B gira adelante
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void Superizquierda(float velocidadAngular)
{
  // Calcular la velocidad respecto al máximo (50deg/s)
  int activacion = int(abs(255 * (velocidadAngular / 50)));

  // Velocidad del Motor A y B
  analogWrite(enA, activacion);
  analogWrite(enB, activacion);

  // Motor A queda estático
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  // Motor B gira adelante
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void quieto()
{
  // Velocidad del Motor A y B
  analogWrite(enA, 0);
  analogWrite(enB, 0);

  // Motor A gira adelante
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);

  // Motor B queda estático
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}