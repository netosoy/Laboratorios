#include"figura.hh"
MiFigura::MiFigura(string miNombre){       //Declaracion Constructor
  this->nombre = miNombre;                 //equivalente a self de python
  cout<<"Ejecutando el Constructor de MiFigura\n"<<endl;
}
MiFigura::~MiFigura(void){                 
  cout<<"\nEl destructor de "<<nombre<<" dice adios"<<endl;
}
bool MiFigura::dibujar(){
  cout<<"dibujando "<<nombre<<endl;
  return true;
}
bool MiFigura::mover(){
  cout<<"moviendo "<<nombre<<endl;
  return true;
}
bool MiFigura::borrar(){
  cout<<"borrando "<<nombre<<endl;
  return true;
}
