#include <iostream>
#include <iomanip>
using namespace std;
int main () {

	int cod[2],Q;
	double valor,total=0;

	for(int i=0;i<2;i++){
		cin>>cod[i]>>Q>>valor;
		total+=valor*Q;
	}
	cout<<fixed<<setprecision(2);
	cout<<"VALOR A PAGAR: R$ "<<total<<endl;
		
}
