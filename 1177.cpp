#include <iostream>
using namespace std;
int main () {

	long long cont=0,cont2=0,cont3=0,T;

	cin>>T;

	while(cont<1000){
		if(cont2!=T-1){
			cout<<"N["<<cont<<"] = "<<cont2<<endl;
			cont2++;
			cont++;
		}
		else if(cont2==T-1){
			cout<<"N["<<cont<<"] = "<<cont2<<endl;
			cont2=0;
			cont++;
		}
	}
}

