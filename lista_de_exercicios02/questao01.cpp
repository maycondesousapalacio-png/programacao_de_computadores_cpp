/*1. Elabore um programa que solicite ao usu�rio um n�mero real e ao final imprima na tela se o
n�mero informado � maior que 10 (dez)*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num;
    
    printf("Informe um n�mero: ");
    scanf("%f", &num);
    
    if(num>10){
        printf("O n�mero informado � maior que 10");
    } 
    return 0;
}
