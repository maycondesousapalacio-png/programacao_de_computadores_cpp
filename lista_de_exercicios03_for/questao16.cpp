    /*16. Escreva um programa que v� solicitando as idades dos alunos da sala at� que todos
sejam informados (perguntar ao usu�rio se deseja informar a idade do pr�ximo aluno). Ao
final apresentar a idade do mais novo, a idade do mais velho, Quantos alunos t�m mais de
18 anos, quantos alunos t�m at� 18 anos, a m�dia aritm�tica e a mediana.*/
	
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
            
            
            // DADOS PARA A M�DIA DE IDADES
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
            
            // ALUNOS AT� 18 E MAIORES DE 18
            if(idade<18 and idade>=0){
                ate18++;
            } else if(idade>=18){
                maior18++;
            } else{
                printf("Idade inv�lida, digite essa novamente.");
                goto inicio;
            }
            
            printf("Deseja informar a idade do pr�ximo aluno ? [s/n]\n");
            scanf("%c", &resposta1);
            
            if(resposta1=='n' or resposta1=='N'){
                break;
            } else if(resposta1=='s' or resposta1=='S'){
                
            } else{
                printf("Resposta inv�lida! \n");
                goto inicio;
            }
            
        }
        
        media= somaidades/qtdalunos;
        
        printf("O aluno mais velho tem %.1f anos\n", idadeVelho);
        printf("O aluno mais novo tem %.1f anos\n", idadeNovo);
        printf("H� %.1f alunos menores de 18 anos\n", ate18);
        printf("H� %.1f alunos maiores de 18 anos\n", maior18);
        printf("A m�dia das idades desta turma � %.1f", media);
        
}
        
        
        
