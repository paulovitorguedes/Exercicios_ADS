//5-Desenvolva um programa que leia um número N e em seguida, uma lista de N números inteiros. 
//Este programa também deve calcular e mostrar a soma dos números pares e dos números ímpares da lista.

#include<stdio.h>
#include<stdlib.h>

void main(){
    int num, par=0, impar=0, count=0;

    //O usuário define o tamanho da lista
    printf("Quantos números serão calculados? ");
    scanf("%d",&num);
    int lista[num];
    
    //Preenche a lista com os números inteiros
    int i;
    for ( i = 0; i < num; i++){
        printf("\nEntre com um número inteiro na posição %d: ", i+1);
        scanf("%d",&lista[i]);
    }

    //Apresentando a soma dos números PARES
    printf("\n\n\n\n\nApresentando a soma dos números PARES.\n");
    for ( i = 0; i < num; i++){
        if (lista[i]%2==0){
            par+=lista[i];
            if (count!=0){
                printf("+ %d ",lista[i]);
            } else {
                printf("%d ",lista[i]);
            }
            count++;
        }
    }
    printf(" = %d",par);

    //Apresentando a soma dos números IMPARES
    printf("\n\nApresentando a soma dos números IMPARES.\n");
    count=0;
    for ( i = 0; i < num; i++){
        if (lista[i]%2!=0){
            impar+=lista[i];
            if (count!=0){
                printf("+ %d ",lista[i]);
            } else {
                printf("%d ",lista[i]);
            }
            count++;
        }
    }
    printf(" = %d",impar);
}