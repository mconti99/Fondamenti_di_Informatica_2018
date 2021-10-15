#include <iostream>
#define NS 50
#define N 10
#include <string.h>

using namespace std;

typedef char stringa[NS];
typedef struct miaAnag{
	stringa nome;
	stringa cell;
	stringa phone;
} Anagrafe;
typedef Anagrafe Elenco[N];
void inizializza(int &r)
{r=0;
}
void inserisci(Elenco E, int& r, Anagrafe elem)
{E[r++]=elem;
}
void stampaRecord(Anagrafe a)
{cout<<" ---------Informazioni di: 1";
cout<<a.nome<<"------------"<<endl;
cout<<"cellulare: "<< a.cell <<endl;
cout<<"telefono fisso: "<< a.phone <<endl;
}
void stampaElenco(Elenco E, int r)
{cout<<"************* stampa agenda *************"<<endl;
for(int i=0;i<r;i++)
stampaRecord(E[i]);
}
void cerca(Elenco E, int r, stringa nome)
{bool trovato=false;
int i = 0;
while(!trovato && i<r){
	if(strcmp(E[i].nome, nome)==0)
	{trovato = true;
	stampaRecord(E[i]);
	}
	i++;
}
if(!trovato){
	cout<<"********"<<nome<<" non presente*************"<<endl;
}
}
int main(int argc, char** argv) {
	Elenco agendina;
	int riemp;
	bool esci=false;
	int scelta;
	Anagrafe a;
	stringa nome;
	inizializza(riemp);
	while(!esci){
		system("cls");
		cout<<"BENVENUTO NELLA TUA AGENDA PERSONALE"<<endl;
		cout<<"-Premere 1 per inserire"<<endl;
		cout<<"-Premere 2 per stampare tutta l'agenda"<<endl;
		cout<<"-Premere 3 per cercare un telefono"<<endl;
		cout<<"-Premere 4 per uscire"<<endl;
		cin>>scelta;
		if(scelta==1){
		cout<<"inserire nome"<<endl;
		cin>>a.nome;
		cout<<"inserire numero di cellulare"<<endl;
		cin>>a.cell;
		cout<<"inseri numero fisso"<<endl;
		cin>>a.phone;
		inserisci(agendina, riemp, a);
		}
		else if(scelta==2){
		stampaElenco(agendina, riemp);
		system("PAUSE");
		} 
		else if(scelta==3){
		cout<<"chi vuoi cercare?"<<endl;
		cin>>nome;
		cerca(agendina, riemp, nome);
		cout<<"premere un altro tasto per proseguire"<<endl;
		cin>>scelta;
		} 
		else{
		esci=true;
		}
	}
	return 0;
}
