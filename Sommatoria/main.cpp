#include <iostream>
using namespace std;
#define terminazione 0
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int somma,valore,contatore;
	somma = 0;
	contatore = 0;
	do {
		cout<<"Inserisci valore elemento "<<contatore+1<<":"<<endl;
		cin>>valore;
		if(valore!=terminazione)
		{somma = somma + valore;
		contatore= contatore + 1;
		}
	}
	while(valore!=terminazione);
	cout<<"La somma dei "<<contatore<<" elementi inseriti e' uguale a "<<somma<<endl;
	cout<<"La lunghezza e' di "<<contatore<<" elementi"<<endl;
	return 0;
}
