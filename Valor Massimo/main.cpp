#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int primo, secondo, terzo, massimo;
	cout<<"Inserisci primo valore:"<<endl;
	cin>>primo;
	cout<<"Inserisci secondo valore:"<<endl;
	cin>>secondo;
	cout<<"Inserisci terzo valore:"<<endl;
	cin>> terzo;
	/*if(primo>secondo)
	{if (primo>terzo)
	cout<<"Il valore massimo e' "<<primo<<endl;
	else
	cout<<"Il valore massimo e' "<<terzo<<endl;
	}
	else {
		if(secondo>terzo)
		cout<<"Il valore massimo e' "<<secondo<<endl;
		else
		cout<<"Il valore massimo e' "<<terzo<<endl;
		
	}; 
	*/
	massimo = primo;
	if(secondo>massimo)
	massimo=secondo;
	if(terzo>massimo);
	massimo=terzo;
	cout<<"Il valore massimo e' "<<massimo<<endl;
	return 0;
}
