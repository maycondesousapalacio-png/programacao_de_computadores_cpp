/*14. Escreva um programa em linguagem C que solicite ao usuário a média para aprovação
em um curso e em seguida solicite ao usuário o nome, sexo e as 03 notas do aluno e ao
final imprima a frase: "O aluno XXXXX foi aprovado com media YY" considerando o gênero
do(a) aluno(a) e se foi aprovado(a) ou reprovado(a)*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[40], sexo;
    float nota1, nota2, nota3, media, notaFinal;
    
    printf("Informe a média para aprovação: ");
    scanf("%f", &media);
    getchar();
    printf("Informe o nome do(a) aluno(a): ");
    fgets(nome, sizeof(nome), stdin);
    printf("Informe o sexo do(a) aluno(a) Masculino/Feminino: ");
    scanf("%c", &sexo);
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    
    notaFinal=(nota1+nota2+nota3)/3;
    
    if(sexo=='m' or sexo=='M'){
        if(notaFinal>=media){
            printf("O aluno está APROVADO");
        } else{
            printf("O aluno está REPROVADO");
        }
    } else if(sexo=='f' or sexo=='F'){
        if(notaFinal>=media){
            printf("A aluna está APROVADA");
        } else{
            printf("A aluna está REPROVADA");
        }
    } else {
        printf("O formulário não foi preenchido corretamente");
    }
    
    
    return 0;
}
