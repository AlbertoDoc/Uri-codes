#include <iostream>
using namespace std;
int main(){
    int vet[100];
    int q;
    int N,Q;
    while(cin>>N>>Q){
        for(int i=0;i<N;i++){
            cin>>vet[i];
		}
        for (int i=0;i<N-1;i++){
			int menor=i;
			for(int j=i+1;j<N;j++){
				if(vet[j]>vet[menor]){
					menor=j;
				}
			}
			swap(vet[i],vet[menor]);
		}
        for(int i=0;i<Q;i++){
            cin>>q;
            cout<<vet[q-1]<<endl;
        }
    }
    return 0;
}
