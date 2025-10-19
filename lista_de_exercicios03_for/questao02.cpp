/*2. Elabore um algoritmo que imprima na tela o texto "Hello World!" 10 vezes, um por linha.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    
    for(i=0; i<10; i++){
        printf("Hello world !\n");
    }
}
