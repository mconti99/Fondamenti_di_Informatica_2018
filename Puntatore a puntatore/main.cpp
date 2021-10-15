#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	char **punt_a_punt;
	char *punt;
	char carattere ='?';
	
	punt = &carattere;
	punt_a_punt = &punt;
	cout<<"Valore della variabile carattere= "<<carattere<<endl;
	cout<<"Valore puntato da *punt         = "<<*punt<<endl;
	cout<<"Valore puntato da **punt_a_punt = "<<**punt_a_punt<<endl;
	return 0;
}
