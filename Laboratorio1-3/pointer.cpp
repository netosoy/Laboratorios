#include <iostream>
using namespace std;

void square(int n){
  n=n*n;
  cout<<"Segun la funcion void square(int n) el valor de numero es: "<< n <<endl;
}
void square(int *ptr_n){
  *ptr_n=*ptr_n * *ptr_n;
  cout<<"Segun la funcion void square(int *ptr_n) el valor apuntado por ptr_n es: "<< *ptr_n <<endl;
}
	
int main(void){
  int numero = 10, *ptr_num;
  ptr_num=&numero ;//se asgna la direción de número al puntero ptr_n

  //Funny printings
  cout<<"el valor asignado al la variable número es: "<<numero<<endl;
  cout<<"\nla dirección de memoria donde se almacena la varaible número: "<<&numero<<endl;
  cout<<"\nla dirección a la que apunta el puntero ptr_num es: "<<ptr_num<<endl;

  //paso de parámetros por valor
  cout<<"El valor de la variable número antes de la funcion void square(int) es:"<< numero <<endl;
  square(numero);
  cout<<"El valor de la varaible número despues de la funcion void square(int) es:"<< numero <<endl;

  //Paso de parámetros por referencia
  cout<< "\n El valor de la variable número antes de la funcion void square(&int) es:"<< numero<<endl;
  square(&numero);
  cout<< "El valor de la variable número despues de la funcion void square(&int) es : " <<numero<<endl;

  // Se puede manejar con punteros
  cout <<"\n El valor de la variable número antes de la funcion void square(ptr) es : " <<*ptr_num <<endl;
  square(ptr_num) ;
  cout <<" El valor de la variable número despues de la funcion void square(ptr) es : " <<*ptr_num <<endl;;
  }


