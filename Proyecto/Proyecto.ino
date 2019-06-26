#include "Estructura.h"
#include "pitches.h"
#include "Mario.h"

Botones btn;
Mario sm;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  btn.boton1=false;
  btn.boton2=false;
  btn.boton3=false;
  btn.boton4=false;
  btn.boton5=false;
  btn.boton6=false;
  btn.pausa=false;
  //botones
  pinMode(melodyPin,OUTPUT);
  pinMode(velocityPin,INPUT);
  pinMode(BTNPAUSA,INPUT);
  pinMode(BTNSTOP,INPUT);
  //interrupciones
  attachInterrupt(digitalPinToInterrupt(BTN1),Actbtn1,HIGH);
  attachInterrupt(digitalPinToInterrupt(BTN2),Actbtn2,HIGH);
  attachInterrupt(digitalPinToInterrupt(BTN3),Actbtn3,HIGH);
  attachInterrupt(digitalPinToInterrupt(BTN4),Actbtn4,HIGH);
  attachInterrupt(digitalPinToInterrupt(BTN5),Actbtn5,HIGH);
  attachInterrupt(digitalPinToInterrupt(BTN6),Actbtn6,HIGH);
}
  
void loop() {
  if(btn.boton1){
    sm.sonar(&btn);
    LimpiarBtn();
  }else if(btn.boton2){
    LimpiarBtn();
  }else if(btn.boton3){
    LimpiarBtn();
  }else if(btn.boton4){    
    LimpiarBtn();
  }else if(btn.boton5){
    LimpiarBtn();
  }else if(btn.boton6){
    LimpiarBtn();
  }
  ///Metodo para leer boton y mostrar la mantalla con el grupo
 

}
void Actbtn1(){
  Serial.println("si es marioggggggg");
  LimpiarBtn();
  btn.boton1=true;
}
void Actbtn2(){
  Serial.println("si ");
  LimpiarBtn();
  btn.boton2=true;
}
void Actbtn3(){
  Serial.println("3 ");
  LimpiarBtn();
  btn.boton3=true;
}
void Actbtn4(){
  Serial.println("4 ");
  LimpiarBtn();
  btn.boton4=true;
}
void Actbtn5(){
  Serial.println("5 ");
  LimpiarBtn();
  btn.boton5=true;
}
void Actbtn6(){
  Serial.println("6 ");
  LimpiarBtn();
  btn.boton6=true;
}

void LimpiarBtn(){
  btn.boton1=false;
  btn.boton2=false;
  btn.boton3=false;
  btn.boton4=false;
  btn.boton5=false;
  btn.boton6=false;
  btn.pausa=false;
}



