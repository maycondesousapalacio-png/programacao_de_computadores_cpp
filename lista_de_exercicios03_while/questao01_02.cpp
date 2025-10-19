/*1. Elabore um algoritmo que imprima na tela lado a lado o texto "Hello World!" 10 vezes.
2. Elabore um algoritmo que imprima na tela o texto "Hello World!" 10 vezes, um por linha.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    
    i=0;
    while(i<10){
        printf("Hello World\n");
        i++;
    }
}
