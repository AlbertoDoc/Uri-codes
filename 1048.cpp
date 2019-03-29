#include <iostream>
#include <iomanip>
using namespace std;
int main (){
  double N;
  cin>>N;
  cout<<fixed<<setprecision(2);
  if(N<=400.00){
    cout<<"Novo salario: "<<N*1.15<<endl;
    cout<<"Reajuste ganho: "<<N*0.15<<endl;
    cout<<"Em percentual: 15 %"<<endl;
  }
  else if(N>=400.01 && N<=800.00){
    cout<<"Novo salario: "<<N*1.12<<endl;
    cout<<"Reajuste ganho: "<<N*0.12<<endl;
    cout<<"Em percentual: 12 %"<<endl;
  }
  else if(N>=800.01 && N<=1200.00){
    cout<<"Novo salario: "<<N*1.10<<endl;
    cout<<"Reajuste ganho: "<<N*0.10<<endl;
    cout<<"Em percentual: 10 %"<<endl;
  }
  else if(N>=1200.01 && N<=2000.00){
    cout<<"Novo salario: "<<N*1.07<<endl;
    cout<<"Reajuste ganho: "<<N*0.07<<endl;
    cout<<"Em percentual: 7 %"<<endl;
  }
  else if(N>2000.00){
    cout<<"Novo salario: "<<N*1.04<<endl;
    cout<<"Reajuste ganho: "<<N*0.04<<endl;
    cout<<"Em percentual: 4 %"<<endl;
  }
}
