#include <stdio.h>
int main () {

int K=0;
int A=0;
int B=0;
int soma1=0;
int soma2=0;
A>=1;
B>=1;

printf("Indique um valor para K:\n");
scanf("%d", &K);

printf ("Quantos pares de A,B existem para K, quando A+B<=K?\n");
while(A+B<=K){
    A++;
    B++;
    soma1=A+B;
}
printf ("Quantos pares de A,B existem para K, quando A*B<=K?\n");
while(A*B<=K){
    A++;
    B++;
    soma2=A+B;
}
printf("Quando A+B<=K temos %d pares\n",soma1);
printf("Quando A*B<=K temos %d pares\n",soma2);
printf("A soma total de pares A,B eh: %d\n", soma1+soma2);
}