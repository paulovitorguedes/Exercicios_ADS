//7-Desenvolver um programa que leia cinco números inteiros e positivos e mostre o maior deles.

#include<stdio.h>
#include<stdlib.h>

void main(){
    int num, maior=0;
    int i;

    for ( i = 0; i < 5; i++){
        printf("\nDigite um número inteiro da posição %d: ", i+1);
        scanf("%d",&num);

        maior=num>maior?num:maior;
    }
    printf("\n\nO maior número digitado foi: %d",maior);
}