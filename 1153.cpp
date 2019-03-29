#include <iostream>
using namespace std;
int main () {
	long long X,Fatorial,Y,Fatorial2;
	int i;
	cin>>X;
	for (i=0; i<X; i++) {
		Y=X-1;
		Fatorial=X*(X-Y);
		

		cout<<Fatorial<<endl;
		
	}
}
