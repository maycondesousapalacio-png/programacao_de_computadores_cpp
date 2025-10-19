/*3. Elabore um algoritmo que imprima todos os números inteiros de 1 até 100 inclusive.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    
    for(i=1; i<=100; i++){
        printf("%d\n", i);
    }
}
