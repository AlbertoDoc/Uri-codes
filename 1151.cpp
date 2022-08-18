#include <iostream>

using namespace std;

int main() {
    long long x;
    cin >> x;

    long long lastValue = 0;
    long long actualValue = 1;
    for (int i = 0; i < x-1; i++) {
        if (i == 0) {
            cout << 0 << " " << 1;
        } else {
            cout << " ";

            int temp = actualValue;

            actualValue += lastValue;
            lastValue = temp;

            cout << actualValue;
        }
    }

    cout << endl;
}