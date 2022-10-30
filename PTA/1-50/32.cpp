//
// Created by 15218 on 2022/10/30.
//
//7-36 矩阵转置
//        分数 10
//作者 王跃萍
//单位 东北石油大学
//将一个3×3矩阵转置（即行和列互换）。
//
//输入格式:
//在一行中输入9个小于100的整数，其间各以一个空格间隔。
//
//输出格式:
//输出3行3列的二维数组，每个数据输出占4列。
//
//输入样例:
//1 2 3 4 5 6 7 8 9
//输出样例:
//1   4   7
//2   5   8
//3   6   9
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
    int a[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> a[j][i];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%4d", a[i][j]);
        }
        cout<<endl;
    }
    return 0;
}