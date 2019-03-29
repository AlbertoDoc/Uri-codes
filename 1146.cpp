#include <iostream>
using namespace std;
int main () {

  long long N=1;

  cin>>N;

  while(N!=0){

    for(int i=1;i<=N;i++){
      if(i!=N){
        cout<<i<<" ";
      }
      if(i==N){
        cout<<i<<endl;
      }
    }
    cin>>N;
  }
}
