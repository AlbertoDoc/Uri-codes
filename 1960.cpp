#include <iostream>
#include <string>
using namespace std;
int main() {
	long long paginas,i=0;
	cin>>paginas;

	
	if(paginas>=900 && paginas<1000){
		cout<<"CM";
		paginas-=900;
	}
	if(paginas>=800 && paginas<900){
		cout<<"DCCC";
		paginas-=800;
	}
	if(paginas>=700 && paginas<800){
		cout<<"DCC";
		paginas-=700;
	}
	if(paginas>=600 && paginas<700){
		cout<<"DC";
		paginas-=600;
	}
	if(paginas>=500 && paginas<600){
		cout<<"D";
		paginas-=500;
	}
	if(paginas>=400 && paginas<500){
		cout<<"CD";
		paginas-=400;
	}
	if(paginas>=300 && paginas<400){
		cout<<"CCC";
		paginas-=300;
	}
	if(paginas>=200 && paginas<300){
		cout<<"CC";
		paginas-=200;
	}
	if(paginas>=100 && paginas<200){
		cout<<"C";
		paginas-=100;
	}
	if(paginas>=90 && paginas<100){
		cout<<"XC";
		paginas-=90;
	}
	if(paginas>=80 && paginas<90){
		cout<<"LXXX";
		paginas-=80;
	}
	if(paginas>=70 && paginas<80){
		cout<<"LXX";
		paginas-=70;
	}
	if(paginas>=60 && paginas<70){
		cout<<"LX";
		paginas-=60;
	}
	if(paginas>=50 && paginas<60){
		cout<<"L";
		paginas-=50;
	}
	if(paginas>=40 && paginas<50){
		cout<<"XL";
		paginas-=40;
	}
	if(paginas>=30 && paginas<40){
		cout<<"XXX";
		paginas-=30;
	}
	if(paginas>=20 && paginas<30){
		cout<<"XX";
		paginas-=20;
	}
	if(paginas>=10 && paginas<20){
		cout<<"X";
		paginas-=10;
	}
	if(paginas==9){
		cout<<"IX";
		paginas-=9;
	}
	if(paginas==8){
		cout<<"VIII";
		paginas-=8;
	}
	if(paginas==7){
		cout<<"VII";
		paginas-=7;
	}
	if(paginas==6){
		cout<<"VI";
		paginas-=6;
	}
	if(paginas==5){
		cout<<"V";
		paginas-=5;
	}
	if(paginas==4){
		cout<<"IV";
		paginas-=4;
	}
	if(paginas==3){
		cout<<"III";
		paginas-=3;
	}
	if(paginas==2){
		cout<<"II";
		paginas-=2;
	}
	if(paginas==1){
		cout<<"I";
		paginas-=1;
	}
	cout<<endl;
}
