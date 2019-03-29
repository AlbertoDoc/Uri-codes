#include <iostream>
using namespace std;
int main() {
	long long N,A,B,quebrou=0;
	int i;
	cin>>N;
	for(i=0;i<N;i++){
		cin>>A>>B;
		if(A>B){
			quebrou+=B;
		}
	}
	cout<<quebrou<<endl;
}
