/*# **L1-029 是不是太胖了 （5 point(s)）**
>Author: 陈越
Organization: 浙江大学
Time Limit: 400 ms
Memory Limit: 64 MB
Code Size Limit: 16 KB

据说一个人的标准体重应该是其身高（单位：厘米）减去100、再乘以0.9所得到的公斤数。已知市斤是公斤的两倍。现给定某人身高，请你计算其标准体重应该是多少？（顺便也悄悄给自己算一下吧……）

## **输入格式：**
输入第一行给出一个正整数H（100 < H ≤ 300），为某人身高。

## **输出格式：**
在一行中输出对应的标准体重，单位为市斤，保留小数点后1位。

## **输入样例：**
>169

## **输出样例：**
>124.2

## **代码**
```*/
#include<iostream>
#include<iomanip>
int main() {
	int high;
	float weight;

	std::cin >> high;

	weight = 2 * ((high - 100)*0.9);

	std::cout << std::fixed<<std::setprecision(1) << weight;

	return 0;

}
//```