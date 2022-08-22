//9-Faça um programa que leia 10 números inteiros e mostre-os na ordem inversa em que foram lidos

#include<stdio.h>
#include<stdlib.h>

void main(){
    int vet[10]={0,1,2,3,4,5,6,7,8,9}, aux, i;

    printf("Lista Original: \n");
    for ( i = 0; i < 10; i++){
        printf("%d  ",vet[i]);
    }

    //Invertendo a ordem da lista
    for ( i = 0; i < 5; i++){
        aux=vet[9-i];
        vet[9-i]=vet[i];
        vet[i]=aux;
    }

    printf("\n\nLista Invertida: \n");
    for ( i = 0; i < 10; i++){
        printf("%d  ",vet[i]);
    }
    
}