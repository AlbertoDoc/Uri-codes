#include <iostream>
using namespace std;
int main (){

	long long N,S,menor=21,pos;

	cin>>N;

	for(int i=0;i<N;i++){
		cin>>S;
		if(S<menor){
			menor=S;
			pos=i;
		}
	}
	cout<<pos+1<<endl;
}
