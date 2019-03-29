#include <iostream>
using namespace std;
int main () {
	long long N,cont=0;

	cin>>N;
	
	int vetor[N+1][N+1];

	for(int i=0;i<N+1;i++){
		for(int k=0;k<N+1;k++){
			cin>>vetor[i][k];
		}
	}
	for(int i=0;i<N;i++){
		for(int k=0;k<N;k++){
			if(vetor[i][k]==1){
				cont++;
				if(vetor[i][k+1]==1){
					cont++;
				}
				if(vetor[i+1][k+1]==1){
					cont++;
				}
				if(vetor[i+1][k]==1){
					cont++;
				}
			}
			if(vetor[i][k]==0){
				if(vetor[i][k+1]==1){
					cont++;
				}
				if(vetor[i+1][k+1]==1){
					cont++;
				}
				if(vetor[i+1][k]==1){
					cont++;
				}
			}
			if(cont>1){
				cout<<"S";
				if(k==N-1){
					cout<<endl;
				}
			}
			else if(cont<=1){
				cout<<"U";
				if(k==N-1){
					cout<<endl;
				}
			}
			cont=0;
		}
	}		
}
