#include <iostream>
#include <iomanip>
using namespace std;
int main () {

  double vet[6],soma=0,cont=0;

  for(int i=0;i<6;i++){
    cin>>vet[i];
    if(vet[i]>0){
      cont++;
      soma+=vet[i];
    }
  }
  cout<<cont<<" valores positivos"<<endl;
  cout<<fixed<<setprecision(1);
  cout<<soma/cont<<endl;
}
