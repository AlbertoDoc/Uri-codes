#include <iostream>
#include <string>
using namespace std;
int main () {

	long long N,cont=0;

	cin>>N;
	cin.ignore();
	for(int i=0;i<N;i++){
		string vet;

		getline(cin,vet);

		for(int i=0;i<vet.size();i++){
			if(vet[i]=='1'){
				cont+=2;
			}
			else if(vet[i]=='2'){
				cont+=5;
			}
			else if(vet[i]=='3'){
				cont+=5;
			}
			else if(vet[i]=='4'){
				cont+=4;
			}
			else if(vet[i]=='5'){
				cont+=5;
			}
			else if(vet[i]=='6'){
				cont+=6;
			}
			else if(vet[i]=='7'){
				cont+=3;
			}
			else if(vet[i]=='8'){
				cont+=7;
			}
			else if(vet[i]=='9'){
				cont+=6;
			}
			else if(vet[i]=='0'){
				cont+=6;
			}
		}
		cout<<cont<<" leds"<<endl;
		cont=0;
	}
}
