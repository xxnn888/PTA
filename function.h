//
// Created by 15218 on 2022/10/30.
//

#ifndef PTA_FUNCTION_H
#define PTA_FUNCTION_H

bool is_prime(int x) //试除法判定质数
{
    if (x < 2) return false;
    for (int i = 2; i <= x / i; i++)
        if (x % i == 0)
            return false;
    return true;
}

void swap(int a, int b) //交换两个数
{
    int temp = a;
    a = b;
    b = temp;
}

bool isdigit(string s) {  //判断是否全为数字
    for (char i : s) {
        if (!(i >= '0' && i <= '9')){
            return false;
        }
    }
    return true;
}

#endif //PTA_FUNCTION_H
