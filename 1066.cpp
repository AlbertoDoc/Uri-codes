#include <iostream>

using namespace std;
int main () {

  int N,contpar=0,contimpar=0,contpos=0,contneg=0;

  for(int i=0;i<5;i++){
    cin>>N;

    if(N%2==0){
      contpar++;
      if(N>0){
        contpos++;
      }
      else if(N<0){
        contneg++;
      }
    }
    else{
      contimpar++;
      if(N>0){
        contpos++;
      }
      else if(N<0){
        contneg++;
      }
    }
  }
  cout<<contpar<<" valor(es) par(es)"<<endl;
  cout<<contimpar<<" valor(es) impar(es)"<<endl;
  cout<<contpos<<" valor(es) positivo(s)"<<endl;
  cout<<contneg<<" valor(es) negativo(s)"<<endl;
}
