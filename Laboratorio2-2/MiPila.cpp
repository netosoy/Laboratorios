#include<string>
#include<iostream>
usingnamespace std;
#ifndef CLASEPILA
#define CLASEPILA

//la directiva struct se usaba en C para crear nuevos tipos.
typedef struct S_celda{
  int dato;
  S_celda *proximo;
} T_celda;

class MiPila{
private:
T_celda *primer_elemento
public:
  C_pila(void);
  ~C_pila(void);
  bool push(int);
  int pull(void);
};
#endif
