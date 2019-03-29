#include <iostream>
using namespace std;
int main (){
  long long N;
  cin>>N;
  if(N==61){
    cout<<"Brasilia";
  }
  else if(N==71){
    cout<<"Salvador";
  }
  else if(N==11){
    cout<<"Sao Paulo";
  }
  else if(N==21){
    cout<<"Rio de Janeiro";
  }
  else if(N==32){
    cout<<"Juiz de Fora";
  }
  else if(N==19){
    cout<<"Campinas";
  }
  else if(N==27){
    cout<<"Vitoria";
  }
  else if(N==31){
    cout<<"Belo Horizonte";
  }
  else{
    cout<<"DDD nao cadastrado";
  }
  cout<<endl;
}
