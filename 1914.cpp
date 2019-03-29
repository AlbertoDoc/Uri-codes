#include <iostream>
#include <string>
using namespace std;
int main() {
	int cont=0,N;

	cin>>N;

	while(cont<N){
		cont++;


		int numero1,numero2;
		string nome1,nome2,cond1,cond2;
		cin>>nome1>>cond1>>nome2>>cond2;
	
		cin>>numero1>>numero2;
	
		if(numero1%2==0 && (numero2+1)%2==0){ // PAR E IMPAR NAO OK

			if(cond2=="IMPAR"){
			cout<<nome2<<endl;
			}
			if(cond1=="IMPAR"){
				cout<<nome1<<endl;
			}
		}
		if((numero1+1)%2==0 && numero2%2==0){ // IMPAR E PAR OK

			if(cond2=="IMPAR"){
			cout<<nome2<<endl;
			}
			if(cond1=="IMPAR"){
				cout<<nome1<<endl;
			}
		}
		if((numero1+1)%2==0 && (numero2+1)%2==0){ // IMPAR E IMPAR OK
			if(cond2=="PAR"){
				cout<<nome2<<endl;
			}
			if(cond1=="PAR"){
				cout<<nome1<<endl;
			}
		}
		if(numero1%2==0 && numero2%2==0){ // PAR E PAR OK
			if(cond2=="PAR"){
				cout<<nome2<<endl;
			}
			if(cond1=="PAR"){
				cout<<nome1<<endl;
			}
		}
	}
}
