/*6. Elabore um algoritmo que imprima todos os n�meros pares inteiros de 1 at� 1000.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    
    for(i=2; i<=1000; i+=2){
        printf("%d\n", i);
    }
}
