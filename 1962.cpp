#include <iostream>
using namespace std;
int main (){

	long long N,T;

	cin>>N;

	for(int i=0;i<N;i++){
		cin>>T;
		if(T<2015){
			cout<<2015-T<<" D.C."<<endl;
		}
		else{
			cout<<(2014-T)*-1<<" A.C."<<endl;
		}
	}
}
			
