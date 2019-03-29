#include <iostream>
using namespace std;
int main () {
  int N,X,contin=0,contout=0;
  cin>>N;

  for(int i=0;i<N;i++){
    cin>>X;
    if(X>9 && X<21){
      contin++;
    }
    else{
      contout++;
    }
  }
  cout<<contin<<" in"<<endl;
  cout<<contout<<" out"<<endl;
}
