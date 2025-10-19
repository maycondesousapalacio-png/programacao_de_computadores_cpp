/*5. Elabore um algoritmo que imprima todos os números decrescentes de 100 até 0 inclusive.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    
    for(i=100; i>-1; i--){
        printf("%d\n", i);
    }
}
