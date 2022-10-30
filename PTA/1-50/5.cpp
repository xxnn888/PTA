//
// Created by 15218 on 2022/10/11.
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
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (j == 0) {
                printf("%-6d", i);
            } else {
                printf("%-6d", i * (j + 1));

            }
        }
        cout << endl;
    }
    return 0;
}