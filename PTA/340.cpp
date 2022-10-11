//
// Created by 15218 on 2022/10/6.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 1 || n > 9) {
        cout << "INPUT ERROR." << endl;
        return 0;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (j == i) {
                cout << i << "X" << j << "=" << j * i;
            } else {
                cout << i << "X" << j << "=" << j * i << "\t";

            }
        }
        cout << endl;
    }
    return 0;
}