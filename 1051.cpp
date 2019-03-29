#include <iostream>
#include <iomanip>
using namespace std;
int main () {
  double N,imposto=0;
  cin>>N;
  cout<<fixed<<setprecision(2);
  if(N<=2000.00){
    cout<<"Isento"<<endl;
    return 0;
  }
  if(N>2000.00 && N<3000.01){
    N-=2000;
    imposto+=N*0.08;
    N+=2000;
  }
  if(N>3000.00){
    imposto+=1000*0.08;
  }
  if(N>3000.00 && N<4500.01){
    N-=3000;
    imposto+=N*0.18;
    N+=3000;
  }
  if(N>4500.00){
    imposto+=1500*0.18;
    N-=4500;
    imposto+=N*0.28;
  }
  cout<<"R$ "<<imposto<<endl;
}
//IMCOMPLETO, OLHAR O PROBLEMA NOVAMENTE E TERMINAR
