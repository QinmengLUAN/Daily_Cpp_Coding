/*
编程题＃1：实现冒泡排序
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
请根据自己的理解编写冒泡排序算法，数组大小1000以内

输入
第一行是n，表示数组的大小

接着n行是数组的n个元素

输出
排序之后的结果

一个元素一行

请完全按照如下的程序书写代码，并在书写的过程中体会优秀的代码风格：
*/
#include <iostream>
using namespace std;

int main() {
  int n, a[1000]; // 一共n个数，n不超过1000。a用来保存这些数
  cout << "数组大小为: " << endl;
  cin >> n;  
  // 输入n个数 
  cout << "请回车输入" << n << "个数" << endl; 
  for (int i = 0; i < n; i++) {
      cin >> a[i];
  }
  // 冒泡，不断比较相邻的两个数，如果顺序错了，那么就交换
  for (int i = 0; i < n - 1; i++) {
    for (int j = 1; j < n - i; j++) {      
      if (a[j - 1] > a[j]) {
        int temp = a[j];
        a[j] = a[j - 1];
        a[j - 1] = temp;
      }    
    }  
  }  
  // 依次输出
  cout << "排序好的数组为: " << endl;
  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;  
  }  
  return 0;
}