/*3. Elabore um algoritmo que solicite ao usu�rio um n�mero real e ao final imprima na tela se o
n�mero informado � maior que dez, se � menor que dez, ou se � igual a dez*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num;
    
    printf("Informe um n�mero: ");
    scanf("%f", &num);
    
    if(num>10){
        printf("O n�mero informado � maior que 10");
    } else if(num<10){
        printf("O n�mero informado � menor que 10");
    } else{
        printf("O n�mero informado � igual a 10");
    }
    return 0;
}
