/*8. Elabore um algoritmo que imprima a soma dos 100 primeiros números inteiros positivos.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, soma;
    soma=0;
    
    for(i=1;i<=100;i++){
        soma+=i;
    }
    
    printf("%d", soma);
}
