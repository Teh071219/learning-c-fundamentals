#include <stdio.h>
int main () {

    int n;
    int i=1;
    int produto=1;

    printf("---Calculadora de numero fatorial---");
    printf("\n"); 
    fflush;
    printf("Indique um numero:\n");
    scanf("%d",&n);
    
    while(i<=n){
     
     produto*=i;
     
     printf("Fatorial de (%d), eh: %d\n", i, produto);
     i++;           
}
    printf("A soma total do fatorial de %d eh: %d", n,produto);
}