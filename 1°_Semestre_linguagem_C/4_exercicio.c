//4-desenvolva um programa que leia, inicialmente, a porcentagem de reajuste dos salários dos funcionários de uma empresa. 
//Na sequência, deve ler o salário de cada um dos 10 funcionários, calcular e mostrar o novo salário reajustado, aplicando a porcentagem de ajuste sobre os respectivos salários atuais. 
//Ao final, o maior salário reajustado da empresa deve ser apresentado na tela.

#include<stdlib.h>
#include<stdio.h>

void main(){
    float percent, maior;
    float vet_salarios[10], vet_ajustados[10];

    printf("Entre com o percenual para o ajuste dos salários: ");
    scanf("%f",&percent);
    printf("\nO sistema irá calcular o reajuste de %.2f porcento em 50 salarios selecioados!\n\n",percent);

    //cria-se 2 vetores:
    //vet_salarios[] contendo os salários 
    //vet_ajustados[] contendo os salários já ajustados
    int cont=0;
    maior=0.0;
    for(cont=0;cont<10; cont++){
        printf("\nEntre com o salário %d: R$",cont+1);
        scanf("%f",&vet_salarios[cont]);
        vet_ajustados[cont]=vet_salarios[cont]*percent/100+vet_salarios[cont];

        //inicialmente o cont terá valor 0(falso) entao a variável maior receberá o valor vet_ajustados[cont]
        //no proximo loop em diante cont terá o valor verdadeiro
        if (cont){
            maior=vet_ajustados[cont]>maior?vet_ajustados[cont]:maior;
        } else {
            maior=vet_ajustados[cont];
        }
    }


    //Apresentação do resultado no sistema 
    printf("\n\n\n\n\nO maior slário após os ajuste: R$%.2f.",maior);

    for (cont=0;cont<10;cont++){
        printf("\nSalário R$%.2f ajustado para R$%.2f", vet_salarios[cont], vet_ajustados[cont]);
    }
    
}
