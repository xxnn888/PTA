#include<bits/stdc++.h>

using namespace std;

#include "function.h"

//��ͨ����
void print01(char val) {
    cout << val;
}

int main() {
    string s;
    getline(cin, s);
    std::reverse(s.begin(), s.end());
    int flag = false;
    int index = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != ' ') {
            if (flag == false) {    //������
                flag = true;
                index = i;    //��index��ʼ��Ϊ�ǿո���ĸ���±�, �����ʵĿ�ʼ
            }
            if (i == s.size() - 1) {   //��ת������һ�����ʺ���û�пո�
                reverse(index, i);
            }
        } else if (flag == true) {   //������
            flag = false;
            reverse(index, i - 1); //��ʱi��ǵ���һ�����ʵĽ���λ
        }
    }
    for_each(s.begin(), s.end(), print01);
    return 0;
}

