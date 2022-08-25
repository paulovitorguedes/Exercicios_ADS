//11-Desenvolva um programa que leia a nota de 20 alunos da turma e mostre as que são iguais ou superiores à média da turma

#include<stdio.h>
#include<stdlib.h>

void main(){
    float notas[20], media=0.0;

    printf("Entre com as notas de 20 alunos, o sistema irá calcular a média da turma e retornará as notas iguais ou superiores a média\n\n");

    int i;
    for ( i = 0; i < 20; i++){
        printf("\nEntre com a nota %d:",i+1);
        scanf("%f",&notas[i]);

        media+=notas[i];
    }

    //Valor da média é a soma de todas as notas dividido por 20.
    media/=20; 
    printf("\n\n\nO valor da média é: %.2f", media);
    for ( i = 0; i < 20; i++){

        if (notas[i]>media){
            printf("\nValor da nota: %.2f, situação acima da média", notas[i]);

        } else if (notas[i]<media){
            printf("\nValor da nota: %.2f, situação abaixo da média", notas[i]);

        } else {
            printf("\nValor da nota: %.2f, situação igual a média", notas[i]);
        }   
    }
}