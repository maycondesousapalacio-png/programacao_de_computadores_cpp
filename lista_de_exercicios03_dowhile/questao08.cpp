/*8. Elabore um algoritmo que imprima a soma dos 100 primeiros números inteiros positivos.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, soma=0;
    
    i=0;
    do{
        soma+=i;
       i++;
    } while(i<=100);
    
    printf("%d", soma);
}
