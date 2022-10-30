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
    string s, s2;
    cin >> s;
    int a, b;
    cin >> a >> b;
    for (int i = a; i < a + b; ++i) {
        s2 += s[i];
    }
    cout << s2;
    return 0;
}