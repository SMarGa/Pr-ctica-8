
#include "func_primes.h"

bool IsPrime (int numero) {
    bool respuesta = true;
    if (numero == 0 || numero == 1){
        respuesta = false;
    }else{
        for (int i=2; i< numero; i++){
            if (numero % i == 0){
                respuesta = false;
            break;
            }
        }
    }
    return respuesta;
}
