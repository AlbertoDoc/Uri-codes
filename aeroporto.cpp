#include <iostream>
using namespace std;
int main(){
	int A, V, x, y, t, n=1, maior;
	cin >> A >> V;    
	while(A>0&&V>0){
		cout << "Teste " << n++ << endl;
		int voos[A+1];
		for(int i=1; i<=A; i++){
			voos[i]=0;
		}
		maior=0;
		while(V--){
			cin >> x >> y;
			voos[x]++;
			voos[y]++;
			if(voos[x]>maior){
				maior=voos[x];
			}
			if(voos[y]>maior){
				maior=voos[y];
			}
		}
		for(int i=1; i<=A; i++){
			if(voos[i]==maior){
				cout << i << ' ';
			}
		}
		cout << endl << endl;
		cin >> A >> V;
	}
}
