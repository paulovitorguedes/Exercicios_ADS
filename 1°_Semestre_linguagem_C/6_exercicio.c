//6-Desenvolver um programa que leia uma sequência de letras (a... z) terminada em ponto (.) e que mostre quantas vezes cada vogal (a, e, i, o, u) apareceu na lista.

#include<stdio.h>
#include<stdlib.h>

void main(){
    int a=0, e=0, i=0, o=0, u=0;
    char ch;

    printf("Entre com uma sequência de caracteres.\nPara finalizar digite PONTO ('.').\nO Sistema irá retornar a soma de cada vogal digitada.\n");
 
    do{
        printf("\nLetra: ");
        scanf(" %c",&ch);

        switch (ch){
            case 'a':
                a++;
            break;
            case 'e':
                e++;
            break;
            case 'i':
                i++;
            break;
            case 'o':
                o++;
            break;
            case 'u':
                u++;
            break;
        }
    } while (ch!='.');
    
    printf("\n\n\nResultado da soma das vogais:");
    printf("\nQuantidade de lertras A: %d digitadas", a);
    printf("\nQuantidade de lertras E: %d digitadas", e);
    printf("\nQuantidade de lertras I: %d digitadas", i);
    printf("\nQuantidade de lertras O: %d digitadas", o);
    printf("\nQuantidade de lertras U: %d digitadas", u);
}