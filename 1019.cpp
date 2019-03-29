#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long long N,M,X,Z;
	cin >> N >> M;
	if (N==M) {
		cout <<"O JOGO DUROU 24 HORA(S)" <<endl;
}
	if (M>N) {
		Z=(-M+N)*-1;
		cout <<"O JOGO DUROU "<< Z <<" HORA(S)" <<endl;
}
	if (N>M) {
		X=sqrt((N-24-M)*(N-24-M));
		cout <<"O JOGO DUROU "<< X <<" HORA(S)"<<endl;
}	
}
