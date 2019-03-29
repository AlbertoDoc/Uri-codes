#include <iostream>
#include <string>

using namespace std;
int main () {

  long long N,X;

  string str="";

  cin>>N>>X;

  for(int i=0;i<X;i++){
    cin>>str;

    if(str=="fechou"){
      N+=1;
    }
    if(str=="clicou"){
      N-=1;
    }
  }
  cout<<N<<endl;

}
