#include <iostream>
using namespace std;
int main() {
	long long cont=20,cont2=0;
	int i,j,k,t=0,N[20];
	
	for (j=1;j<=20;j++){
		cin>>N[j];
	}
	for (i=1;i<=20;i++){
		cout<<"N["<<cont2<<"] = "<<N[cont]<<endl;
		cont--;
		cont2++;
	}
}
