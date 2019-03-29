#include <iostream> 
using namespace std; 
int main() { 
	long long num,cont=1; 
	cout<<"Informe um numero:"<<" ";
	cin>>num; 

	while(cont<=num){
		if(cont%3==0 && cont%2==0){
			cout<<cont<<endl; 
		}
		cont++;
	}
}
