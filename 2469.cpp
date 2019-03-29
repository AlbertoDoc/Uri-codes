#include <iostream>
using namespace std;
int main() {
	int N;
	cin>>N;
	int notas[N],nota,melhor=-1,cont=0;
	for (int i=0;i<N;i++){
		cin>>notas[i];
	}
	for(int i=0;i<N;i++){
			cont=0;
			for(int k=i+1;k<N;k++){
				if(notas[i]==notas[k] && notas[i]>melhor){
					cont++;
					if(cont>0){
						nota=notas[i];
						melhor=notas[i];
					}
				}
			}
	}
	cout<<nota<<endl;
}
