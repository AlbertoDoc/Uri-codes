#include <iostream>
using namespace std;
int main (){
	long long linha,coluna;
	cin>>linha>>coluna;
	linha=linha+2;
	coluna=coluna+2;
	int vet[linha][coluna];
	for(int i=0;i<linha;i++){
		for(int k=0;k<coluna;k++){
			vet[i][k]=0;
		}
	}
	for(int i=1;i<linha;i++){
		for(int k=1;k<coluna;k++){
			cin>>vet[i][k];
		}
	}
	for(int i=0;i<linha;i++){
		for(int k=0;k<coluna;k++){
			cout<<vet[i][k];
		}
	}
}
//falta colocar zeros em volta dessa matriz
