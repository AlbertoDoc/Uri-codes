#include <iostream>
#include <iomanip>
using namespace std;
int main () {

  double A,B;
  long long resp=-1;
  cout<<fixed<<setprecision(2);
  repetir:
  cin>>A;

  while(A<0 || A>10){
    cout<<"nota invalida"<<endl;
    cin>>A;
  }
  cin>>B;
  while(B<0 || B>10){
    cout<<"nota invalida"<<endl;
    cin>>B;
  }
  cout<<"media = "<<(A+B)/2<<endl;
  while(resp!=1 || resp!=2){
    cout<<"novo calculo (1-sim 2-nao)"<<endl;
    cin>>resp;
    if(resp==1){
      goto repetir;
    }
    else if(resp==2){
      return 0;
    }
  }
}
