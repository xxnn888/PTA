//
// Created by 15218 on 2022/10/30.
//

//7-33 一维数组最小值及下标
//        分数 8
//作者 王跃萍
//单位 东北石油大学
//有一数组内放5个整数，要求找出第一次出现的最小数和它的下标，然后把它和数组中最前面的元素即第一个数对换位置。
//
//输入格式:
//在一行中输入5个用空格间隔的整数。
//
//输出格式:
//在第一行输出变化后的一维数组，每个数占4列列宽，在第二行输出“min=最小值，weizhi=下标”，最小值和下标都是原样输出，没有列宽控制。
//
//输入样例:
//5 2 6 1 9
//输出样例:
//1   2   6   5   9
//min=1,weizhi=3
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
    vector<int> v, v1;
    int min = 0, weizhi = 0;
    for (int i = 0; i < 5; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    v1 = v;
    sort(v1.begin(), v1.end());
    min = v1[0];
    for (int i = 0; i < 5; ++i) {
        if (v[i] == min) weizhi = i;
    }
    int temp = v[0];
    v[0] = v[weizhi];
    v[weizhi] = temp;
    for (int i = 0; i < 5; ++i) {
        printf("%4d", v[i]);
    }
    cout << endl;
    printf("min=%d,weizhi=%d", min, weizhi);
    return 0;
}