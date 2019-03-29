#include <iostream>
using namespace std;

int main() {
  float a,b,c,d,media;
  cin >> a >> b >> c >> d;
  media = (a+b+c+d)/4.0;
  if(media >= 7.0) {
    cout << "Aluno aprovado! Parabens!\n";
  }
  return 0;
}

