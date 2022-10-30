//
// Created by 15218 on 2022/10/4.
//

//
// Created by 15218 on 2022/10/4.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (char &i: s) {
        if (i >= 'A' && i <= 'Z') i += 32;
        else if (i >= 'a' && i <= 'z') i -= 32;
    }
    cout << s;
    return 0;
}
