//
// Created by 15218 on 2022/10/5.
//

#include<stdio.h>

int main() {
    double a[1000];
    int i = 0, m;
    double s = 0;
    while (scanf("%lf", &a[i]) != EOF)
        i++;
    m = i;
    for (i = 0; i < m; i++)
        s += a[i];
    printf("%.2f\n", s / i);
    return 0;
}