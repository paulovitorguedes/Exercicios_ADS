//1-Desenvolva um programa que leia 15 números inteiros e positivos e mostre o maior deles.

#include<stdio.h>
#include<stdlib.h>

void main(){
    int num=0, peso=0;
    int cont;
    printf("Entre com 15 números e o sistema selecionará o maior número digitado\n");
    for(cont=1;cont<=15;cont++){
        printf("\n%d)Digite um número: ", cont);
        scanf("%d",&num);
        peso=(num>peso?num:peso);
    }
    printf("\n\nO maior numero digitado foi: %d",peso);
}
