//2-Desenvolva um programa que leia o salário de 10 funcionários de uma empresa
//Calcule e mostre o maior salário e a média salarial da empresa.

#include<stdio.h>
#include<stdlib.h>

void main(){
    float salario, maior, media;
    salario=maior=media=0.0;
    
    int cont, func;
    for(cont=1;cont<=10;cont++){
        printf("\nEntre com o salário do funcionário %d: R$", cont);
        scanf("%f",&salario);
        media+=salario;
        if(salario>maior){
            maior=salario;
            func=cont;
        }
    }
    printf("\n\nMédia salarial da empresa: R$%.2f",media/10);
    printf("\nMaior salário da empresa: R$%.2f, funcionário %d.", maior, func);
}