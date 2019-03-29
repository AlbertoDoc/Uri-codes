#include <iostream>
#include <string>
using namespace std;
int main () {
	string olhos;

	long long N,soma=0;

	while(getline(cin,olhos)){
		if(olhos=="--*"){
			N=1;
			soma+=N;
		}
		if(olhos=="-*-"){
			N=2;
			soma+=N;
		}
		if(olhos=="-**"){
			N=3;
			soma+=N;
		}
		if(olhos=="*--"){
			N=4;
			soma+=N;
		}
		if(olhos=="*-*"){
			N=5;
			soma+=N;
		}	
		if(olhos=="**-"){
			N=6;
			soma+=N;
		}
		if(olhos=="***"){
			N=7;
			soma+=N;
		}
		if(olhos=="caw caw"){
			cout<<soma<<endl;
			soma=0;
		}
	}
}
