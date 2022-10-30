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
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * n - (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}