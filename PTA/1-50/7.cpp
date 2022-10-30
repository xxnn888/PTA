//
// Created by 15218 on 2022/10/4.
//

//
// Created by 15218 on 2022/10/4.
//


#include <stdio.h>
#include <string.h>

int main() {
    char str[100], i, c;
    gets(str);
    scanf("%c", &c);
    for (i = 0; i < strlen(str); i++)
        if (str[i] != c) printf("%c", str[i]);
    return 0;
}
