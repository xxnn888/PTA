#include<bits/stdc++.h>

using namespace std;

#include "function.h"

//普通函数
void print01(char val) {
    cout << val;
}

int main() {
    string s;
    getline(cin, s);
    std::reverse(s.begin(), s.end());
    int flag = false;
    int index = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != ' ') {
            if (flag == false) {    //进单词
                flag = true;
                index = i;    //将index初始化为非空格字母的下标, 即单词的开始
            }
            if (i == s.size() - 1) {   //反转后的最后一个单词后面没有空格
                reverse(index, i);
            }
        } else if (flag == true) {   //出单词
            flag = false;
            reverse(index, i - 1); //此时i标记的是一个单词的结束位
        }
    }
    for_each(s.begin(), s.end(), print01);
    return 0;
}

