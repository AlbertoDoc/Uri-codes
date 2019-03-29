#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){

  double A,B,C;

  cin>>A>>B>>C;

  cout<<fixed<<setprecision(1);

  if(abs(B-C)<A && A<B+C){
    cout<<"Perimetro = "<<A+B+C<<endl;
  }
  else{
    cout<<"Area = "<<((A+B)*C)/2<<endl;
  }
}
