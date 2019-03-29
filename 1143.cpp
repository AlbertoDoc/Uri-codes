#include <iostream>
using namespace std;
int main () {

	long long N,cont=1;

	cin>>N;

	while(cont<=N){
		cout<<cont<<" "<<cont*cont<<" "<<cont*cont*cont<<endl;
		cont++;
	}
}
