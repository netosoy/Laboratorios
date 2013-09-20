#include"circulo.hh"

int main(void){
  MiCirculo mi_circulo;
  MiFigura *mi_figura = &mi_circulo;
  cout<<"*********Aqui se maneja todo como un puntero base**********"<<endl;
  mi_figura->mover();
  mi_figura->borrar();
  mi_figura->perimetro();
  mi_figura->area();

  cout<<"~~~~~~~~~Aqui se maneja directamente el objeto~~~~~~~~~"<<endl;
  mi_circulo.mover();
  mi_circulo.borrar();
  mi_circulo.perimetro();
  mi_circulo.area();
  

  return 0;
}
