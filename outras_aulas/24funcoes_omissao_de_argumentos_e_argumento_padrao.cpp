#include <iostream>
#include <locale.h>

using namespace std;

void imp(string txt="2"); 


int main(){
	setlocale(LC_ALL, "Portuguese");
	
    imp("Bruno");
    imp();
	
	
	return 0;
}

void imp(string txt){
	cout<<"\n"<<txt<<"\n";
}
