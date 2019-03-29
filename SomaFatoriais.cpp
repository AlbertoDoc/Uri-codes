#include <iostream>

using namespace std;

long long fat(long long N){

	if(N<=1){
		return 1;
	}
	else{
		
		return N*fat(N-1);
	}
}
int main() {

long long N,M;

	while(cin>>N>>M){

		cout<<fat(N)+fat(M)<<endl;
	}
}
