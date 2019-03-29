#include <iostream>
using namespace std;
int main () {
	long long N,menor,posicao;
	int i;
	cin>>N;
	int X[N];
	for(i=0;i<N;i++){
		cin>>X[i];
		if(i==0){
			menor=X[i];
			posicao=i;
		}
		else if(menor>=X[i]){
			menor=X[i];
			posicao=i;
		}
	}
	cout<<"Menor valor: "<<menor<<endl;
	cout<<"Posicao: "<<posicao<<endl;
}
