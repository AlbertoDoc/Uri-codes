#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double A,B,C,D,E,T, menor, maior;
	cin >> A >> B >> C >> D >> E;
	menor = maior = A;
	cout<<fixed<<setprecision(1);
	if (B < menor){
		menor = B;
	}if (C < menor){
		menor = C;
	}if (D < menor){
		menor = D;
	}if (E < menor){
		menor = E;
	}if (A > maior){
		maior = A;
	}if (B > maior){
		maior = B;
	}if (C > maior){
		maior = C;
	}if (D > maior){
		maior = D;
	}if (E > maior){
		maior = E;
	}if (menor==A && maior==B){
		T=C+D+E;
		cout<<T<<endl;
	}else if (menor==A && maior==C){
		T=B+D+E;
		cout<<T<<endl;
	}else if (menor==A && maior==D){
		T=B+C+E;
		cout<<T<<endl;
	}else if (menor==A && maior==E){
		T=B+C+D;
		cout<<T<<endl;
	}else if (menor==B && maior==A){
		T=C+D+E;
		cout<<T<<endl;
	}else if (menor==B && maior==C){
		T=A+D+E;
		cout<<T<<endl;
	}else if (menor==B && maior==D){
		T=A+C+E;
		cout<<T<<endl;
	}else if (menor==B && maior==E){
		T=A+C+D;
		cout<<T<<endl;
	}else if (menor==C && maior==A){
		T=B+D+E;
		cout<<T<<endl;
	}else if (menor==C && maior==B){
		T=A+D+E;
		cout<<T<<endl;
	}else if (menor==C && maior==D){
		T=A+B+E;
		cout<<T<<endl;
	}else if (menor==C && maior==E){
		T=A+B+D;
		cout<<T<<endl;
	}else if (menor==D && maior==A){
		T=B+C+E;
		cout<<T<<endl;
	}else if (menor==D && maior==B){
		T=A+C+E;
		cout<<T<<endl;
	}else if (menor==D && maior==C){
		T=A+B+E;
		cout<<T<<endl;
	}else if (menor==D && maior==E){
		T=A+B+C;
		cout<<T<<endl;
	}else if (menor==E && maior==A){
		T=B+C+D;
		cout<<T<<endl;
	}else if (menor==E && maior==B){
		T=A+C+D;
		cout<<T<<endl;
	}else if (menor==E && maior==C){
		T=A+B+D;
		cout<<T<<endl;
	}else if (menor==E && maior==D){
		T=A+B+C;
		cout<<T<<endl;
	}
}
