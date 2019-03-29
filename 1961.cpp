#include <iostream>
#include <cmath>
using namespace std;
int main (){

	long long N,P,cont=0;

	cin>>P>>N;

	long long vet[N];

	for(int i=0;i<N;i++){
		cin>>vet[i];
	}
	for(int i=0;i<N-1;i++){
		if(abs(vet[i]-vet[i+1])>P){
			cont++;
		}
	}
	if(cont>0){
		cout<<"GAME OVER"<<endl;
	}
	else{
		cout<<"YOU WIN"<<endl;
	}
}
			
