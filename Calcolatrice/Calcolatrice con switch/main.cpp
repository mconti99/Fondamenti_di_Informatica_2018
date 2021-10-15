#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char tasto;
	cout<<"Ciao sono io: il tuo Personal Computer."<<endl;
	cout<<"Per cortesia, dammi un cenno di assenso"<<endl;
	cout<<"Premi s e il tasto enter!"<<endl;
	cin>>tasto;
	int cifra1, cifra2, risultato;
	char operatore;
	cout<<"Ora ti faccio da calcolatrice"<<endl;
	cin>>cifra1;
	cin>>operatore;
	cin>>cifra2;
	switch(operatore){
		case'+': risultato = cifra1 + cifra2;
		break;
		case'-': risultato = cifra1 - cifra2;
		break;
		case'*': risultato = cifra1 * cifra2;
		break;
		case'/': risultato = cifra1 / cifra2;
	};
	cout<<"= ";
	cout<<"\n"<<risultato;
	return 0;
}
