#include <iostream>
using namespace std;
int main () {
	long long A,B,C,D,somacd,somaab;
	cin >>A>>B>>C>>D;
	somacd=C+D;
	somaab=A+B;
	if (B>C && D>A && somacd>somaab && C>0 && D>0 && A%2==0){
		cout<<"Valores aceitos"<<endl;
	}else
		cout<<"Valores nao aceitos"<<endl;
}

