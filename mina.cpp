#include <iostream>
using namespace std;
int main() {
	int N;
	cin>>N;
	int vet[N],Qbomba[N];
	for(int i=0;i<N;i++){
		cin>>vet[i];
	}
	for(int i=0;i<N;i++){
		if(i==0){
			if(vet[i]==1 && vet[i+1]==1){
				Qbomba[i]=2;
			}
			else if(vet[i]==1 && vet[i+1]==0){
				Qbomba[i]=1;
			}
			else if(vet[i]==0 && vet[i+1]==1){
				Qbomba[i]=1;
			}
			else if(vet[i]==0 && vet[i+1]==0){
				Qbomba[i]=0;
			}
		}
		if(i!=0 && i!=N-1){
			if(vet[i]==1 && vet[i-1]==1 && vet[i+1]==1){
				Qbomba[i]=3;
			}
			else if(vet[i]==1 && vet[i-1]==1 && vet[i+1]==0){
				Qbomba[i]=2;
			}
			else if(vet[i]==1 && vet[i-1]==0 && vet[i+1]==1){
				Qbomba[i]=2;
			}
			else if(vet[i]==0 && vet[i-1]==1 && vet[i+1]==1){
				Qbomba[i]=2;
			}
			else if(vet[i]==1 && vet[i-1]==0 && vet[i+1]==0){
				Qbomba[i]=1;
			}
			else if(vet[i]==0 && vet[i-1]==0 && vet[i+1]==1){
				Qbomba[i]=1;
			}
			else if(vet[i]==0 && vet[i-1]==1 && vet[i+1]==0){
				Qbomba[i]=1;
			}
			else if(vet[i]==0 && vet[i-1]==0 && vet[i+1]==0){
				Qbomba[i]=0;
			}
		}
		if(i==N-1){
			if(vet[i]==1 && vet[i-1]==1){
				Qbomba[i]=2;
			}
			else if(vet[i]==1 && vet[i-1]==0){
				Qbomba[i]=1;
			}
			else if(vet[i]==0 && vet[i-1]==1){
				Qbomba[i]=1;
			}
			else if(vet[i]==0 && vet[i-1]==0){
				Qbomba[i]=0;
			}
		}
	}
	for(int i=0;i<N;i++){
		cout<<Qbomba[i]<<endl;
	}
}
