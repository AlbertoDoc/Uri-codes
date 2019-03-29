#include <iostream>

using namespace std;
int main () {
  int N,cont=0;

  cin>>N;

  while(cont<6){
    if(N%2!=0){
      cout<<N<<endl;
      N++;
      cont++;
    }
    else{
      N++;
    }
  }
}
