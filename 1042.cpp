#include <bits/stdc++.h>


using namespace std;
int main () {
  int X;
  vector <int> vet1;
  vector <int> vet2;

  for(int i=0;i<3;i++){
    cin>>X;
    vet1.push_back(X);
    vet2.push_back(X);
  }
  sort(vet1.begin(), vet1.end());

  for(int i=0;i<3;i++){
    cout<< vet1[i] << endl;
  }
  cout<<endl;
  for(int i=0;i<3;i++){
    cout<<vet2[i]<<endl;
  }
}
