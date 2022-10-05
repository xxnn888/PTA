//
// Created by 15218 on 2022/10/5.
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
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / (2 * i - 1);
    }
    printf("%.2f", sum);
    return 0;
}
