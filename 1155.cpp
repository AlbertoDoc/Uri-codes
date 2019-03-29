#include <iostream>
#include <iomanip>
using namespace std;
int main (){
  double N=1,S=0;

  while(N<=100){
    S+=1/N;
    N++;
  }
  cout<<fixed<<setprecision(2);
  cout<<S<<endl;
}
