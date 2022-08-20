#include<stdio.h>
#include<stdlib.h>

int main(){
    int num=0, peso=0;
    int cont;
    for(cont=1;cont<=15;cont++){
    	printf("Entre com 15 números e o sistema selecionará o maior digitado");
        printf("\n%d)Digite um número: ", cont);
        scanf("%d",&num);
        peso=(num>peso?num:peso);
    }
    printf("\n\nO maior numero digitado foi: %d",peso);
}
