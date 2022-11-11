//
// Created by 15218 on 2022/10/31.
//

//7-46 大于m的最小素数
//        分数 10
//作者 王跃萍
//单位 东北石油大学
//编程求出大于m的最小素数。
//
//输入格式:
//直接输入一个正整数
//
//        输出格式:
//直接输出结果，没有任何附加格式控制。
//
//输入样例:
//12
//输出样例:
//13
//代码长度限制
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
bool is_prime(int x) //试除法判定质数
{
    if (x < 2) return false;
    for (int i = 2; i <= x / i; i++)
        if (x % i == 0)
            return false;
    return true;
}
int main() {
    int n;
    cin>>n;
    while (true){
        n++;
        if(is_prime(n)){
            cout<<n;
            return 0;
        }
    }
    return 0;
}