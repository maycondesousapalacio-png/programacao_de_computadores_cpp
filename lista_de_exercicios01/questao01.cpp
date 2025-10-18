/*1. Escreva um programa em linguagem C que apresente na tela a frase: "Hello World!!!"*/


#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Hello world");
    return 0;
}
