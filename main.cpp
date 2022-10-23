#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int main() {
    int a[3][4];
    int sum = 0;
    int b = 0, t;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (j == 5) {
                sum += a[i][j];
                a[i][j] = sum;
            } else if (j == 4) {
                a[i][j] = b;
            } else {
                cin >> a[i][j];
            }
        }
        sum = 0;
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}