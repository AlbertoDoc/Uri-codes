#include <iostream>

using namespace std;
int main () {

  long long A,B;
  cin>>A>>B;
  while(A!=B){
    if(A>B){
      cout<<"Decrescente"<<endl;
    }
    else{
      cout<<"Crescente"<<endl;
    }
    cin>>A>>B;
  }
}
