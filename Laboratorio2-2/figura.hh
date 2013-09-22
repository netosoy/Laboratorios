#include <string>
#include <iostream>
#ifndef CLASE_FIGURA    //evita la redefinición de clases
#define CLASE_FIGURA
using namespace std;

//declaración de prototipos

class MiFigura{
protected:
  string nombre;
public:
  MiFigura(string miNombre);
  virtual ~MiFigura(void);
  bool dibujar(void);
  bool mover(void);
  bool borrar(void);
  virtual bool area(void){
    //cout<<"Esto calculará el área de la figura"<<endl;
    return true;
  }
  virtual bool perimetro(void){//queda determinado por el método de la subclase
    //cout<<"Esto calculará el perímetro de la figura"<<endl;
    return true;
  }
  virtual bool girarHorizontal(int){
    return true;
  }
  virtual bool girarVertical(int){
    return true;
  }
};
#endif
