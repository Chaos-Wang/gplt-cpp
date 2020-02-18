﻿/*# ** L1-008 求整数段和 （10 分）**
>作者: 杨起帆
单位: 浙江大学城市学院
时间限制: 400 ms
内存限制: 64 MB
代码长度限制: 16 KB


给定两个整数A和B，输出从A到B的所有整数以及这些数的和。



## **输入格式：**
输入在一行中给出2个整数A和B，其中−100≤A≤B≤100，其间以空格分隔。

## **输出格式：**
首先顺序输出从A到B的所有整数，每5个数字占一行，每个数字占5个字符宽度，向右对齐。最后在一行中按Sum = X的格式输出全部数字的和X。

## **输入样例：**
>-3 8


## **输出样例：**
>   -3   -2   -1    0    1
    2    3    4    5    6
    7    8
Sum = 30

## **代码：**
```*/
#include<iostream>
#include<iomanip>
int main()
{
	int  a, b, sum = 0;
	std::cin >> a >> b;
	for (auto i = a, j = 1; i <= b; ++i, ++j) 
	{
		std::cout << std::setw(5) << std::setfill(' ') << i;
		if (j % 5 == 0 || j == b - a + 1)
			std::cout << std:: endl;
	}

	for (int n = a; n <= b; ++n)
		sum += n;
	std::cout << "Sum = " << sum;
	return 0;
}
//```