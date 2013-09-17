#include"figura.hh"

class MiCirculo : public MiFigura{// esto es herencia! 
public:                           //miembros públicos
  MiCirculo(void);
  bool area(void);
  bool perimetro(void);
};


