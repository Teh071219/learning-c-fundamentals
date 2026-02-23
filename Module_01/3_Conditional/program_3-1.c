#include <stdio.h>
int main () {

    int numero;
     
    printf(" Digite um numero: ");
    scanf("%d", &numero);
    if(numero%2==0) {
        printf("Este numero eh par");
    }
    else
    printf("Este numero eh impar");

}