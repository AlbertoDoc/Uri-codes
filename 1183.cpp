#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char c;

    cin >> c;

    float M[12][12];

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }

    double result = 0;

    cout << fixed << setprecision(1);

    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            result += M[i][j];
        }
    }

    if (c == 'S') {
        cout << result << endl;
    } else {
        cout << result/66 << endl;
    }
    
}