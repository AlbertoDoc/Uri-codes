#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){

	string str="";

	cin>>str;

	double A,B,bonus;

	cin>>A>>B;
	cout<<fixed<<setprecision(2);
	bonus=B*0.15;
	
	cout<<"TOTAL = R$ "<<bonus+A<<endl;
}
