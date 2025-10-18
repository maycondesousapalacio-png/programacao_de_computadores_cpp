/*8. Elabore um algoritmo que leia um número, e se ele for maior do que 20, imprimir a metade
desse número, caso contrário, imprimir o dobro do número*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num;
    
    printf("Informe um número: ");
    scanf("%f", &num);
    
    if(num>20){
        num/=2;
        printf("%.1f", num);
    } else{
        num*=2;
        printf("%.1f", num);
    }
    return 0;
}
