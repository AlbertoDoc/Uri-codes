#include <iostream>
#include <cmath>
using namespace std;
int main () {
	long long T,N[15],I[5],P[5],cont=0;
	int i,j=0,k=0,m;
	
	P[0]=0;
	P[1]=0;
	P[2]=0;
	P[3]=0;
	P[4]=0;
	I[0]=0;
	I[1]=0;
	I[2]=0;
	I[3]=0;
	I[4]=0;
	for(i=0;i<15;i++){
		cin>>T;
		if(abs(T)%2==0){
			P[j]=T;
			j++;
			if(P[4]!=0){
				j=0;
				cout<<"par[0] = "<<P[0]<<endl;
				cout<<"par[1] = "<<P[1]<<endl;
				cout<<"par[2] = "<<P[2]<<endl;
				cout<<"par[3] = "<<P[3]<<endl;
				cout<<"par[4] = "<<P[4]<<endl;
				P[0]=0;
				P[1]=0;
				P[2]=0;
				P[3]=0;
				P[4]=0;
			}
		}
		if(abs(T)%2!=0){
			I[k]=T;
			k++;
			if(I[4]!=0){
				k=0;
				cout<<"impar[0] = "<<I[0]<<endl;
				cout<<"impar[1] = "<<I[1]<<endl;
				cout<<"impar[2] = "<<I[2]<<endl;
				cout<<"impar[3] = "<<I[3]<<endl;
				cout<<"impar[4] = "<<I[4]<<endl;
				I[0]=0;
				I[1]=0;
				I[2]=0;
				I[3]=0;
				I[4]=0;
			}
		}
	if(i==14){
		if(I[0]!=0){
			cout<<"impar[0] = "<<I[0]<<endl;
		}if(I[1]!=0){
			cout<<"impar[1] = "<<I[1]<<endl;
		}if(I[2]!=0){
			cout<<"impar[2] = "<<I[2]<<endl;
		}if(I[3]!=0){
			cout<<"impar[3] = "<<I[3]<<endl;
		}if(I[4]!=0){
			cout<<"impar[4] = "<<I[4]<<endl;
		}if(P[0]!=0){
			cout<<"par[0] = "<<P[0]<<endl;
		}if(P[1]!=0){
			cout<<"par[1] = "<<P[1]<<endl;
		}if(P[2]!=0){
			cout<<"par[2] = "<<P[2]<<endl;
		}if(P[3]!=0){
			cout<<"par[3] = "<<P[3]<<endl;
		}if(P[4]!=0){
			cout<<"par[4] = "<<P[4]<<endl;
		}
	}
		
	}
}
//esta faltando somente imprimir os vetores quando termina a entrada.
