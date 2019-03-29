#include <iostream>
using namespace std;
int main() {
	long long N=1,M1,M2,dif=0,cont=0;
	int i;
	while (N!=0){
		cin>>N;
		if(N==0){
			break;
		}
		cont++;
		cout<<"Teste "<<cont<<endl;
		for(i=0;i<N;i++){
			cin>>M1>>M2;
			dif+=M1-M2;
			cout<<dif<<endl;
		}
	dif=0;
	cout<<endl;
	}
}
