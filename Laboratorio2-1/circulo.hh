#include"figura.hh"

class MiCirculo : public MiFigura{// esto es herencia! 
public:                           //miembros públicos
  MiCirculo(void);
  bool area(void);                //métodos pripios de la subclase
  bool perimetro(void);
};


