/*# **L1-022 奇偶分家 （10 point(s)）**
>Author: 陈越
Organization: 浙江大学
Time Limit: 400 ms
Memory Limit: 64 MB
Code Size Limit: 16 KB

给定N个正整数，请统计奇数和偶数各有多少个？

## **输入格式：**
输入第一行给出一个正整N（≤1000）；第2行给出N个正整数，以空格分隔。

## **输出格式：**
在一行中先后输出奇数的个数、偶数的个数。中间以1个空格分隔。

## **输入样例：**
>9
88 74 101 26 15 0 34 22 77

## **输出样例：**
>3 6

## **代码**
```*/
#include<iostream>
int main22()
{
	int n, num;
	int num_odd = 0, num_even = 0;

	std::cin >> n;
	for (int i = 0; i != n; ++i)
	{
		std::cin >> num;
		if (num % 2 == 0)
			num_even++;
		else
			num_odd++;
	}

	std::cout << num_odd << " " << num_even << std::endl;

	return 0;
}
//```