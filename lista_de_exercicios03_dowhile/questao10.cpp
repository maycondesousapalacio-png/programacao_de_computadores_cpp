/*10. Elabore um algoritmo que solicite ao usu�rio uma palavra e um n�mero inteiro que
indicar� a quantidade de vezes que a palavra digitada ser� impressa na tela, um em cada
linha.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, rep;
    char palavra[100];
    
    printf("Informe a palavra que voc� quer imprimir: ");
    scanf(" %[^\n]", &palavra);
    printf("Informe quantas vezes voc� quer imprimir o texto: ");
    scanf("%d", &rep);
    
    i=0;
    do{
        printf("%s\n", palavra);
       i++;
    } while(i<rep);
}
