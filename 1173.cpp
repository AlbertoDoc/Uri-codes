#include <iostream>
using namespace std;
int main () {
  long long N;

  cin>>N;

  for(int i=0;i<10;i++){
    if(i==0){
      cout<<"N["<<i<<"] = "<<N<<endl;
    }
    else{
      cout<<"N["<<i<<"] = "<<N+N<<endl;
      N=N+N;
    }
  }
}
