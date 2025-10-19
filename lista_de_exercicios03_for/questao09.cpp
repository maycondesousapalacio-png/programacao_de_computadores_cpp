/*9. Elabore um algoritmo que solicite ao usuário um número inteiro que indicará a quantidade
de vezes que o texto "Hello World!" será impresso na tela, um em cada linha.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, rep;
    
    printf("Informe um número inteiro: ");
    scanf("%d", &rep);
    
    for(i=0;i<rep;i++){
        printf("Hello World !\n");
    }
}
