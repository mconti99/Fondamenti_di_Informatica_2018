#include <iostream>
#include <math.h>
using namespace std;


int main(int argc, char** argv) {
	int l1, l2, l3;
	int a1, a2, a3;
	int p, a;
	cout<<"Benvenuti al CALCOLATORE DEI TRIANGOLI"<<endl;
	cout<<"Inserisci la misura del primo lato: "<<endl;
	cin>>l1;
	cout<<"Inserisci la misura del secondo lato: "<<endl;
	cin>>l2;
	cout<<"Inserisci la misura del terzo lato: "<<endl;
	cin>>l3;
	if((l1<l2+l3) && (l2<l1+l3) && (l3<l2+l1)){
		cout<<"I tre lati inseriti sono lati di un triangolo";
		if(l1==l2 && l2==l3)
		cout<<" di tipo equilatero";
		else{
			if ( (l1==l2) || (l2==l3) || (l3==l1))
			cout<<" di tipo isoscele";
			else{
				cout<<" di tipo scaleno";
			}
		a1= l1*l1;
		a2= l2*l2;
		a3= l3*l3;
		if ( (a1==a2+a3) || (a2= a1+a3) || (a3= a1+a2))
		cout <<" ma anche rettangolo"<<endl;
			
		else {
			cout<<"."<<endl;
		}
		p= l1+l2+l3;
		cout<<"Il suo perimetro equivale a "<<p<<" cm"<<endl;
		a=sqrt(p/2*((p/2)-l1)*((p/2)-l2)*((p/2)-l3));
		cout<<"La sua area equivale a "<<a<<" cm al quadrato"<<endl;
	}
	}
	else {
	cout <<"I tre lati non sono lati di un triangolo";
}
	return 0;
}
