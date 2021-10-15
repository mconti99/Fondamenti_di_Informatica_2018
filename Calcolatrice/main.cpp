#include <iostream>

using namespace std;

/*
int main(int argc, char** argv) {
	int x=0;
	cin>>x;
	if(x==0){
		cout<<"Il numero e' neutro"<<endl;
	}
	else if(x%2==0){
	cout<<"Il numero e' pari"<<endl;
	}
	else{
		cout<<"Il numero e' dispari"<<endl;
	}
	return 0;
}
*/
int main(int argc, char** argv) {
	float scelta=0, z=0, op1=0, op2=0;
	cout<<"Inserisci il primo numero"<<endl;
	
		cin>>op1;
		cout<<"Inserisci il secondo numero"<<endl;
	cin>>op2;
	cout<<"I due operandi sono: "<<op1<<","<<op2<<endl;
	cout<<"Scegli l'operazione"<<endl;
	cout<<"1 per somma"<<endl;
	cout<<"2 per differenza"<<endl;
	cout<<"3 per prodotto"<<endl;
	cout<<"4 per la divisione"<<endl;
	cin>>scelta;
	if(scelta==1){
		z=op1+op2;
		cout<<"La somma e': "<<z<<endl;
	}
	else if(scelta==2){
		z=op1-op2;
		cout<<"La differenza e' :"<<z<<endl;
	}
	else if(scelta==3){
		z=op1*op2;
		cout<<"Il prodotto e' :"<<z<<endl;
		
	}
	else if(scelta==4){
		z=op1/op2;
		cout<<"La divisione e' :"<<z<<endl;
	}
	else{
		cout<<"Operazione non consentita"<<endl;
	}
return 0;
}
