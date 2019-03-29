#include <iostream>
using namespace std;
int main () {

	long long N,cont=0,num=1;

	cin>>N;

	while(cont!=N*4){
		if(num%4==0){
			cout<<" PUM"<<endl;
		}
		else if ((num-1)%4==0) {
			cout<<num;
		}
		else {
			cout<<" "<<num;
		}
		num++;
		cont++;
	}
}
