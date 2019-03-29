#include <iostream>
#include <iomanip>
using namespace std;

int main () {
  double N,A,B,C;

  cin>>N;

  for(int i=0;i<N;i++){
    cin>>A>>B>>C;
    cout<<fixed<<setprecision(1);
    cout<<(A*2+B*3+C*5)/10.0<<endl;
  }
}
