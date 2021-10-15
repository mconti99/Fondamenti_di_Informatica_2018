#include <iostream>

using namespace std;

int main()
{
  const int DIM=10;
  int a[DIM];
  int b[DIM];
  int unione[DIM*2];
  int inters[DIM];
  int diff[DIM];
  int riempa=0;
  int riempb=0;
  int riempunione=0;
  int riempinters=0;
  int riempdiff=0;
  
  //INPUT PRIMO INSIEME a
  cout<<"Primo insieme"<<endl;
  do{
  cout<<"Inserisci il numero di elementi dell'insieme a"<<endl;
  cin>>riempa;
}while(riempa<=0 || riempa>10);

cout<<"Inserisci il valore dell'elemento in posizione 0 :";
cin>>a[0];
for(int i=1;i<=riempa-1;i++){
cout<<"Inserisci il valore dell'elemento in posizione "<<i<<" :";
cin>>a[i];
   for(int j=0;j<i;j++){
   if(a[i]==a[j]){
   cout<<"L'elemento gia' esiste: non va bene"<<endl;
	cout<<"Inserisci di nuovo il valore dell'elemento in posizione "<<i<<" :";
	cin>>a[i];
}
}
}
  //INPUT SECONDO INSIEME b
  cout<<"Secondo insieme"<<endl;
  do{
  cout<<"Inserisci il numero di elementi dell'insieme b"<<endl;
  cin>>riempb;
}while(riempb<=0 || riempb>10);

cout<<"Inserisci il valore dell'elemento in posizione 0 :";
cin>>b[0];
for(int i=1;i<=riempb-1;i++){
cout<<"Inserisci il valore dell'elemento in posizione "<<i<<" :";
cin>>b[i];
   for(int j=0;j<i;j++){
   if(b[i]==b[j]){
   cout<<"L'elemento gia' esiste: non va bene"<<endl;
cout<<"Inserisci di nuovo il valore dell'elemento in posizione "<<i<<" :";
	cin>>b[i];
}
}
}
cout<<"Insieme 1: ";
for(int i=0;i<riempa;i++){
	cout<<a[i];
}
cout<<endl;
cout<<"Insieme 2: ";
for(int i=0;i<riempb;i++){
	cout<<b[i];
}
cout<<endl;
  //RIEMPIMENTO e VISUALIZZAZIONE INSIEME UNIONE unione
  riempunione=riempa+riempb;
for(int i=0;i<riempa;i++) 
{ 
unione[i]=a[i]; 
} 
int j=0; 
for(int i=riempa;i<riempunione;i++) 
{ 
unione[i]=b[j]; // uso un altro indice ( j ) perché non possiamo usare i 
j++; 
}
cout<<"Unione: ";
for(int i=0;i<riempunione;i++){
	cout<<unione[i];
}
cout<<endl;
  //RIEMPIMENTO e VISUALIZZAZIONE INSIEME INTERSEZIONE inters
  if(riempa>=riempb){
	for(int i=0;i<riempb;i++){
	bool trovato = false;
	
	int k=0;
	int j=0;
	while(j<riempb){
		if(a[j]==b[i]){
		
			inters[k]=b[i];
			k++;
			riempinters++;
		}
		j++;
	}
}
}
else{
	for(int i=0;i<riempa;i++){
	int k=0;
	int j=0;
	while(j<riempa){
	if(a[j]==b[i]){
	inters[k]=b[i];
	k++;
	riempinters++;
    }
    j++;
	}
}
}
cout<<"Intersezione: ";
for(int i=0;i<riempinters;i++){
	cout<<inters[i];
}
cout<<endl;
  //RIEMPIMENTO e VISUALIZZAZIONE INSIEME DIFFERENZA a-b diff
for(int i=0;i<riempa;i++){
	diff[i]=a[i];
}

 
}
