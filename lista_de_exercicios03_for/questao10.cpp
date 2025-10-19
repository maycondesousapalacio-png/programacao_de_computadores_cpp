/*10. Elabore um algoritmo que solicite ao usuário uma palavra e um número inteiro que
indicará a quantidade de vezes que a palavra digitada será impressa na tela, um em cada
linha.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, rep;
    char palavra[20];
    
    printf("Informe a palavra que será repetida: ");
    scanf("%s", &palavra);
    printf("Informe quantas vezes ela será repetida: ");
    scanf("%d", &rep);
    
    for(i=0;i<rep;i++){
        printf("%s\n", palavra);
    }
}
