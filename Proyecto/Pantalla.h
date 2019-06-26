#ifndef Pantalla_h
#define Pantalla_h
#include <String.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
 class Pantalla
{
  
  public:
    
    Pantalla(String can,String inte,String art); //constructor
    String integrante;
    String cancion;
    String artista;
    void Graficar();
    void Limpiar();
  private:
    int contador=0;
    const int rango1=10;
    const int rango2=20;
    const int rango3=30;
    void Leer();
    bool activa=false;
};
#endif
