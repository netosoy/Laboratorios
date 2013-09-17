#include"triangulo.hh"

MiTriangulo::MiTriangulo(void) : MiFigura("triangulo"){
  cout<<"Ejecutando el constructor de MiTriangulo\n"<<endl;
}
bool MiTriangulo::area(void){
  cout<<"El área de un "<<nombre<<" se calcula como b*h^2"<<endl;
  return true;
}
bool MiTriangulo::perimetro(void){
  cout<<"El perimetro de un "<<nombre<<" se calcula como l+l+l"<<endl;
  return true;
}
bool MiTriangulo::girarHorizontal(int grados){
  cout<<"girando el "<<nombre<<" en sentido horizontal en "<<grados<<" grados"<<endl;
  return true;
}
bool MiTriangulo::girarVertical(int grados){
  cout<<"girando el "<<nombre<<" en sentido vertical en "<<grados<<" grados"<<endl;
  return true;
}

