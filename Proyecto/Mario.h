#ifndef Mario_h
#define Mario_h
// the #include statment and code go here…
#include "Estructura.h"
class Mario
{
  public:
    Mario(); //constructor
    void sonar(Botones * btn1);
    void sing(int s,Botones *btn1);
    void buzz(int targetPin,long frequency,long length);
    void pausa(Botones *btn1);
    void Stop(Botones *btn1);
    int Lectura();
  private:
    Botones _btn;
    bool paus;
    int song;
    
};
#endif
