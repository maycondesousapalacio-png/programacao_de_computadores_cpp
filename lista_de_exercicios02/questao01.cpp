/*1. Elabore um programa que solicite ao usuário um número real e ao final imprima na tela se o
número informado é maior que 10 (dez)*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num;
    
    printf("Informe um número: ");
    scanf("%f", &num);
    
    if(num>10){
        printf("O número informado é maior que 10");
    } 
    return 0;
}
