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
    int m, n, sum = 0;
    cin >> m >> n;
    for (int i = m; i <= n; ++i) {
        sum += i;
    }
    cout << sum;
    return 0;
}