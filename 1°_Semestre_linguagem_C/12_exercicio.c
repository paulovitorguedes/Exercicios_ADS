//12-Desenvolva um programa que Leia uma sequência de letras, terminada na letra (”z”), e mostre quantas vezes cada vogal (a, e, i, o, u) apareceu. 
//Estrutura de dados: O vetor vai armazenar 5 números inteiros. Cada posição do vetor vai acumular a quantidade de vezes que cada vogal (A, E, I, O, U) apareceu. 
//O índice 0 (zero) corresponde ao total de vogais “A”, o índice 1 corresponde à vogal “E”, e assim sucessivamente, até o índice 4 que vai armazenar a vogal “U”.


#include<stdio.h>
#include<stdlib.h>

void main(){
    char letra;
    int vogais[5]={0,0,0,0,0};

    printf("Entre com uma sêquencia de letras e finalizando o loop com a letra z.\n\n");

    do{
       printf("Entre com uma letra: ");
       scanf(" %c",&letra);

       switch (letra){
            case ('a'):
                vogais[0]++;   
            break;
            case ('e'):
                vogais[1]++;   
            break;
            case ('i'):
                vogais[2]++;   
            break;
            case ('o'):
                vogais[3]++;   
            break;
            case ('u'):
                vogais[4]++;   
            break;
        }

    } while (letra!='z');

    printf("\n\nQuantidade total de letras a digitadas: %d vezes.",vogais[0]);
    printf("\nQuantidade total de letras e digitadas: %d vezes.",vogais[1]);
    printf("\nQuantidade total de letras i digitadas: %d vezes.",vogais[2]);
    printf("\nQuantidade total de letras o digitadas: %d vezes.",vogais[3]);
    printf("\nQuantidade total de letras u digitadas: %d vezes.",vogais[4]);
    
}
