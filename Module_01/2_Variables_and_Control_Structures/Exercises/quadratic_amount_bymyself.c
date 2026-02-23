#include <stdio.h>
int main () {

int numero=1;
int digito=0;
int soma_quadrados=0;

printf("---Calculo da soma do quadrado dos digitos de um numero---\n");
printf("\n");
printf("Digite um numero de ate 4 digitos:\n");
scanf("%d", &numero);



while(digito=numero%10){

    while(numero>0){

    soma_quadrados+=digito*digito;    

    printf("Numero %d, o digito %d a soma = %d \n", numero, digito, soma_quadrados);

    numero=numero/10;
    digito=numero%10;
    soma_quadrados+=digito*digito;   

    printf("Numero %d, o digito %d a soma = %d \n", numero, digito, soma_quadrados);
    numero=numero/10;
    digito=numero%10;
    soma_quadrados+=digito*digito;   

}
}


}