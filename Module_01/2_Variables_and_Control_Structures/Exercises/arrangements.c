#include <stdio.h>
int main () {

    int n;
    int i=1;
    int i2=1;
    int r;
    int d=0;
    int produto1=1;
    int produto3=1;
    int produtoA=1;
    

    printf("---Calculo dos arranjos de N, R a R:---");
    printf("\n"); 
    fflush;
    printf("Indique um N:\n");
    scanf("%d",&n);
    printf("Indique um R:\n");
    scanf("%d",&r);

     d=(n-r);

 while(i<=n){
     
     produto1*=i;
     i++;
              
}

 while(i2<=d){
       
    produto3*=i2;
    i2++; 
                
}

 produtoA=produto1/produto3;

 printf("O Arranjo de A(%d,%d) eh: %d \n", n,r, produtoA);  

    
}