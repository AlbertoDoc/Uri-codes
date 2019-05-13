#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

  vector <int> sorteado;
  vector <int> jogado;

  int N,cont=0;

  for(int i=0;i<6;i++){
    cin>>N;
    sorteado.push_back(N);
  }
  for(int i=0;i<6;i++){
    cin>>N;
    jogado.push_back(N);
  }

  for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
      if(sorteado[i]==jogado[j]){
        cont++;
      }
    }
  }

  if(cont==3){
    cout<<"terno";
  }
  else if(cont==4){
    cout<<"quadra";
  }
  else if(cont==5){
    cout<<"quina";
  }
  else if(cont==6){
    cout<<"sena";
  }
  else{
    cout<<"azar";
  }
  cout<<endl;
}
