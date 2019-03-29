#include <iostream>
using namespace std;
int main () {
	long long X,Fatorial,somafatorial,Y;
	int i;
	cin>>X;
	for (i=0; i<=X; i++) {
		Y=-1;
		Fatorial=X*(X+Y);
		Y=Y-1;
		cout<<Fatorial<<endl;
	}
}
