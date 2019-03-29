#include <iostream>
using namespace std;
int main () {
	long long M,N,soma=0,i;
	cin >> M >>N;
	while (M>0 && N>0 && M>N){	
		for (i=N; i<=M;i++) {
			cout<<i<<" ";
			soma += i;	
		}
	cout<<"Sum="<<soma<<endl;	
	soma=0;
	cin >> M >> N;
	}
	while (M>0 && N>0 && M<N){
		for(i=M; i<=N; i++){
			cout<<i<<" ";
			soma += i;
		}
	cout<<"Sum="<<soma<<endl;
	soma=0;
	cin >> M >> N;
	}
}
