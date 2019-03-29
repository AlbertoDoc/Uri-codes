#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	int N,M;

	double meio,ini=0.0,fim=0.0,soma=0.0;
	cin>>N>>M;

	while(N!=0 && M!=0){
		int maior;

		int vet[N];

		for(int i=0;i<N;i++){
			cin>>vet[i];
		}
		for(int i=0;i<N;i++){
			fim+=vet[i];
		}
		if(M>fim){
			cout<<"-.-"<<endl;
		}
		else if(M==fim){
			cout<<":D"<<endl;
		}
		else{
			while(ini<=fim && (fim-ini)>0.00000001){
				soma=0.0;
				meio=(fim+ini)/2;
				for(int i=0;i<N;i++){
					if(vet[i]>meio){
						soma+=vet[i]-meio;
					}
				}
				if(soma<M){
					fim=meio;
				}
				else if (soma>M){
					ini=meio;
				}
				if (fim==M){
					cout<<":D"<<endl;
					break;
				}
			}
			cout<<fixed<<setprecision(4);
			cout<<meio<<endl;
		}
		ini=0.0;
		fim=0.0;
		soma=0.0;
		cin>>N>>M;
	}
}
//VALORES DA SAIDA DANDO CERTO, SO FALTA NOS CASOS ":D" E "-.-"
