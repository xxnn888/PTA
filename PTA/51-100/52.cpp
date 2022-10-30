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
    string s1;
    cin >> s1;
    std::reverse(s1.begin(), s1.end());
    cout << s1;
    return 0;
}