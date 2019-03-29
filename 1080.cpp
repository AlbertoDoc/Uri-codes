#include <iostream>
using namespace std;
int main() {

  long long vet[100],maior=-1,pos=-1;

  for(int i=0;i<100;i++){
    cin>>vet[i];

  }
  for(int i=0;i<100;i++){
    if(vet[i]>maior){
      maior=vet[i];
      pos=i;
    }
  }
  cout<< maior<<endl;
  cout<<pos+1<<endl;
}
