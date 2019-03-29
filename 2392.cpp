#include <iostream>
using namespace std;
int main(){
	int N, M, P, D, i;
	cin >> N >> M;
	bool place[N+1];
	for(i=1; i<=N; i++){
	place[i]=0; 
    }
	for(i=1; i<=M; i++){
		cin >> P >> D;
		place [P]=1;
		for(int j=P; j<=N; j+=D){
			place [j]=1;
		}
		for(int j=P; j>=1; j-=D){
			place [j]=1;
		}
	}    
	for(i=1; i<=N; i++){
		cout << place[i] << '\n';
	}    
}

