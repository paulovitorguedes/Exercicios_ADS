#include<stdio.h>
#include<stdlib.h>

int main(){
    int num, peso;
    int cont;
    num=peso=0;
    for(cont=1;cont<=15;cont++){
        printf("\n%d)Digite um numero: ", cont);
        scanf("%d",&num);
        peso=(num>peso?num:peso);
    }
    printf("\n\nO maior numero digitado foi: %d",peso);
}