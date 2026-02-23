#include <stdio.h>
int main () {

    int numero;
    int i=1;
    int soma=0;
   

    printf("----Calcule a soma dos primeiros N inteiros----\n");
    printf("Escolha o N: \n");
    scanf("%d", &numero);

    while(i<=numero){
          
          soma+=i;
          
        printf("Posicao %d, a soma parcial de %d eh: %d\n", i, numero,soma );
        i++;
    } 
    
    printf("A soma total dos %d primeiros numeros eh: %d\n", numero, soma);
    

}
