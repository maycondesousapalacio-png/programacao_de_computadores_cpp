/*3. Elabore um algoritmo que imprima todos os números inteiros de 1 até 100 inclusive.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    
    i=1;
    while(i<=100){
        printf("%d\n", i);
        i++;
    }
}
