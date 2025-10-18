/*15. Refazer o programa 14 realizando as quatro operações aritméticas básicas*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, soma, subtracao, multiplicacao, divisao, resto;
    
    printf("Informe um número inteiro: ");
    scanf("%f", &num1);
    printf("Informe outro número inteiro: ");
    scanf("%f", &num2);
    soma = num1+num2;
    subtracao = num1-num2;
    multiplicacao = num1*num2;
    divisao = num1/num2;
    
    printf("A soma dos números %.0f e %.0f corresponde a %.0f\n", num1, num2, soma);
    printf("A subtração do número %.0f por %.0f corresponde a %.0f\n", num1, num2, subtracao);
    printf("A multiplicação dos números %.0f e %.0f corresponde a %.0f\n", num1, num2, multiplicacao);
    printf("A divisão do número %.0f por %.0f corresponde a %.0f\n", num1, num2, divisao);
    
    
    return 0;
}
