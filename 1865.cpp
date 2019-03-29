#include <iostream>
#include <string>
using namespace std;
int main () {

	long long N;

	cin>>N;

	int vet[N];

	string str[N];

	for(int i=0;i<N;i++){
		cin>>str[i]>>vet[i];
	}
	for(int i=0;i<N;i++){
		if(str[i]=="Thor"){
			cout<<"Y"<<endl;
		}
		else{
			cout<<"N"<<endl;
		}
	}
}
