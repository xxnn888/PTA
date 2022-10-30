#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int main() {
    string s,s1;
    cin >> s;
    s1=s;
    std::reverse(s.begin(), s.end());
    cout<<s1+s;
    return 0;
}