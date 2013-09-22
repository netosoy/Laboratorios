#include"MiPila.hh"

int main(void){
  //int tmp;
  MiPila mi_pila;
  cout<<"apilando datos del 100 al 110"<<endl;
  for(int i=100; i<110; i++){
    mi_pila.push(i);
  }
  cout<<"\nDesapilando los datos: \n"<<endl;
  for(int i=0; i<10; i++){
    cout<<i<<".) "<<mi_pila.pull()<<endl;
  }
}
