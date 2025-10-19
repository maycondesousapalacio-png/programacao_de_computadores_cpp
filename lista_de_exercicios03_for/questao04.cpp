/*4. Elabore um algoritmo que imprima 100 vezes o texto "1- Hello World!" com o número.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    
    for(i=1; i<=100; i++){
        printf("%d- Hello World\n", i);
    }
}
