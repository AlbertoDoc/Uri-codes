#include <iostream>
#include <cmath>
using namespace std;
long long hanoi(long long N){

	return pow(2,N)-1;
}
int main (){

	long long N,cont=1;

	cin>>N;
	while(N!=0){
		cout<<"Teste "<<cont<<endl;
		cont++;
		cout<<hanoi(N)<<endl;
		cout<<endl;
		cin>>N;
	}
}
