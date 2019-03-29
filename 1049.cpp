#include <iostream>
#include <string>
using namespace std;
int main (){

	string str[3];

	cin>>str[0]>>str[1]>>str[2];

	if(str[0]=="vertebrado"){
		if(str[1]=="ave"){
			if(str[2]=="carnivoro"){
				cout<<"aguia"<<endl;
			}
			if(str[2]=="onivoro"){
				cout<<"pomba"<<endl;
			}
		}
		if(str[1]=="mamifero"){
			if(str[2]=="onivoro"){
				cout<<"homem"<<endl;
			}
			if(str[2]=="herbivoro"){
				cout<<"vaca"<<endl;
			}
		}
	}
	if(str[0]=="invertebrado"){
		if(str[1]=="inseto"){
			if(str[2]=="hematofago"){
				cout<<"pulga"<<endl;
			}
			if(str[2]=="herbivoro"){
				cout<<"lagarta"<<endl;
			}
		}
		if(str[1]=="anelideo"){
			if(str[2]=="hematofago"){
				cout<<"sanguessuga"<<endl;
			}
			if(str[2]=="onivoro"){
				cout<<"minhoca"<<endl;
			}
		}
	}
}
		
		
