/*
编程题＃6：循环移动
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
给定一组整数，要求利用数组把这组数保存起来，再利用实现对数组中的数循环移动。假定共有n个整数，则要使前面各数顺序向后移m个位置，并使最后m各数变为最前面的m各数。

注意，不要用先输出后m个数，再输出前n-m个数的方法实现，也不要用两个数组的方式实现。

要求只用一个数组的方式实现，一定要保证在输出结果时，输出的顺序和数组中数的顺序是一致的。

输入
输入有两行：第一行包含一个正整数n和一个正整数m，第二行包含n个正整数。每两个正整数中间用一个空格分开。

输出
输出有一行：经过循环移动后数组中整数的顺序依次输出，每两个整数之间用空格分隔。

样例输入
11 4
15 3 76 67 84 87 13 67 45 34 45

样例输出
67 45 34 45 15 3 76 67 84 87 13

提示
这是一道经典的算法问题，在企业面试里出现概率很高。除了循环m次每次移动一个数以外（这样需要对数组操作m*n次），你还能想到更高效的算法吗（只用操作3*n次）？依然要求不使用额外数组，在原数组上移位之后顺序输出。
*/
#include<iostream>  
using namespace std;  
int main() {  
    int n, m;  
    cin >> n >> m;
    m %= n;
    int number[500];  
    for (int i = 0; i < n; i++) {  
        cin >> number[i];  
    }  
    for (int i = 0; i < m; i++) {  
        int temp = number[0];  
        int temp1 = number[1];  
        int temp2 = number[n - 1];  
        for (int j = 1; j < n; ) {  
            temp1 = number[j];  
            number[j] = temp;  
            temp = temp1;  
            j++;  
        }  
        number[0] = temp2;  
    }  
    for (int i = 0; i < n; i++) {  
        if (i != n - 1)  
            cout << number[i] << ' ';  
        else  
            cout << number[i] << endl;  
    }  
    return 0;  
} 