/*10. Elabore um algoritmo que solicite ao usuário uma palavra e um número inteiro que
indicará a quantidade de vezes que a palavra digitada será impressa na tela, um em cada
linha.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, rep;
    char palavra[100];
    
    printf("Informe a palavra que você quer imprimir: ");
    scanf(" %[^\n]", &palavra);
    printf("Informe quantas vezes você quer imprimir o texto: ");
    scanf("%d", &rep);
    
    i=0;
    do{
        printf("%s\n", palavra);
       i++;
    } while(i<rep);
}
