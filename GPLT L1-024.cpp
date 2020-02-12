﻿/*# **L1-024 后天 （5 point(s)）**
>Author: 陈越
Organization: 浙江大学
Time Limit: 400 ms
Memory Limit: 64 MB
Code Size Limit: 16 KB

如果今天是星期三，后天就是星期五；如果今天是星期六，后天就是星期一。我们用数字1到7对应星期一到星期日。给定某一天，请你输出那天的“后天”是星期几。


## **输入格式：**
输入第一行给出一个正整数D（1 ≤ D ≤ 7），代表星期里的某一天。

## **输出格式：**
在一行中输出D天的后天是星期几。

## **输入样例：**
>3

## **输出样例：**
>5

## **代码**
```*/
#include<iostream>
int main24()
{
	int day[7] = { 1,2,3,4,5,6,7 };

	int today;
	int *ptr = day;

	std::cin >> today;
	for (int n = 0; n != today - 1; ++ptr, ++n);

	for (int n = 0; n != 2; ++n)
	{
		if (ptr == &day[6])
		{
			ptr = day; continue;
		}
		++ptr;
	}

	std::cout << *ptr;
	return 0;
}
//```