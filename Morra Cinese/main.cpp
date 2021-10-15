#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum segno {sasso, carta, forbice};

int main(){
cout<<"BENVENUTO AL GIOCO DELLA MORRA CINESE, SPERO TI DIVERTIRAI"<<endl;
cout<<"Puoi scegliere tra due diverse modalita': premi 1 per la modalita' PLAYER vs PC, premi 2 per la modalita' PLAYER vs PLAYER."<<endl;
srand(time(0));
int contpc=0;
int contpl=0;
int gioca=0;
int scelta=0;
int punteggiof=0;
cin>>scelta;
if(scelta==1){
cout<<"Quante partite vuoi che vengano giocate?"<<endl;
cin>>punteggiof;
int contatore=0;
do{
cout << "Inserisci la giocata del primo giocatore (1: sasso, 2: carta, 3: forbice):";
cin>>gioca;
switch (gioca){
    case (1):
            cout<<"hai giocato sasso"<<endl;
            break;
    case(2):
            cout<<"hai giocato carta"<<endl;
            break;
    case (3):
            cout<<"hai giocato forbice"<<endl;
            break;
}
segno s;
int m=rand()%3;
s=static_cast<segno>(m);
switch (s){
    case sasso:
    cout<<"il PC ha giocato sasso"<<endl;
    break;
    case forbice:
    cout<<"il PC ha giocato forbice"<<endl;
    break;
    case carta:
    cout<<"il pc ha giocato carta"<<endl;
    break;
}
    if (((gioca==1) && (s==sasso))||((gioca==2) && (s==carta))||((gioca==3) && (s==forbice)))
    {
        cout<<"Pari:"<<endl;
        contatore++;
        cout<<contpl<<"-"<<contpc<<endl;
    }
    else if (((gioca==1)&& (s==forbice))||((gioca==2)&&(s==sasso))||((gioca==3)&& (s==carta)))
    {
        contpl++;
        contatore++;
        cout<<"Vinci tu:"<<endl;
        cout<<contpl<<"-"<<contpc<<endl;
    }
    else if (((gioca==1)&& (s==carta))||((gioca==2)&&(s==forbice))||((gioca==3)&& (s==sasso))){
    contpc++;
    contatore++;
    cout<<"Vince il PC:"<<endl;
    cout<<contpl<<"-"<<contpc<<endl;
}}while(contatore != punteggiof);

    if (contpc<contpl)
        cout<<"Hai vinto la sfida!"<<endl;
    else if (contpl<contpc)
        cout<<"Il PC ha vinto la sfida!"<<endl;

}
else if(scelta==2){
cout<<"Quante partite vuoi che vengano giocate?"<<endl;
cin>>punteggiof;
int contatore=0;
do{
int gioca2=0;
cout << "Inserisci la giocata del primo giocatore (1: sasso, 2: carta, 3: forbice):";
cin>>gioca;
switch (gioca){
    case (1):
            cout<<"hai giocato sasso"<<endl;
            break;
    case(2):
            cout<<"hai giocato carta"<<endl;
            break;
    case (3):
            cout<<"hai giocato forbice"<<endl;
            break;
}
cout << "Inserisci la giocata del secondo giocatore (1: sasso, 2: carta, 3: forbice):";
cin>>gioca2;
switch (gioca2){
    case (1):
            cout<<"hai giocato sasso"<<endl;
            break;
    case(2):
            cout<<"hai giocato carta"<<endl;
            break;
    case (3):
            cout<<"hai giocato forbice"<<endl;
            break;
}


    if (((gioca==1) && (gioca2==1))||((gioca==2) && (gioca2==2))||((gioca==3) && (gioca2==3)))
    {
        cout<<"Pari."<<endl;
        contatore++;
        cout<<contpl<<"-"<<contpc<<endl;
    }
    else if (((gioca==1)&& (gioca2==3))||((gioca==2)&&(gioca2==1))||((gioca==3)&& (gioca2==2)))
    {
        contpl++;
        contatore++;
        cout<<"Vince il Player 1:"<<endl;
        cout<<contpl<<"-"<<contpc<<endl;
    }
    else if (((gioca==1)&& (gioca2==2))||((gioca==2)&&(gioca2==3))||((gioca==3)&& (gioca2==1))){
    contpc++;
    contatore++;
    cout<<"Vince il Player 2:"<<endl;
    cout<<contpl<<"-"<<contpc<<endl;
}}while(contatore != punteggiof);

    if (contpc<contpl)
        cout<<"Il Player 1 vince la sfida!"<<endl;
    else if (contpl<contpc)
        cout<<"Il Player 2 vince la sfida!"<<endl;
}
else{
	cout<<"strunz puoi scrivere solo 1 e 2, altre modalita' sono work in progress"<<endl;
}
return 0;
}
