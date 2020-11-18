#include"func_difference_of_squares.h"
int cuadrado_suma(int numero){
    int respuesta =0;
    int suma= 0;
    for (int i=0; i <= numero;i++){
        suma += i;
    }
    respuesta = suma * suma;
    return respuesta;
}