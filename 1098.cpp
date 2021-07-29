#include <iostream>

using namespace std;

int main() {
  double soma;

  for (int i = 0; i <= 10; i++) {
    for (int j = 1; j < 4; j++) {
      soma = i*0.2;
        cout<<"I="<<soma<<" J="<<j+soma<<endl;
    }
  }
}