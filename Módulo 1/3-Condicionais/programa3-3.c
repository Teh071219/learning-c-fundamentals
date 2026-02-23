#include <stdio.h>
int main () {

    int ano, mes;

    printf("Digite um ano: ");
    scanf("%d", &ano);
    printf("Digite um mes (em numero): ");
    scanf("%d", &mes);
 
    if(mes==2){
    if(ano%4==0 && ano!=100 || ano%400==0){
    printf("Fevereiro tem 29 dias, pois eh ano bissexto\n");
    }
    else
    printf("Fevreiro tem 28 dias \n");}
    else if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) {
    printf(" Este mes tem 31 dias\n");
    }
    else
    printf(" Este mes tem 30 dias \n");
}