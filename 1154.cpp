#include <iostream>
#include <iomanip>
using namespace std;
int main () {

	long long N=0,soma=0,cont=-1;

	while(N>=0){
		soma+=N;
		cont++;
		cin>>N;
	}
	cout<<fixed<<setprecision(2);
	cout<<(double)soma/cont<<endl;
}
