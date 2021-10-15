#include <iostream>
#include <fstream>

void selection_sort_vector(Vector, int);
int stampa_file(char);
int save_vector(const, int, const);
int main(int argc, char** argv) {
	
	return 0;
}
void selection_sort_vector(Vector v, int n){
	elem temp, min;
	int i,j, pos;
	for(i=0;i<n;i++){
		min=v[i];
		pos=i;
		for(j=i+1;j<n;j++){
			if(v[j]<min){
				min=v[j];
				pos=j;
			}
		}
		temp=v[i];v[i]=v[pos];v[pos]=temp;
	}
}
int stampa_file(char nome_file[]){
fstream miofile;
char buf;
cout<<"Stampa contenuto del file :"<<nome_file<<endl;
miofile.open(nome_file, ios::in);
if(!miofile) return 1;
miofile.get(buf);
while(!miofile.eof()){
	cout.put(buf);
	miofile.get(buf);
};
miofile.close();
return 0;
}
int save_vector(const Vector v, int n, const String file_name){
	fstream f;
	int i, exit;
	f.open(file_name, ios::out);
	if(!f) exit=0;
	else{
		exit =1;
		for(i=0;i<n;i++) f<<v[i]<<endl;
		f.close();
	}
	return exit;
}

