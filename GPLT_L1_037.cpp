/*# **L1-037 A除以B （10 point(s)）**
>Author: 陈越
>Organization: 浙江大学
>Time Limit: 400 ms
>Memory Limit: 64 MB
>Code Size Limit: 16 KB

真的是简单题哈 —— 给定两个绝对值不超过100的整数A和B，要求你按照“A/B=商”的格式输出结果。


## **输入格式：**
输入在第一行给出两个整数A和B（−100≤A,B≤100），数字间以空格分隔。

## **输出格式：**
在一行中输出结果：如果分母是正数，则输出“A/B=商”；如果分母是负数，则要用括号把分母括起来输出；如果分母为零，则输出的商应为Error。输出的商应保留小数点后2位。

## **输入样例：**
>-1 2

## **输出样例：**
>-1/2=-0.50

## **代码**
```*/
#include<iostream>
#include<iomanip>
int main()
{
	int a, b;
	std::cin >> a >> b;
	if (b < 0)
		std::cout << a << "/(" << b << ")=" << std::fixed << std::setprecision(2) << (float)a / b;
	else if (b == 0)
		std::cout << a << "/" << b << "=Error";
	else
		std::cout << a << "/" << b << "=" << std::fixed << std::setprecision(2) << (float)a / b;

	return 0;
}

//```