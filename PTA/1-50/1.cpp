//
// Created by 15218 on 2022/10/4.
//
//
// Created by 15218 on 2022/10/4.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    for (int i = 0; i < 3; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if (i == 2) cout << v[i] << "\n";
        else {
            cout << v[i] << ",";
        }
    }
    return 0;
}

