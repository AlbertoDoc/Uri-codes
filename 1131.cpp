#include <iostream>
using namespace std;
int main () {

  long long vitinter=0,vitgremio=0,partidas=0,golinter,golgremio,empates=0,resp=1;

  while(resp==1){
    cin>>golinter>>golgremio;
    partidas++;
    cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    if(golinter>golgremio){
      vitinter++;
    }
    if(golgremio>golinter){
      vitgremio++;
    }
    if(golinter==golgremio){
      empates++;
    }
    cin>>resp;
  }
  cout<<partidas<<" grenais"<<endl;
  cout<<"Inter:"<<vitinter<<endl;
  cout<<"Gremio:"<<vitgremio<<endl;
  cout<<"Empates:"<<empates<<endl;
  if(vitinter>vitgremio){
    cout<<"Inter venceu mais"<<endl;
  }
  if(vitinter<vitgremio){
    cout<<"Gremio venceu mais"<<endl;
  }
  if(vitgremio==vitinter){
    cout<<"Nao houve vencedor"<<endl;
  }
}
