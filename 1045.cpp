#include <iostream>
#include <cmath>
using namespace std;
int main () {
	double T[3];

	for(int i=0;i<3;i++){
		cin>>T[i];
	}
	for(int i=0;i<3-1;i++){
		int menor=i;
		for(int j=i+1;j<3;j++){
			if(T[j]>T[menor]){
				menor=j;
			}
		}
		swap (T[i],T[menor]);
	}
	if(T[0]>=(T[1]+T[2])){
		cout<<"NAO FORMA TRIANGULO"<<endl;
		return 0;
	}
	if(pow(T[0],2)==(pow(T[1],2)+pow(T[2],2))){
		cout<<"TRIANGULO RETANGULO"<<endl;
	}
	if(pow(T[0],2)>(pow(T[1],2)+pow(T[2],2))){
		cout<<"TRIANGULO OBTUSANGULO"<<endl;
	}
	if(pow(T[0],2)<(pow(T[1],2)+pow(T[2],2))){
		cout<<"TRIANGULO ACUTANGULO"<<endl;
	}
	if(T[0]==T[1] && T[0]==T[2] && T[1]==T[2]){
		cout<<"TRIANGULO EQUILATERO"<<endl;
	}
	else if(T[0]==T[1] || T[0]==T[2] || T[1]==T[0] || T[1]==T[2]){
		cout<<"TRIANGULO ISOSCELES"<<endl;
	}
}
