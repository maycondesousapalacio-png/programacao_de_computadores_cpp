/*5. Elabore um algoritmo que imprima todos os números decrescentes de 100 até 0 inclusive.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    
    i=100;
    do{
       printf("%d\n", i); 
       i--;
    } while(i>=0);
}
