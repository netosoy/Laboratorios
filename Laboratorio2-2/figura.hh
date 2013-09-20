#include <string>
#include <iostream>
#ifndef CLASE_FIGURA    //evita la redefinición de clases
#define CLASE_FIGURA
using namespace std;

//declaración de prototipos

class MiFigura{               //prototipo clase MiFigura
protected:
  string nombre;              //único miembro, el nombre
public:
  MiFigura(string miNombre);  //prototipo método constructor
  virtual ~MiFigura(void);    //prototipo método destructor
  bool dibujar(void);         //prototipos demás métodos:
  bool mover(void);           //
  bool borrar(void);          //
  virtual bool area(void){    //queda determinado por el método de la subclase
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
