#include<string>
#include<iostream>
using namespace std;
#ifndef CLASEPILA
#define CLASEPILA

typedef struct S_celda{
  int dato;
  S_celda *proximo;
} T_celda;

class MiPila{
private:
  T_celda *primer elemento;
public:
  C_pila(void);
  ~C_pila(void);
  bool push(int);
    int pull(void);
};
#endif
