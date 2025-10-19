/*7. Elabore um algoritmo que imprima todos os números ímpares de 1000 até 0.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    
    for(i=999; i>=0; i-=2){
        printf("%d\n", i);
    }
}
