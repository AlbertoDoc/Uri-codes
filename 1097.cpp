#include <iostream>
using namespace std;
int main () {
  int I=1,J=7,cont=0;

  while(I<10){
    cout<<"I="<<I<<" "<<"J="<<J<<endl;
    J--;
    cont++;
    if(cont%3==0){
      J+=5;
      I+=2;
    }
  }
}
