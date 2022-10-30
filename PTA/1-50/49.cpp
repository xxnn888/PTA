//
// Created by 15218 on 2022/10/30.
//

//7-60 对a[10]数组中的素数排序
//        分数 10
//作者 王跃萍
//单位 东北石油大学
//输入10个正整数到a数组中，对a[10]数组中的素数升序排序。
//
//输入格式:
//在一行中输入10个用空格间隔的正整数，数据之间只能各用1个空格间隔。
//
//输出格式:
//在一行中输出升序的素数序列，每个数输出占4列列宽。
//
//输入样例:
//9 5 1 6 4 8 7 2 9 11
//输出样例:
//2   5   7  11
//代码长度限制
//16 KB
//        时间限制
//400 ms
//        内存限制
//64 MB
//

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
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        int a;
        cin >> a;
        if (is_prime(a)) {
            v.push_back(a);
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); ++i) {
        printf("%4d", v[i]);
    }
    return 0;
}