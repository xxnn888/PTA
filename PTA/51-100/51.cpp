//
// Created by 15218 on 2022/10/30.
//

//7-62 字符串反正序连接
//        分数 10
//作者 王跃萍
//单位 东北石油大学
//将s所指字符串的反序和正序进行连接形成一个新串放在t所指的数组中。
//
//输入格式:
//在一行输入一个长度小于20的字符串。在字符串中不要出现换行符，空格，制表符。
//
//输出格式:
//直接输出变化后的字符串。
//
//输入样例:
//abc
//        输出样例:
//cbaabc
//        代码长度限制
//16 KB
//        时间限制
//400 ms
//        内存限制
//64 MB


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
    cout<<s+s1;
    return 0;
}