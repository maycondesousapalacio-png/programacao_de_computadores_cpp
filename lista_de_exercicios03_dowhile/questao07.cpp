/*7. Elabore um algoritmo que imprima todos os n�meros �mpares de 1000 at� 0.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    
    i=1000;
    do{
        if(i%2==1){
            printf("%d\n", i);
        }
        
       i--;
    } while(i>=0);
}
