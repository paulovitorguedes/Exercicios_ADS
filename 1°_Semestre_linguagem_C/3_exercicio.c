//3-Desenvolva um programa que solicite a quantidad de alunos e quantidade de notas para cada aluno.
//Calcule e mostre a média aritmética e a situação de aprovação de cada um deles. 
//Lembre-se que apenas a média igual ou acima de 7 aprova o aluno.

#include<stdio.h>
#include<stdlib.h>

void main(){
    float media;
    int qtd_alunos, qtd_notas;
    
    printf("Quantas notas por aluno? ");
    scanf("%d",&qtd_notas);
    printf("\ntQuantidade total de alunos? ");
    scanf("%d",&qtd_alunos);
    
    float notas[qtd_alunos][qtd_notas+1];
    int cont_aluno, cont_nota;
    
    //Preenchimento das notas em uma matriz com alunos por linha e notas por coluna
    //Adicionando uma nova coluna na matriz com as médias por aluno.
    
    //for Preenchimento das notas *****************************************
    for(cont_aluno=0;cont_aluno<qtd_alunos;cont_aluno++){
        printf("\n\n");
        for(cont_nota=0;cont_nota<qtd_notas;cont_nota++){
            printf("\nNotas aluno %d: ",cont_aluno+1);
            scanf("%f",&notas[cont_aluno][cont_nota]);
            media+=notas[cont_aluno][cont_nota];
        }
        media/=cont_nota;
        notas[cont_aluno][qtd_notas]=media;
    }//fim for Preenchimento das notas -------------------------------------
    
    //Faz a leitura da Matriz apresentando o resultado por aluno
    printf("\n\n\n##### RESULTADOS #####\n");
    
    //for escaneamennto da Matriz e apresentando resultado *****************
    for(cont_aluno=0;cont_aluno<qtd_alunos;cont_aluno++){
        printf("\n\nRESULTADO DO ALUNO %d: ", cont_aluno+1);
        printf("\nNOTAS: ");
        for(cont_nota=0;cont_nota<qtd_notas;cont_nota++){
            printf("%.1f  ",notas[cont_aluno][cont_nota]);
        }
        media=notas[cont_aluno][qtd_notas];
        printf("\nMEDIA: %.1f",media);
        if(media>=7.0){
            printf("\nSITUAÇÃO: APROVADO");
        }else {
            printf("\nSITUAÇÃO: REPROVADO");
        }
        
    }// fim for escaneamennto da Matriz e apresentando resultado-------------
}