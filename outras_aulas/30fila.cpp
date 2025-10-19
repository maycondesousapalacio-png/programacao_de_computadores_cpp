#include <iostream>
#include <locale.h>
#include <queue>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	/*empty/size/front/back/push/pop*/
	
	queue <string> cartas;
	
	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	
	cout<<"Tamanho da fila: "<< cartas.size()<<"\n";
	
	
	while(!cartas.empty()){
		cout<<"Primeira carta: "<< cartas.front()<<"\n";
		cout<<"Última carta: "<< cartas.back()<<"\n";
		cartas.pop();
	}
	
	
	return 0;
}
