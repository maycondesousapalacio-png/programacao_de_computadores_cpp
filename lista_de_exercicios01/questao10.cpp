/*10. Escreva um programa que solicite ao usu�rio o nome de uma verdura e uma fruta de sua
preferencia e ao final apresente na tela as informa��es digitadas pelo usu�rio da seguinte
forma: "Voce gosta de AAAAAAA e BBBBBBB"*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char verdura[20], fruta[20];
    
    printf("Informe o nome de uma verdura: ");
    scanf("%s", &verdura);
    printf("Informe o nome de uma fruta: ");
    scanf("%s", &fruta);

    printf("Voc� gosta de %s e %s", verdura, fruta);
    
    return 0;
}
