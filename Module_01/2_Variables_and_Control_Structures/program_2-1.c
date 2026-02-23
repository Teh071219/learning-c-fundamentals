#include <stdio.h>

int main () {

// vou declaras tres variaveis inteiras//
int x=3;            
int y=7;
int aux;

// vou fazer a troca de valores das variáveis//
aux=x;
x=y;
y=aux;

// vou imprimir o valores das variáveis após a operação//
printf(" O valor de X = %d e o valor de Y = %d", x, y);

}