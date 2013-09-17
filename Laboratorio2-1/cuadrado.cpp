#include"cuadrado.hh"
MiCuadrado::MiCuadrado(void) : MiFigura("cuadrado"){
  //se llama al constructor de MiFigura
  cout<<"Ejecutando el constructor de MiCirculo\n\n"<<endl;
}
bool MiCuadrado::area(void){
  cout<<"el area de un "<<nombre<<" se calcula como l^2"<<endl;
  return true;
}
bool MiCuadrado::perimetro(){
  cout<<"el perimetro de un "<<nombre<<" se calcula como 4*l"<<endl;
  return true;
}
