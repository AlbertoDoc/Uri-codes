#include <iostream>
using namespace std;
int main () {
  long long N,X,cont2=0,cont3=0,cont4=0,cont5=0;

  cin>>N;

  for(int i=0;i<N;i++){
    cin>>X;
    if(X%2==0){
      cont2++;
    }
    if(X%3==0){
      cont3++;
    }
    if(X%4==0){
      cont4++;
    }
    if(X%5==0){
      cont5++;
    }
  }
  cout<<cont2<<" Multiplo(s) de 2"<<endl;
  cout<<cont3<<" Multiplo(s) de 3"<<endl;
  cout<<cont4<<" Multiplo(s) de 4"<<endl;
  cout<<cont5<<" Multiplo(s) de 5"<<endl;
}
