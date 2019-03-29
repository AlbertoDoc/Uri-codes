#include <iostream>
using namespace std;
int main () {
  long long N;

  cin>>N;

  for(int i=1;i<=N;i++){
    if(i!=N){
      cout<<"Ho ";
    }
    if(i==N){
      cout<<"Ho!"<<endl;
    }
  }
}
