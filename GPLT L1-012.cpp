﻿/*# ** L1-012 计算指数 （5 分）**
>作者: 陈越
单位: 浙江大学
时间限制: 400 ms
内存限制: 64 MB
代码长度限制: 16 KB

真的没骗你，这道才是简单题 —— 对任意给定的不超过 10 的正整数 n，要求你输出 2^n​​ 。不难吧？

## **输入格式：**
输入在一行中给出一个不超过 10 的正整数 n。

## **输出格式：**
在一行中按照格式 2^n = 计算结果 输出 2^​n​的值。

## **输入样例：**
>5

## **输出样例：**
>2^5 = 32

## **代码：**
```*/
#include<iostream>
int main12() 
{
	int num = 1;
	int n;

	std::cin >> n;	
	for (int i = 0; i != n; ++i)
		num *= 2;
	std::cout << "2^" << n << " = " << num;
	return 0;
}
//```