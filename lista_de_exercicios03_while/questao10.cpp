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
    
    
    printf("Informe qual palavra voc� quer imprimir: ");
    scanf(" %[^\n]", &palavra);
    printf("Informe quantas vezes voc� que o texto imprimido: ");
    scanf("%d", &rep);
    
    i=0;
    while(i<rep){
        printf("%s\n", palavra);
        i++;
    }
}
