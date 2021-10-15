#include "SenzaTitolo2.h"
	void leggi_nome(char* file_name){
		fstream f;
	do
	{
		cout<<"Inserisci il nome del file da leggere: ";
		cin>>file_name;
		f.open(file_name, ios::in);
		if(!f)
		{
			cout<<endl<<"Impossibile leggere il file, riprova."<<endl;
		}
	}while(!f);
	f.close();
	}
	void get_dim(int &dim, const char* mfile){
	    dim=0;
	    fstream f;
	    f.open(mfile,ios::in);
	    int temp;
	    while(f.eof()==false){
	        f >> temp;
	        dim++;
	    }
	    dim = sqrt(dim);

	    f.close();
	}
	void load_matrix(int **A, int n, const char* file_name){
	fstream f;
	int i, j;
	f.open(file_name,ios::in);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++) f>>A[i][j]; 
	f.close();
	
	}
	void somma_righe( int **A, int *sum_rows, int n){
	for(int i=0; i<n; i++) {
		sum_rows[i]=0;
	    for (int j=0; j<n; j++) {
	    sum_rows[i] += A[i][j];
	    }
	    
	    cout<<"La somma delle riga "<<i<<" e' "<<sum_rows[i]<<" "<<endl;
	    
	    }
	}
	void scambia_righe(int **C, int &prima, int t)
	{
	
	int appoggio;
	int i;
	int seconda=prima+1;
	for(i=0; i<t; i++)
	    {
	    appoggio = C[prima][i];
	    C[prima][i] = C[seconda][i];
	    C[seconda][i] = appoggio;
	    }
	}
	void bubble_sort_SumRow(int **A, int *sum_rows, int n)
	{
	float temp;
	bool swap;
	int j;
	int g=0;
	do
	{
	swap=false;
	for(j=0;j<n-1;j++)
	{
	if(sum_rows[j]>sum_rows[j+1])
	{
	temp=sum_rows[j];
	sum_rows[j]=sum_rows[j+1];
	sum_rows[j+1]=temp;
	scambia_righe(A, j, n);
	swap=true;	
	}		
	}
	g++;
	}while(g<n && swap);
	}
	void elimina_righe(int **A, int *sum_rows, int &n, int &contatore){
	for(int i=1;i<n;i++){
	if(sum_rows[i]==sum_rows[i-1]){
	for(int g=i;g<n-1;g++) { // usiamo n-1 perchè n sarebbe stata un'eccezione, ovvero un out of memory
	for(int j=0;j<n;j++) {
	A[g][j]=A[g+1][j];
	}}
	contatore++;
	}}}
	void stampa_matrice(int contatore, int n, int **A){
		for(int i=0;i<n-contatore;i++){
	    for(int j=0;j<n;j++){
		cout<<A[i][j];
	}}}

