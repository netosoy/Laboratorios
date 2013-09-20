#include"figura.hh"

class MiCuadrado : public MiFigura{//se hereda de la clase figura
public:
  MiCuadrado(void);
  bool area(void);
  bool perimetro(void);
};
