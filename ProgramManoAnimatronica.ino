#include <Servo.h>

Servo   ServoPu;
Servo   ServoIn;
Servo   ServoMa;
Servo   ServoAn;
Servo   ServoMe;

int   SensorPu =A4;
int   SensorIn =A3;
int   SensorMa =A2;
int   SensorAn =A1;
int   SensorMe =A0;

void setup(){

  Serial.begin(9600);
  
  pinMode(SensorPu, INPUT);
  pinMode(SensorIn, INPUT);
  pinMode(SensorMa, INPUT);
  pinMode(SensorAn, INPUT);
  pinMode(SensorMe, INPUT);
  
  ServoPu.attach(0);
  ServoIn.attach(1);
  ServoMa.attach(2);
  ServoAn.attach(3);
  ServoMe.attach(4);

}

void loop(){
    
  int   Pulgar  = analogRead(SensorPu);
  Pulgar  = map(Pulgar, 691, 820, 0, 179);
//  Serial.print("Sensor Pulgar: ");
//  Serial.println(analogRead(SensorPu));
//  Serial.print("Angulo Pulgar: ");
//  Serial.println(Pulgar);
//  Serial.println();
  
  int Indice  = analogRead(SensorIn);
  Indice  = map(Indice, 714, 820, -100, 179);
//  Serial.print("Sensor Indice: ");
//  Serial.println(analogRead(SensorIn));
//  Serial.print("Angulo Indice: ");
//  Serial.println(Indice);
//  Serial.println();
  
  int Mayor   = analogRead(SensorMa);
  Mayor  = map(Mayor, 682, 800, -100, 179);
//  Serial.print("Sensor Mayor: ");
//  Serial.println(analogRead(SensorMa));
//  Serial.print("Angulo Mayor: ");
//  Serial.println(Mayor);
//  Serial.println();
  
  int Anular  = analogRead(SensorAn);
  Anular  = map(Anular, 704, 803, -100, 179);
//  Serial.print("Sensor Anular: ");
//  Serial.println(analogRead(SensorAn));
//  Serial.print("Angulo Anular: ");
//  Serial.println(Anular);
//  Serial.println();
  
  int Menique = analogRead(SensorMe);
  Menique  = map(Menique, 709, 810, -100, 179);
//  Serial.print("Sensor Menique: ");
//  Serial.println(analogRead(SensorMe));
//  Serial.print("Angulo Menique: ");
//  Serial.println(Menique);
//  Serial.println();
//  Serial.println();
  
  ServoPu.write(Pulgar);
  ServoIn.write(Indice);
  ServoMa.write(Mayor);
  ServoAn.write(Anular);
  ServoMe.write(Menique);
  
  delay(200);
  
}
