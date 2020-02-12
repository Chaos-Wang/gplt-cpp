/*# ** L1-006 连续因子 （20 point(s)）**
>Author: 陈越
Organization: 浙江大学
Time Limit: 400 ms
Memory Limit: 64 MB
Code Size Limit: 16 KB

一个正整数 N 的因子中可能存在若干连续的数字。例如 630 可以分解为 3×5×6×7，其中 5、6、7 就是 3 个连续的数字。给定任一正整数 N，要求编写程序求出最长连续因子的个数，并输出最小的连续因子序列。

## 输入格式：**
输入在一行中给出一个正整数 N（1<N<2^31)。

## 输出格式：**
首先在第 1 行输出最长连续因子的个数；然后在第 2 行中按 因子1*因子2*……*因子k 的格式输出最小的连续因子序列，其中因子按递增顺序输出，1 不算在内。

## **输入样例**
>630

## **输出样例：**
>3
5*6*7

## **代码**
```*/
#include<iostream>
#include<cmath>

int main6() 
{
	int n;
	std::cin >> n;

	int max = std::sqrt(n);

	for (int len = 12; len > 0; --len) 
	{
		for (int start = 2; start <= max; ++start) 
		{
			long long int ans = 1;
			for (int i = start; i - start <= len - 1; ++i) 
			{
				ans *= i;
			}								
			if (n % ans == 0) 
			{
				std::cout << len << std::endl;
				std::cout << start;
				for (int i = start + 1; i - start <= len - 1; ++i) 
				{
					std:: cout << "*" << i;
				}
				return 0;
			}
		}
	}
	std::cout << "1" << std::endl;
	std::cout << n;
	return 0;
}
//```