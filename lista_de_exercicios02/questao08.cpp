/*8. Elabore um algoritmo que leia um n�mero, e se ele for maior do que 20, imprimir a metade
desse n�mero, caso contr�rio, imprimir o dobro do n�mero*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num;
    
    printf("Informe um n�mero: ");
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
