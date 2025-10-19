/*6. Elabore um algoritmo que imprima todos os números pares inteiros de 1 até 1000.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    
    i=0;
    do{
        if(i%2==0){
            printf("%d\n", i);
        }
        
       i++;
    } while(i<=1000);
}
