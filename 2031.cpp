#include <iostream>
#include <string>

using namespace std;
int main () {

	long long N;

	cin>>N;

	string jog1,jog2;

	for(int i=0;i<N;i++){
		cin>>jog1>>jog2;
		if(jog1=="ataque" && jog2=="pedra"){
			cout<<"Jogador 1 venceu"<<endl;
		}
		if(jog1=="pedra" && jog2=="ataque"){
			cout<<"Jogador 2 venceu"<<endl;
		}
		if(jog1=="pedra" && jog2=="papel"){
			cout<<"Jogador 1 venceu"<<endl;
		}
		if(jog1=="papel" && jog2=="pedra"){
			cout<<"Jogador 2 venceu"<<endl;
		}
		if(jog1=="papel" && jog2=="ataque"){
			cout<<"Jogador 2 venceu"<<endl;
		}
		if(jog1=="ataque" && jog2=="papel"){
			cout<<"Jogador 1 venceu"<<endl;
		}
		if(jog1=="papel" && jog2=="papel"){
			cout<<"Ambos venceram"<<endl;
		}
		if(jog1=="pedra" && jog2=="pedra"){
			cout<<"Sem ganhador"<<endl;
		}
		if(jog1=="ataque" && jog2=="ataque"){
			cout<<"Aniquilacao mutua"<<endl;
		}
	}
}

