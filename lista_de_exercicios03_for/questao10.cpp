/*10. Elabore um algoritmo que solicite ao usu�rio uma palavra e um n�mero inteiro que
indicar� a quantidade de vezes que a palavra digitada ser� impressa na tela, um em cada
linha.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, rep;
    char palavra[20];
    
    printf("Informe a palavra que ser� repetida: ");
    scanf("%s", &palavra);
    printf("Informe quantas vezes ela ser� repetida: ");
    scanf("%d", &rep);
    
    for(i=0;i<rep;i++){
        printf("%s\n", palavra);
    }
}
