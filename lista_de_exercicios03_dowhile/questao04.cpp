/*4. Elabore um algoritmo que imprima 100 vezes o texto "1- Hello World!" com o número.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    
    i=1;
    do{
       printf("%d - Hello World\n", i); 
       i++;
    } while(i<=100);
}
