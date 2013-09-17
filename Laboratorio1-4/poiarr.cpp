#include <iostream>
using namespace std;

void cambiar_arreglo(int mi_arreglo[]){			//producto escalar de un arreglo con 10
  for(int i=0; i<10; i++){
    mi_arreglo[i] *= 10;
  }
}

int main (void){
  int *ptr_arreglo, numero=10, *ptr_num;
  int arreglo[]={9,8,7,6,5,4,3,2,1,0};
  
  //Areglos vs Punteros
  cout<<"\n\n\n El arreglo antes de la func, contiene los datos"<<endl;
  for(int i=0; i<10; i++){
    cout<<i<<"-)"<<arreglo[i]<<endl;
  }
  
  cout<<"\n\n\n El arreglo, después de la func cambiar arreglo, contiene datos"<<endl;
  cambiar_arreglo(arreglo);
  for(int i=0; i<10; i++){
    cout<<i<<"-)"<<arreglo[i]<<endl;
  }
  
  cout<<"\n\n\n El puntero antes de la func cambiar arreglo, apunta a los datos"<<endl;
  //y que tal con un puntero
  ptr_arreglo=arreglo;
  for(int i=0; i<10; i++){
  	cout<<i<<"-)"<<ptr_arreglo[i]<<endl;
  }  
  
  cout<<"\n\n\n El puntero, después de la func cambiar arreglo, apunta a los datos"<<endl;
  //arreglo=ptr_arreglo; //Esto se ocupará más adelante
  cambiar_arreglo(ptr_arreglo);
  for(int i=0; i<10; i++){
    cout<<i<<"-)"<<ptr_arreglo[i]<<endl;
	}
  cout<<"\n\n\n";
}
