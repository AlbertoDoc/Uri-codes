#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char operation;
    double matrix[12][12];
    double result = 0;

    cout << fixed << setprecision(1);

    cin >> operation;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> matrix[i][j];
        }
    }

    int jIndex = 1;
    
    for (int i = 11; i >= 1; i--) {
        for (int j = 11; j >= jIndex; j--) {
            result += matrix[i][j];
        }
        jIndex++;
    }    

    if (operation == 'S') {
        cout << result << endl;
    } else {
        cout << result / 66.0 << endl;
    }
}