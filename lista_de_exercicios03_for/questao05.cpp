/*5. Elabore um algoritmo que imprima todos os n�meros decrescentes de 100 at� 0 inclusive.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    
    for(i=100; i>-1; i--){
        printf("%d\n", i);
    }
}
