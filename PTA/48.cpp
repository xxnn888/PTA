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
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(), greater<int>());
    printf("max=%d,cmax=%d", v[0], v[1]);
    return 0;
}