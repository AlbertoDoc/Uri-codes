#include <iostream>
using namespace std;
int main () {
	long long N,t=0,saldo=0,X,Y,ultima=-1,melhor=0,inicio=1,minic=-1;
	int i;
	cin>>N;
	while (N!=0) {
		t++;
		cout<<"Teste "<<t<<endl;
		for(i=1;i<=N;i++){
			cin>>X>>Y;
			saldo+=X-Y;
			if(saldo<0){
				saldo=0;
				inicio=i+1;
			}
			if(saldo>melhor){
				ultima=i;
				melhor=saldo;
				minic=inicio;
			}
			if(saldo==melhor){
				if((i-inicio)>=(ultima-minic)){
					ultima=i;
					minic=inicio;
				}
			}
		}
		if(melhor<=0){
			cout<<"nenhum"<<endl;
		}
		else{
			cout<<minic<<" "<<ultima<<endl;
		}
		cout<<endl;
		saldo=0;
		ultima=-1;
		minic=-1;
		inicio=1;
		melhor=0;
		cin>>N;
	}
}
