#include <stdio.h>
int main () {
    int soma=0;
    int i=1;
    

    printf("Qual eh a soma dos quatro primeiros quadrados?\n");

    while(i<=4) {
        soma+=i*i;
        i++;       
    }
    printf("A soma eh %d", soma);

}