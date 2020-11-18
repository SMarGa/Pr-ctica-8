#include<iostream>
#include"func_difference_of_squares.h"


int main ( int argc, char* argv[]) {
    
  if(argc > 2 && std::stoi(argv[1])> 0 ){
      std::cerr << "Uso:"<<argv[0]<< " Solo un número natural" << std::endl;
      return 1;
  }else {
    int numero= std::stoi(argv[1]);
    std::cout <<"Cuadrado de la suma: "<< cuadrado_suma(numero) << std::endl;
    std::cout <<"Suma de cuadrados: " <<suma_de_cuadrados(numero) << std::endl;
    std::cout <<"Diferencia entre el cuadrado de la suma y la suma de cuadrados: " <<
    cuadrado_suma(numero)-suma_de_cuadrados(numero) << std::endl;
    return 0;
  }
}