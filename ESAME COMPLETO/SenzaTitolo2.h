	#include <iostream>
	#include <fstream>
	#include <cmath>
	#define MAX_MAT 100
	#define MAX_STR 100
	
	// typedef int Matrix[MAX_MAT][MAX_MAT];
	// typedef char String[MAX_STR];
	// typedef int Vettore[MAX_MAT];
	using namespace std;
	void leggi_nome(char*);
	void get_dim(int &, const char*);
	void load_matrix(int **, int, const char*);
	void somma_righe(int **, int *, int);
	void scambia_righe(int **, int &, int);
	void bubble_sort_SumRow(int **, int *, int);
	void elimina_righe(int **, int *, int &, int &);
	void stampa_matrice(int, int, int **);
