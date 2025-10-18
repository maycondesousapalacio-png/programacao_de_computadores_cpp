/*16. Escreva um programa que solicite o valor fixo do salário de um vendedor, o total vendido
no mês e o percentual de comissão do vendedor. Ao final apresentar o salário bruto.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float valorFixo,totalVendido, percentual, salarioBruto;
    
    printf("Informe o valor do salário fixo: ");
    scanf("%f", &valorFixo);
    printf("Informe o total vendido: ");
    scanf("%f", &totalVendido);
    printf("Informe o percentual da comissão (com vírgula):");
    scanf("%f", &percentual);
    
    salarioBruto = (totalVendido*percentual) + valorFixo;
    
    printf("O salário bruto do funcionário é: %.2f", salarioBruto);
    
    return 0;
}
