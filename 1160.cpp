#include <iostream>
using namespace std;
int main() {
	long long N,A,anos,cont=0,C1,C2;
	double T1,T2;
	int i,k,t;
	cin>>N;
	for(i=0;i<N;i++){	
		cin>>C1>>C2>>T1>>T2;
		cont=0;
		
			while (C2>=C1){
				C1*=(double)(T1/100)+1;
				C2*=(double)(T2/100)+1;
				cont++;
				if (cont>100){
					break;
				}//if(cont>100) do break
			}//while(C2>=C1)
		if(cont>100){
			cout<<"Mais de 1 seculo."<<endl;
		}//if(cont>100) do cout
		else {
			cout<<cont<<" anos."<<endl;
		}//else do cout
		
	}//for
}
