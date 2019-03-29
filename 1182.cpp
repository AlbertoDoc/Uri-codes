#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main (){

	double mat[12][12],sum=0;

	long long N;

	string str="";

	cin>>N;

	cin>>str;

	cout<<fixed<<setprecision(1);

	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cin>>mat[i][j];
		}
	}
	
	for(int i=0;i<12;i++){
		sum+=mat[i][N];
	}
	if(str=="S"){
		cout<<sum<<endl;
	}
	if(str=="M"){
		cout<<sum/12.0<<endl;
	}
}
			
