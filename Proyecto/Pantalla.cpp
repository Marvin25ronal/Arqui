#include "Arduino.h"
#include "Pantalla.h"
#include "pitches.h"
Pantalla::Pantalla(String can,String inte,String art){
	cancion=can;
	integrante=inte;
	artista=art;
  
}
void Pantalla::Graficar(){
  	Leer();
	if(activa==true){
  Serial.println(contador);
		if(contador>=0&&contador<rango1){
			if(contador==0){Serial.println(cancion);}
     contador++;
		}else if(contador>=rango1&&contador<rango2){
			if(contador==rango1){Serial.println(integrante);}
     contador++;
		}else if(contador>=rango2&&contador<rango3){
			if(contador==rango2){Serial.println(artista);}
      contador++;
		}else if(contador==rango3){
			activa=false;
			contador=0;
		}		
	}
}
void Pantalla::Limpiar(){
  //limpiar la pantalla
}

void Pantalla::Leer(){
  int valor=digitalRead(BTNPAN);
  if(valor==HIGH){
  	activa=true;
  }
}

