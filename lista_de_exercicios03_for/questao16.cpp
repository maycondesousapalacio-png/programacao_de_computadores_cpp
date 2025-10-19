    /*16. Escreva um programa que vá solicitando as idades dos alunos da sala até que todos
sejam informados (perguntar ao usuário se deseja informar a idade do próximo aluno). Ao
final apresentar a idade do mais novo, a idade do mais velho, Quantos alunos têm mais de
18 anos, quantos alunos têm até 18 anos, a média aritmética e a mediana.*/
	
	#include <stdio.h>
    #include <locale.h>
    
    int main (){
        setlocale(LC_ALL, "Portuguese");
        float idade, idadeVelho=-1, idadeNovo=1000, i, ate18=0, maior18=0, somaidades=0,qtdalunos=0;
        float media;
        char resposta1;
        
        printf("Esse programa mostra dados a partir das idades informadas dos alunos.\n");
        
        for(i=0;i>-1;i++){
            inicio:
            printf("Informe a idade de um aluno: ");
            scanf("%f", &idade);
            getchar ();
            
            
            // DADOS PARA A MÉDIA DE IDADES
            somaidades+=idade;
            qtdalunos++;
            
            
            
            // A IDADE DO MAIS VELHO
            if(idade>idadeVelho){
                idadeVelho=idade;
            }
            
            // A IDADE DO MAIS NOVO
            if(idade<idadeNovo){
                idadeNovo=idade;
            }
            
            // ALUNOS ATÉ 18 E MAIORES DE 18
            if(idade<18 and idade>=0){
                ate18++;
            } else if(idade>=18){
                maior18++;
            } else{
                printf("Idade inválida, digite essa novamente.");
                goto inicio;
            }
            
            printf("Deseja informar a idade do próximo aluno ? [s/n]\n");
            scanf("%c", &resposta1);
            
            if(resposta1=='n' or resposta1=='N'){
                break;
            } else if(resposta1=='s' or resposta1=='S'){
                
            } else{
                printf("Resposta inválida! \n");
                goto inicio;
            }
            
        }
        
        media= somaidades/qtdalunos;
        
        printf("O aluno mais velho tem %.1f anos\n", idadeVelho);
        printf("O aluno mais novo tem %.1f anos\n", idadeNovo);
        printf("Há %.1f alunos menores de 18 anos\n", ate18);
        printf("Há %.1f alunos maiores de 18 anos\n", maior18);
        printf("A média das idades desta turma é %.1f", media);
        
}
        
        
        
