#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double N1, N2, N3, N4, M,E,M2;
	cin >>N1>>N2>>N3>>N4;
	M=((N1*2)+(N2*3)+(N3*4)+N4)/10;
	if (M>=7){
		cout <<"Media: "<<M<<endl;
		cout <<"Aluno Aprovado."<<endl;
	}else if (5>M){
		cout<<"Media: "<<M<<endl;
		cout <<"Aluno reprovado."<<endl;
	}else if (M>=5 && M<=6.9){
		cin>>E;
		M2=(M+E)/2;	
		cout<<"Media: "<<M<<endl;
		cout<<"Aluno em exame."<<endl;
		cout<<"Nota do exame: "<<E<<endl;
		}if (M2>=5){
			cout<<"Aluno aprovado."<<endl;
			cout<<"Media final: "<<M2<<endl;
			}else{
				cout<<"Aluno reprovado."<<endl;
				cout<<"Media final: "<<M2<<endl;
			}
		}

