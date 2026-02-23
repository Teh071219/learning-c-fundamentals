#include <stdio.h>
int main () {

int horas;
int minutos;
int segundos;
int soma=0;

printf("---Calculadora do numero de segundos desde o inicio do dia---\n");
printf("\n");
printf("Indique um numero de horas:\n");
scanf("%d", &horas);
printf("Indique um numero de minutos:\n");
scanf("%d", &minutos);
printf("Indique um numero de segundos:\n");
scanf("%d", &segundos);

horas=horas*3600;
minutos=minutos*60;
segundos=segundos*1;
soma=horas+minutos+segundos;

printf("O numero de segundos desde o inicio do dia eh: %d segundos.\n", soma);

}