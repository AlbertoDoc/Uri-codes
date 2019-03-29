#include <iostream>
using namespace std;
int main () {
	long long N,M;

	cin>>N>>M;

	string nomes[N];

	for(int i=0;i<N;i++){
		cin>>nomes[i];
	}
	for(int i=0;i<N-1;i++){
		int menor=i;
		for(int j=i+1;j<N;j++){
			if(nomes[j]<nomes[menor]){
				menor=j;
			}
		}
		swap(nomes[i],nomes[menor]);
	}
	cout<<nomes[M-1]<<endl;
}
