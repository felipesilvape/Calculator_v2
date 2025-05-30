#include <stdio.h>   
#include <stdlib.h>  
#include <math.h>
#include "calculadora.h"

int main(void) {
    apresentacao();
    char novo_calculo = 'S';

    while(novo_calculo == 'S' || novo_calculo == 's') {
        menu();
        printf("Deseja realizar um novo calculo? (S- sim / N- nao)\n");
        scanf(" %c", &novo_calculo);
    }

    printf("Espero ter ajudado.\n");
    printf("Finalizando...     \n");
    return 0;
}