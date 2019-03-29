#include <iostream>
using namespace std;
int main (){
  long long A,B,soma=0;

  cin>>A>>B;

  if(A<B){
    while(A<=B){
      if(A%13!=0){
        soma+=A;
      }
      A++;
    }
  }
  else{
    while(B<=A){
      if(B%13!=0){
        soma+=B;
      }
      B++;
    }
  }
    cout<<soma<<endl;
}
