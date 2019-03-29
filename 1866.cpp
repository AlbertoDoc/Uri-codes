#include <iostream>
using namespace std;
int main (){

	long long N,S;

	cin>>N;

	for(int i=0;i<N;i++){
		cin>>S;
		if(S%2==0){
			cout<<0<<endl;
		}
		else{
			cout<<1<<endl;
		}
	}
}
