#include"figura.hh"

class MiTriangulo : public MiFigura{
public:
  MiTriangulo(void);
  bool area(void);
  bool perimetro(void);
  bool girarHorizontal(int);
  bool girarVertical(int);
};
