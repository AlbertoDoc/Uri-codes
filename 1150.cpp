#include <iostream>

using namespace std;

int main () {
    int X, Z;

    cin >> X;

    cin >> Z;

    while (Z <= X) {
        cin >> Z;
    }

    int soma = X;
    int count = 1;
    while (soma <= Z) {
        X += 1;
        soma += X;
        count++;
    }

    cout << count << endl;
}