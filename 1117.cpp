#include <iostream>
#include <iomanip>
using namespace std;
int main () {
  double X,Y,Z,media,cont=0;

  while(cont!=2){
    cin>>X;
    if(X>=0.0 && X<=10.0){
      if(cont==0){
        Y=X;
      }
      if(cont==1){
        Z=X;
        cout<<fixed<<setprecision(2);
        cout<<"media = "<<(Y+Z)/2<<endl;
      }
      cont++;
    }
    else{
      cout<<"nota invalida"<<endl;
    }
  }
}
