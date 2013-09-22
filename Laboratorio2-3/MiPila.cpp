#include"MiPila.hh"

MiPila::MiPila(void){
  cout<<"Ejecutando constructor de pila"<<endl;
  this->primer_elemento=NULL;
}
MiPila::~MiPila(void){
  cout<<"Ejecutando el destructor de pila"<<endl;
}
bool MiPila::push(int data){
  //cout<<"Ejecutando el método push"<<endl;
  T_celda *ptr_aux = primer_elemento;
  primer_elemento = new T_celda;
  primer_elemento->dato = data;
  primer_elemento->proximo = ptr_aux;  
  return true;
}
int MiPila::pull(void){
  int data;
  T_celda *ptr_aux=primer_elemento;
  primer_elemento=ptr_aux->proximo;
  data=ptr_aux->dato;
  delete(ptr_aux);
  return data;
}
