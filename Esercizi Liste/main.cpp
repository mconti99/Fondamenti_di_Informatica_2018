#include <iostream>
using namespace std;
	struct lista{
		int val;
		lista *next;
	};
void stampa_el_it(lista *);
int main(int argc, char** argv) {

	lista *p1 = new lista;
	int n=0;
	
	do{ cout<<"inserisci elemento"<<endl;
		cin>>n;
		while(p1->next != NULL){
			p1=p1->next;
		}
		p1->next=new lista;
		p1=p1->next;
		p1->val=n;
		p1->next=NULL;
	}while(n!=0);
	stampa_el_it(p1);
	
	return 0;
}
void stampa_el_it(lista *p){
	while(p !=NULL){
		cout<<p->val;
		p=p->next;
	}
}
