#include <iostream>
#include <iomanip>
using namespace std;
int main () {

  double N=1,S=0,M=1;

  while(N<39){
    S+=N/M;
    N+=2;
    M+=M;
  }
  cout<<fixed<<setprecision(2);
    cout<<S<<endl;
}
