#include <iostream>
#include <iomanip>
using namespace std;
int main () {

	double mat[12][12],soma=0,cont=0;
	long long L;
	char R;


	cin>>L;

	cin>>R;

	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cin>>mat[i][j];
		}
	}
		for(int i=0;i<12;i++){
			soma+=mat[L][i];
		}
	cout<<fixed<<setprecision(1);
	if(R=='S'){
		cout<<soma<<endl;
	}
	else if(R=='M'){
		cout<<soma/12<<endl;
	}
}
