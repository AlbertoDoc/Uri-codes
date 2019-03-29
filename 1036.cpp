#include <iostream>
#include <cmath>
using namespace std;
int main () {
  double a,b,c,delta,x1,x2,d=0;
  cin >> a >> b >> c;
  delta=b*b-4.0*a*c;
  if(delta < d) {
    cout <<"Impossivel calcular!/n";
}
  if(delta >=0) {
    x1=(-b-sqrt(delta))/(2*a);
    x2=(-b+sqrt(delta))/(2*a);
    cout <<"R1 = "<<x1<<endl;
    cout <<"R2 = "<<x2<<endl;
}
return 0;
}
