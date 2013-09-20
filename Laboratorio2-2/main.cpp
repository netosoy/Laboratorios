#include"triangulo.hh"
#include"circulo.hh"
#include"cuadrado.hh"

int main(){
  MiCirculo mi_circulo;
  MiTriangulo mi_triangulo;
  MiCuadrado mi_cuadrado;
  MiFigura *mi_figura = &mi_triangulo;

  
  cout<<"primero llamamos a los métodos de la función del circulo\n"<<endl;
  mi_circulo.mover();
  mi_circulo.borrar();
  mi_circulo.perimetro();
  mi_circulo.area();
  
  cout<<"\nsegundo llamamos a los métodos de la funcion del triangulo\n"<<endl;
  mi_triangulo.perimetro();
  mi_triangulo.area();
  mi_triangulo.girarHorizontal(30);
  mi_triangulo.girarVertical(45);
  
  cout<<"\ntercero llamamos a los métodos de la función del cuadrado\n"<<endl;
  mi_cuadrado.mover();
  mi_cuadrado.borrar();
  mi_cuadrado.perimetro();
  mi_cuadrado.area();
    
  cout<<"\nfinalmente a los métodos del puntero mi_figura del triangulo\n"<<endl;
  mi_figura->perimetro();
  mi_figura->area();
  mi_figura->girarHorizontal(40);
  mi_figura->girarVertical(90);

  return 0;
}
