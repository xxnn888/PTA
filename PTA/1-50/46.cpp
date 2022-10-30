//
// Created by 15218 on 2022/10/30.
//
//7-55 小于m的最大的10个素数
//        分数 10
//作者 王跃萍
//单位 东北石油大学
//给定一个整数m（200<m<20000），找出小于m的最大的10个素数。
//
//输入格式:
//直接输入一个正整数m（200<m<20000）。没有其它任何附加字符。
//
//输出格式:
//在一行中输出10个满足条件的素数，每个素数输出占6列。没有其它任何附加格式和字符。
//
//输入样例:
//229
//输出样例:
//227   223   211   199   197   193   191   181   179   173
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
bool is_prime(int x) //试除法判定质数
{
    if (x < 2) return false;
    for (int i = 2; i <= x / i; i ++ )
        if (x % i == 0)
            return false;
    return true;
}

using namespace std;

int main() {
    int n;
    cin >> n;
    int m = 0;
    for (int i = n-1; i >= 2; i--) {
        if (is_prime(i)) {
            printf("%6d",i);
            m++;
            if (m == 10) {
                return 0;
            }
        }
    }
    return 0;
}