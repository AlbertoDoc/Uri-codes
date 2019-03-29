#include <iostream>
using namespace std;
int main () {
	long long linha, coluna, soma=0,melhor=0;
	
	cin>>linha>>coluna;
	
	int vet[linha][coluna];
	int S[linha+coluna];

	for(int i=0;i<linha;i++){
		for(int k=0;k<coluna;k++){
			cin>>vet[i][k];
		}
	}
	for(int i=0;i<linha;i++){
		for(int k=0;k<coluna;k++){
			soma+=vet[i][k];
			if(k==coluna-1){
				S[i]=soma;
				soma=0;
			}
		}
	}
	for(int k=0;k<coluna;k++){
		for(int i=0;i<linha;i++){
			soma+=vet[i][k];
			if(i==linha-1){
				S[linha+i]=soma;
				soma=0;
			}
		}
	}
	for(int i=0;i<linha+coluna;i++){
		for(int k=0;k<coluna;k++){
			cout<<vet[i][k];
		}
	}
}
