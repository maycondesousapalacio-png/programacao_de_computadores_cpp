/*10. O sistema de avalia��o de determinada disciplina � composto por tr�s provas. A primeira
prova tem peso 2, a segunda tem peso 3 e a terceira tem peso 5. Considerando que a
m�dia para aprova��o � 6.0, fa�a um algoritmo para calcular a m�dia final de um aluno
desta disciplina e dizer se o aluno foi aprovado ou n�o*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3, media;
    
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    media= ((nota1*2)+(nota2*3)+(nota3*5))/10;
    
    if(media>=6){
        printf("O aluno foi APROVADO");
    } else if(media<6){
        printf("O aluno foi REPROVADO");
    }
    
    return 0;
}
