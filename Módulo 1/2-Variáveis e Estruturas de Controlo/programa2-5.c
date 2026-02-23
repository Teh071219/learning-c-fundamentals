#include <stdio.h>
int main () {

// vou introduzir as variáveis mas deixar o user decidir os valores //

char c;
int x;
double d;

// vou imprimir no ecrã os pedidos de inserção de dados pelo user //
printf("Insira um caracter: ");
scanf("%c", &c);
printf("Insira um numero inteiro: ");
scanf("%d", &x);
printf("Insira um numero real: ");
scanf("%g", &d);

// aqui imprimimos os resultados para o user //
printf("Valores introduzidos pelo user:\n");
printf("Caracter = %c \n", c);
printf("Numero Inteiro = %d \n" , x);
printf("Numero real = %g \n", d);

}