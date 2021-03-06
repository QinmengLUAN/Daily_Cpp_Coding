/*
编程题＃1：数字求和
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
给定一个正整数a，以及另外的5个正整数，问题是：这5个整数中，小于a的整数的和是多少？

输入
输入一行，只包括6个小于100的正整数，其中第一个正整数就是a。

输出
输出一行，给出一个正整数，是5个数中小于a的数的和。

样例输入
10 1 2 3 4 11

样例输出
10
*/
#include <iostream>
using namespace std;
int main() {
    int nums[6];
    for (int i = 0; i < 6; i++) {
        cin >> nums[i];
    }

    int res;
    for (int j = 1; j < 6; j++) {
        if (nums[j] < nums[0])
            res += nums[j];
    }
    cout << res << endl;

    return 0;
}