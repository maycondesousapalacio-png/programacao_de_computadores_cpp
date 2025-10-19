#include <iostream>
#include <locale.h>
#include <list>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	list<int> aula, teste(4,9);
	list<int>::iterator it;
	
	int tam=10;
	
	for(int i=0;i<tam;i++){
		aula.push_front(i);
	}
	
	it=aula.begin();
	advance(it,3);
	aula.insert(it,0);
	aula.erase(--it);
	
	aula.merge(teste);
	//aula.sort();
	
	cout<<"Tamanho da Lista: "<<aula.size()<<"\n";
	
	tam=aula.size();
	for(int i=0;i<tam;i++){
		cout<<" - "<<aula.front();
		aula.pop_front();
	}
	
	
	return 0;
	
}
