#include <iostream>
#include <locale.h>
#include <list>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	list<int> aula(5,50);
	list<int> aulaexp(5,50);
	list<int>::iterator it;
	
	int tam=10;
	
	for(int i=0;i<10;i++){
		aula.push_front(i);
	}
	
	it=aula.begin();
	advance(it,5);        //ADICIONA UM VALOR EM UM DETERMINADO ESPAÇO, NESSE CASO NA POSIÇÃO 5
	aula.insert(it,0);
	
	aula.sort();
	aula.reverse();
	
	cout<<"Tamanho da Lista: "<<aula.size()<<"\n";
	
	tam=aula.size();
	for(int i=0;i<tam;i++){
		cout<<aula.front()<<"\n";
		aula.pop_front();
	}
	
	
	return 0;
	
}
