#include <iostream>
using namespace std;
const int CARD = 100;

int main(int argc, char** argv) {
	int n=0;
	int m=0;
	int a[2*CARD];
	int b[CARD];
	int c[CARD];
	int numNotInA = 0;
	
	cout<<"Inserire dimensione del vettore A"<<endl;
	cin>>n;
	cout<<"Inserire dimensione del vettore B"<<endl;
	cin>>m;
	cout<<"Inserisci gli elementi del vettore A"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Elemento A["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<"Inserisci gli elementi del vettore B"<<endl;
	for(int i=0;i<m;i++){
		cout<<"Elemento B["<<i<<"] = ";
		cin>>b[i];
	}
	for(int i=0;i<m;i++){
	bool findElem = false;
	
	int k=0;
	int j=0;
	while(j<n && findElem==false){
		if(a[j]==b[i]){
			findElem=true;
		}
		j++;
	}
	
	if(findElem == false){
		c[k]=b[i];
		k++;
		numNotInA++;
	}
}
if(numNotInA == 0){
	cout<<"A contiene tutti gli elementi di B"<<endl;
}
else{
	for(int i=0;i<numNotInA;i++){
		cout<<"L'elemento "<<c[i]<<" appare in B ma non in A"<<endl;
	}
}


	return 0;
}
