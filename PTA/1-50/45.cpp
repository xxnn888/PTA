//
// Created by 15218 on 2022/11/1.
//

//7-54 泰勒展开式求sinx近似值
//        分数 10
//作者 王跃萍
//单位 东北石油大学
//用泰勒展开式求sinx近似值的多项式为：

//输入x求sinx的近似值，要求误差不大于0.00001。
//输入格式:
//直接输入一个实型数据。没有其它任何附加字符。
//输出格式:
//直接输出保留3位小数的实型结果。
//输入样例:
//2.5
//输出样例:
//0.598
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
#include <valarray>

using namespace std;


int main() {

    double x, jinsi = 0; // 定义输入的x和近似值
    long long power = 1, xishu = 1, fenmu = 1; // 次数，交错的系数和分母的阶乘
    cin >> x;
    while (fabs(jinsi - sin(x)) > 1e-5) // 0.00001可用1e-5替换
    {
        jinsi += xishu * pow(x, power) / fenmu;
        xishu *= -1; // 一加一减，交错系数
        power += 2; // 次数+2
        fenmu *= (power - 1) * power; // 分母阶乘不要重新计算！比如5!到7!直接乘6和7就好了
    }
    printf("%.3lf", jinsi);
    return 0;
}

