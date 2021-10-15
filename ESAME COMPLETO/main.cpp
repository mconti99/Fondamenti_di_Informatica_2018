#include "SenzaTitolo2.h"
	
	int main(int argc, char** argv) {
	// String miofile;
	char* miofile=new char[MAX_STR];
	int r=0;
	leggi_nome(miofile);
	get_dim(r,miofile);
	int **B; 
	/* La matrice definita è un puntatore a puntatore
	perchè punta alla struttura complessiva i cui elementi 
	sono a loro volta puntatori alle r righe */
	B = new int*[r];
	/* Allochiamo inizialmente il vettore di r puntatori:
	il puntatore restituito da new è anche il puntatore B
	utilizzato per accedere alla matrice */
	for(int i=0;i<r;i++)	
	B[i] = new int[r];
	/* Allochiamo le r righe assegnando i valori dei 
	puntatori restituiti da new agli elementi del vettore
	puntato da B */

	load_matrix(B,r,miofile);
	int* v=new int[r];
	somma_righe(B,v,r);
	bubble_sort_SumRow(B, v, r);
	int cont=0;
	
	elimina_righe(B,v,r,cont);
	stampa_matrice(cont,r,B);
	for(int i=0;i<r;i++){
	delete[] B[i];
	}
	delete[] B;
	delete[] miofile;
	delete[] v;
	return 0;
	}
