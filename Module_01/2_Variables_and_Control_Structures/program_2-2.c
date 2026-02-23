#include <stdio.h>
int main () {

    // vou declarar as variáveis e já a trobuir um valor //
    int x=3;
    int y=7;

    // agora vou fazer a inversão dos valores das variáveis //
    x=x+y;
    y=x-y;
    x=x-y;

    // vamos imprimir o resultado das variáveis trocadas //
    printf("O valor de X = %d e o valor de Y = %d", x,y);

}