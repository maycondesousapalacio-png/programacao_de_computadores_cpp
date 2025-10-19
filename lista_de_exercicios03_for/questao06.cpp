/*6. Elabore um algoritmo que imprima todos os números pares inteiros de 1 até 1000.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    
    for(i=2; i<=1000; i+=2){
        printf("%d\n", i);
    }
}
