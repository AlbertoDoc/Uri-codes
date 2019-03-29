#include <iostream>
using namespace std;
int main () {

	long long N,M;

	cin>>N;

	for(int i=0;i<N;i++){
		cin>>M;
		if(M>8000){
			cout<<"Mais de 8000!"<<endl;
		}
		else{
			cout<<"Inseto!"<<endl;
		}
	}
}
		
