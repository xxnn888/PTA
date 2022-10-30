//
// Created by 15218 on 2022/10/30.
//
//7-29 选择法排序
//        分数 8
//作者 王跃萍
//单位 浙江大学
//输入10个无序的整数，用选择法对10个整数按升序排序。注意：要求排序只排3轮。
//
//输入格式:
//在一行中输入10个用空格间隔的无序整数。
//
//输出格式:
//在一行中输出变化后的数组，每个整数输出占5列。
//
//输入样例:
//8 5 2 6 7 4 1 9 12 10
//输出样例:
//1    2    4    6    7    5    8    9   12   10
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

int main() {
    int a[10];
    int min;
    for (int i = 0; i < 10; ++i) {
        min = i;
        cin >> a[i];
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = i + 1; j < 10; ++j) {
            if (a[j] < a[min]) min = j;
        }
        if (i != min) {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    for (int i = 0; i < 10; ++i) {
        printf("%5d", a[i]);
    }
    return 0;
}