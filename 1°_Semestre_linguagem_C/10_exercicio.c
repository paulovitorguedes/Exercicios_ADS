//10-Desenvolva um programa que leia o salário bruto de 15 funcionários de uma empresa, calcule e exiba o salário líquido de cada funcionário. 
//Lembre-se que o salário líquido é calculado abatendo o imposto do salário bruto, com base nesta tabela de imposto. 
//Ao final, mostre o total de salários brutos, salários líquidos e impostos de todos os funcionários.
//Tabela de Imposto:
//salário min.  |  Salário max.  |  Imposto
//R$0.00        |R$999,99        |10%
//R$1.000,00    |R$1.999,99      |15%
//R$2.000,00    |R$9.999,99      |20%
//R$10.000,00   |R$99.999,99     |25%
//R$100.000,00  |R$...           |30%

#include<stdio.h>
#include<stdlib.h>

void main(){
    float salarios[15][3],bruto, imposto, liquido;
    int lin, col;

    printf("Entre com o valor do sálario bruto de 15 funcioários.\nO Sistema irá o calcular imposto conforme tabela.\n\n");
    for ( lin = 0; lin < 15; lin++){
        printf("\nEntre com o salário bruto do funcinário %d: R$",lin+1);
        scanf("%f",&bruto);
        salarios[lin][0] = bruto;

        if (bruto<=999.99){
            imposto = bruto * 0.10;
            salarios[lin][1] = imposto;

        } else if(bruto<=1999.99) {
            imposto = bruto * 0.15;
            salarios[lin][1] = imposto;

        } else if (bruto<=9999.99){
            imposto = bruto * 0.20;
            salarios[lin][1] = imposto;

        } else if (bruto<=99999.99){
            imposto = bruto * 0.25;
            salarios[lin][1] = imposto;

        } else {
            imposto = bruto * 0.30;
            salarios[lin][1] = imposto;
        } 

        liquido = bruto - imposto;
        salarios[lin][2] = liquido;
    }

    printf("\n\n\n\n####  Apresento resultado  #####\n");
    for (lin = 0; lin < 15; lin++){
        printf("\n\nFuncionário %d:\n",lin+1);
        printf("Bruto: R$%.2f, Imposto: R$%.2f, Liquido: R$%.2f",salarios[lin][0],salarios[lin][1],salarios[lin][2]);
    }
}