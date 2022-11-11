//
// Created by 15218 on 2022/10/31.
//

//7-70 验证手机号
//        分数 5
//作者 贺细平
//单位 湖南农业大学
//某系统在新用户注册时必须输入手机号，为了提高系统效率，防止输错手机号，需要对手机号进行验证。
//验证规则为：
//（1）长度为11位
//（2）由数字0~9组成
//（3）必须是1开头
//        以上3个条件同时满足，则验证通过，否则为不通过。
//
//输入格式:
//在一行中一个字符串，长度不超过20个字符。
//
//输出格式:
//如果验证通过则输出yes，否则输出no。
//
//输入样例:
//13812345678
//输出样例:
//yes
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

bool isdigit(string s) {  //判断是否全为数字
    for (char i : s) {
        if (!(i >= '0' && i <= '9')){
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if (s.size() == 11 && isdigit(s) && s[0] == '1') {
        cout << "yes";
    } else {
        cout << "no";
    }
    return 0;
}