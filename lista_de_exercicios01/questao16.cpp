/*16. Escreva um programa que solicite o valor fixo do sal�rio de um vendedor, o total vendido
no m�s e o percentual de comiss�o do vendedor. Ao final apresentar o sal�rio bruto.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float valorFixo,totalVendido, percentual, salarioBruto;
    
    printf("Informe o valor do sal�rio fixo: ");
    scanf("%f", &valorFixo);
    printf("Informe o total vendido: ");
    scanf("%f", &totalVendido);
    printf("Informe o percentual da comiss�o (com v�rgula):");
    scanf("%f", &percentual);
    
    salarioBruto = (totalVendido*percentual) + valorFixo;
    
    printf("O sal�rio bruto do funcion�rio �: %.2f", salarioBruto);
    
    return 0;
}
