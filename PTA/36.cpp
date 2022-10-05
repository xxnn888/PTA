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
    string s;
    int x = 0, y = 0, z = 0, m = 0;
    getline(cin, s);
    for (char i: s) {
        if (i >= 'a' && i <= 'z') {
            x++;
        } else if (i >= 'A' && i <= 'Z') {
            y++;
        } else if (i >= '0' && i <= '9') {
            z++;
        } else {
            m++;
        }
    }
    printf("小写字母=%d\n"
           "大写字母=%d\n"
           "数字=%d\n"
           "空格=%d\n", x, y, z, m);
    return 0;
}