#include <iostream>
#include <iomanip>
using namespace std;
int main () {
  double X,Y,N;
  cin>>N;

  for(int i=0;i<N;i++){
    cin>>X>>Y;

    if(Y==0){
      cout<<"divisao impossivel"<<endl;
    }
    else{
      cout<<fixed<<setprecision(1);
      cout<<X/Y<<endl;
    }
  }
}
