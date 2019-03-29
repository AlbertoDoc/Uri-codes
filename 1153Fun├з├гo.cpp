#include <iostream>
using namespace std;

int fat(int N){

	if(N<=1){
		return 1;
	}
	else{
		
		return N*fat(N-1);
	}
}
int main() {

	int N;

	cin>>N;

	cout<<fat(N)<<endl;
}
