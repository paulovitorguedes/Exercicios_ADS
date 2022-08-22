//8-Desenvolva um programa que leia uma sequência de números, podendo terminar com o número 0 ou 9. 
//Para cada número lido (diferente de 0 ou 9), mostre seu sucessor caso o número seja par, ou seu antecessor se o número for ímpar.

#include<stdio.h>
#include<stdlib.h>

void main(){
    int num;

    printf("Entre com uma sequência de números.\nPara finalizar digite 9 ou 0.\nO Sistema irá retornar o sucessor dos números pares e antecessor dos númrod impares.\n\n");
    do{
        printf("\n\nEntre com um número: ");
        scanf("%d",&num);
        if (num%2==0){
            printf("\nO número digitado é par e ser sucessor é: %d", num+1);
        } else {
            printf("\nO número digitado é Impar e ser antecessor é: %d", num-1);
        }
        
    } while (num!=9&&num!=0);
    printf("\n\n\nSistema Finalizado !!!!!");
}
