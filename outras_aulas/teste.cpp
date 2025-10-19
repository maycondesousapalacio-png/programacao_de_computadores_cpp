#include <iostream>
#include <locale.h>
#include <stack>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	stack <int> cartas;
	
	cartas.push(2);
	cartas.push(5);
	cartas.push(10);
	cartas.push(1);
	
	cout<<"Tamanho da pilha: "<< cartas.size()<<"\n";
	cout<<"Carta do Topo: "<< cartas.top()<<"\n";
	
	cartas.top();
	
	cout<<"Tamanho da pilha: "<< cartas.size()<<"\n";
	cout<<"Nova Carta do Topo: "<< cartas.top()<<"\n";
	
	return 0;
}
