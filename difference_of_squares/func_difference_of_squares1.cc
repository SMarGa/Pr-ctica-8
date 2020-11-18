#include"func_difference_of_squares.h"
int suma_de_cuadrados(int numero){
    int suma=0;
    int respuesta=0;
    for (int i = 0; i <=numero; i++){
        suma= i*i;
        respuesta += suma;
    }
    return respuesta;
}