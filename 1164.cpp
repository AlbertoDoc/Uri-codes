#include <iostream>
using namespace std;
int main () {

  long long N,M,soma=0;

  cin>>N;

  for(int i=0;i<N;i++){
    cin>>M;
    for(int j=1;j<M;j++){
      if(M%j==0){
        soma+=j;
      }
    }
    if(soma==M){
      cout<<M<<" eh perfeito"<<endl;
    }
    else{
      cout<<M<<" nao eh perfeito"<<endl;
    }
    soma=0;
  }
}
