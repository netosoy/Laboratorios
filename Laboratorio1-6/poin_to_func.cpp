#include<iostream>
using namespace std;
#define SIZE 25

int square(int mi_numero){
  return(mi_numero*mi_numero);
};

int cube(int mi_numero){
  return(mi_numero*mi_numero*mi_numero);
};

int power(int mi_numero, int (*calc_power)(int)){//recibe un puntero a una función
  return(calc_power(mi_numero));
};

int main(void){
  //Prueba de puntero a funciones
  cout<<"\nSe calcula el cuadrado como: "<<square(SIZE)<<endl;
  cout<<"\nSe calcula el cubo como: "<<cube(SIZE)<<endl;
  cout<<"\n\nSe pasa un función como parámetro\n";
  cout<<"\nSe pasa la función square "<<power(SIZE,square)<<endl;
  cout<<"\nSe pasa la función cube "<<power(SIZE,cube)<<endl;
}
