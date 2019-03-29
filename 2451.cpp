#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int N, i, j, c=0, maior=0; 
	bool sentido=1;
	cin >> N;
    
	char tab[N][N];
    
	for (i=0; i<N; i++){
		for(j=0; j<N; j++){
			cin >> tab[i][j];
		}
	}
	for (i=0; i<N; i++){
		if(sentido==1){
			for(j=0; j<N; j++){
				if(tab[i][j]=='o'){
					c++;
					//maior=max(c,maior);
					if(c>maior){
						maior=c;
					}
				}
				else if(tab[i][j]=='A'){
				c=0;
				}
			}
		}
		else {
			for(j=N-1; j>=0; j--){
				if(tab[i][j]=='o'){
					c++;
					//maior=max(c,maior);
					if(c>maior){
						maior=c;
					}
				}
				else if(tab[i][j]=='A'){
					c=0;
				}
			}
		}
		sentido = !sentido;
	}
	cout << maior << endl;
}
