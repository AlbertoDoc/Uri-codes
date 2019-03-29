#include <iostream>
using namespace std;
int main (){
	long long T,melhor=-1;
	int t=1;
	cin>>T;
	while(T!=0){
		int codigo[T], media[T];
		cout<<"Turma "<<t<<endl;
		t++;
		for(int i=0;i<T;i++){
			cin>>codigo[i]>>media[i];
		}
		for(int i=0;i<T;i++){
			if(media[i]<melhor){
				melhor=melhor;
			}	
			if(media[i]>=melhor){
				melhor=media[i];
			}
		}
		for(int i=0;i<T;i++){
			if(media[i]==melhor){
				cout<<codigo[i]<<" ";
			}
		}
		cout<<endl;
		cout<<endl;
		cin>>T;
		melhor=0;
	}
}
