#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
const int MAX =30;
typedef  float vettore[MAX];
typedef vettore matrice[MAX];
typedef char stringa [MAX]; /* vettore costituito da caratteri */

void leggi_mat(const char*, matrice, int&, int&);
float med_neg_mat(const matrice, int,int);
int conta_min(const matrice, int, int, float);

int main(int argc, char** argv) {
	stringa nomefile;
	matrice mat;
	int rig, col;
	float med_neg;
	
	cout<<"Inserire il nome del file da leggere: ";
	cin>>nomefile;
	
	leggi_mat(nomefile, mat, rig, col); /* la funzione è void, non mi ritorna nulla, infatti non c'è nessun = */
	med_neg=med_neg_mat(mat,rig,col);
	cout<<"Media: "<<med_neg<<endl;
	cout<<"Numero di elementi minori: "<<conta_min(mat,rig,col,med_neg)<<endl;
	
	return 0;
}
void leggi_mat(const char* filename, matrice m, int &r, int &c){
	int i, j;
	fstream input;
	
	input.open(filename,ios::in);
	if(input.fail()){ /* dichiarazione della funzione input.fail dentro un'altra funzione */
		cout<<"File non trovato"<<endl;
		exit(1);
	}
	
	input>>r>>c;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			input>>m[i][j];
		}
	}
	input.close();
}
float med_neg_mat(const matrice m, int r, int c){
	float somma = 0;
	int i,j, neg=0;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(m[i][j]<0){
				somma = somma+m[i][j];
				neg++;
			}
		}
	}
	return somma/neg;
}
int conta_min(const matrice m, int r, int c, float media){
	int i,j, num=0;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(m[i][j]<=media)
			num++;
		}
	}
	return num;
}
