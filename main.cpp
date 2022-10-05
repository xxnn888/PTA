#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string string1;
        getline(cin, string1, '\n');
        cout << string1.size() << endl;
    }
    return 0;
}