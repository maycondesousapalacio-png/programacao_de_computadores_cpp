/*9. Elabore um algoritmo que solicite ao usu�rio um n�mero inteiro que indicar� a quantidade
de vezes que o texto "Hello World!" ser� impresso na tela, um em cada linha.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, rep;
    
    printf("Informe quantas vezes voc� que o texto imprimido: ");
    scanf("%d", &rep);
    
    i=0;
    while(i<rep){
        printf("Hello World\n");
        i++;
    }
}
