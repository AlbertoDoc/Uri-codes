#include <iostream>
#include <string>
using namespace std;
int main () {
	string sheldon,raj;

	long long N,cont=1,cont2=0;

	cin>>N;

	while(cont2<N){
		cin>>sheldon>>raj;

		if(sheldon=="pedra" && raj=="pedra"){
			cout<<"Caso #"<<cont<<": "<<"De novo!"<<endl;
		}
		if(sheldon=="papel" && raj=="papel"){
			cout<<"Caso #"<<cont<<": "<<"De novo!"<<endl;
		}
		if(sheldon=="tesoura" && raj=="tesoura"){
			cout<<"Caso #"<<cont<<": "<<"De novo!"<<endl;
		}
		if(sheldon=="lagarto" && raj=="lagarto"){
			cout<<"Caso #"<<cont<<": "<<"De novo!"<<endl;
		}
		if(sheldon=="Spock" && raj=="Spock"){
			cout<<"Caso #"<<cont<<": "<<"De novo!"<<endl;
		}
		if(sheldon=="tesoura" && raj=="papel"){
			cout<<"Caso #"<<cont<<": "<<"Bazinga!"<<endl;
		}
		if(sheldon=="papel" && raj=="tesoura"){
			cout<<"Caso #"<<cont<<": "<<"Raj trapaceou!"<<endl;
		}
		if(sheldon=="papel" && raj=="pedra"){
			cout<<"Caso #"<<cont<<": "<<"Bazinga!"<<endl;
		}
		if(sheldon=="pedra" && raj=="papel"){
			cout<<"Caso #"<<cont<<": "<<"Raj trapaceou!"<<endl;
		}
		if(sheldon=="pedra" && raj=="lagarto"){
			cout<<"Caso #"<<cont<<": "<<"Bazinga!"<<endl;
		}
		if(sheldon=="lagarto" && raj=="pedra"){
			cout<<"Caso #"<<cont<<": "<<"Raj trapaceou!"<<endl;
		}
		if(sheldon=="lagarto" && raj=="Spock"){
			cout<<"Caso #"<<cont<<": "<<"Bazinga!"<<endl;
		}
		if(sheldon=="Spock" && raj=="lagarto"){
			cout<<"Caso #"<<cont<<": "<<"Raj trapaceou!"<<endl;
		}
		if(sheldon=="Spock" && raj=="tesoura"){
			cout<<"Caso #"<<cont<<": "<<"Bazinga!"<<endl;
		}
		if(sheldon=="tesoura" && raj=="Spock"){
			cout<<"Caso #"<<cont<<": "<<"Raj trapaceou!"<<endl;
		}
		if(sheldon=="tesoura" && raj=="lagarto"){
			cout<<"Caso #"<<cont<<": "<<"Bazinga!"<<endl;
		}
		if(sheldon=="lagarto" && raj=="tesoura"){
			cout<<"Caso #"<<cont<<": "<<"Raj trapaceou!"<<endl;
		}
		if(sheldon=="lagarto" && raj=="papel"){
			cout<<"Caso #"<<cont<<": "<<"Bazinga!"<<endl;
		}
		if(sheldon=="papel" && raj=="lagarto"){
			cout<<"Caso #"<<cont<<": "<<"Raj trapaceou!"<<endl;
		}
		if(sheldon=="papel" && raj=="Spock"){
			cout<<"Caso #"<<cont<<": "<<"Bazinga!"<<endl;
		}
		if(sheldon=="Spock" && raj=="papel"){
			cout<<"Caso #"<<cont<<": "<<"Raj trapaceou!"<<endl;
		}
		if(sheldon=="Spock" && raj=="pedra"){
			cout<<"Caso #"<<cont<<": "<<"Bazinga!"<<endl;
		}
		if(sheldon=="pedra" && raj=="Spock"){
			cout<<"Caso #"<<cont<<": "<<"Raj trapaceou!"<<endl;
		}
		if(sheldon=="pedra" && raj=="tesoura"){
			cout<<"Caso #"<<cont<<": "<<"Bazinga!"<<endl;
		}
		if(sheldon=="tesoura" && raj=="pedra"){
			cout<<"Caso #"<<cont<<": "<<"Raj trapaceou!"<<endl;
		}
		cont2++;
		cont++;
	}
}
