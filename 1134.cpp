#include <iostream>
using namespace std;
int main () {

  long long N=9,alcool=0,gasolina=0,diesel=0;

  while(N!=4){
    if(N==1){
      alcool++;
      }
      else if(N==2){
        gasolina++;
      }
      else if(N==3){
        diesel++;
      }
    cin>>N;
  }
  cout<<"MUITO OBRIGADO"<<endl;
  cout<<"Alcool: "<<alcool<<endl;
  cout<<"Gasolina: "<<gasolina<<endl;
  cout<<"Diesel: "<<diesel<<endl;
}
