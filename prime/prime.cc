#include<iostream>
#include "func_primes.h"
#include<string>
int main ( int argc, char* argv[]) {
  

  if(argc > 2 && std::stoi(argv[1])>=0 ){
      std::cerr << "Uso:"<<argv[0]<< " Solo un número entero positivo" << std::endl;
      return 1;
  }else {
  int n_numero_primo = 0;
  int respuesta;
  for(int i= 0; std::stoi(argv[1])!=n_numero_primo; i++){
    if(IsPrime(i)== true){
        respuesta = i;
        n_numero_primo++;
    }
  }
  std::cout << respuesta << std::endl;
  return 0;
  }
}
