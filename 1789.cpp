#include <iostream>
using namespace std;
int main () {

  long long N,maior=0;

  while(cin>>N){

      long long vet[N];
      maior=0;
      for(int i=0;i<N;i++){
        cin>>vet[i];
      }
      for(int i=0;i<N;i++){
        if(vet[i]>maior){
          maior=vet[i];
        }
      }
      if(maior>=20){
        cout<<3<<endl;
      }
      else if(maior>=10){
        cout<<2<<endl;
      }
      else if(maior<10){
        cout<<1<<endl;
      }
  }
}
