#include <iostream>
#include <cmath>
using namespace std;
int main() {
  long long N,n1,r1,n2,r2,n3,r3,n4,r4,n5,r5,n6,r6,n7,r7;
  cin >> N;
  n1=N/100;
  r1=N%100;
  n2=r1/50;
  r2=r1%50;
  n3=r2/20;
  r3=r2%20;
  n4=r3/10;
  r4=r3%10;
  n5=r4/5;
  r5=r4%5;
  n6=r5/2;
  r6=r5%2;
  n7=r6/1;
  r7=r6%1;
  cout <<n1<<" nota(s) de R$ 100,00"<<endl;
  cout <<n2<<" nota(s) de R$ 50,00"<<endl;
  cout <<n3<<" nota(s) de R$ 20,00"<<endl;
  cout <<n4<<" nota(s) de R$ 10,00"<<endl;
  cout <<n5<<" nota(s) de R$ 5,00"<<endl;
  cout <<n6<<" nota(s) de R$ 2,00"<<endl;
  cout <<n7<<" nota(s) de R$ 1,00"<<endl;
}
