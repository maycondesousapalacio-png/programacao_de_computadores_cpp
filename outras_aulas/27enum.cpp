#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	enum armas{fuzil=100, revolver=8, rifle=12, escopeta=2};
	armas armaSel;
	
	armaSel=fuzil;
	
	cout<<armaSel;
	
	
	return 0;
}
