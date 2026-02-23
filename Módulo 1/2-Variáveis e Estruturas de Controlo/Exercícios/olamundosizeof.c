#include <stdio.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "pt_PT");

int soma=0;

printf("Olá, Mundo!\n");

printf("sizeof(char): %d\n", sizeof(char));
printf("sizeof(short): %d \n", sizeof(short));
printf("sizeof(int): %d\n", sizeof(int));
printf("sizeof(long: %d \n", sizeof(long));
printf("sizeof(long long): %d \n", sizeof(long long));
printf("sizeof(float): %d\n", sizeof(float));
printf("sizeof(double): %d\n", sizeof(double));
printf("sizeof(long double): %d\n", sizeof(long double));

printf("A soma dos bytes de todos os tipos de dados é = %d\n", soma=((sizeof(char)+sizeof(short)+sizeof(int)+sizeof(long)+sizeof(long long)+sizeof(float)+sizeof(double)+sizeof(long double))));

}