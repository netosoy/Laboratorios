#include"circulo.hh"

MiCirculo::MiCirculo(void) : MiFigura("circulo"){//llama al constructor de MiFigura
  cout<<"Ejecutando el Constructor de MiCirculo \n"<<endl;
}
bool MiCirculo::area(void){
  cout<<"el area de un "<<nombre<<" se calcula como pi*r^2"<<endl;
  return true;
}
bool MiCirculo::perimetro(void){
  cout<<"el perímetro de un "<<nombre<<" se calcula como 2*pi*r"<<endl;
  return true;
}

