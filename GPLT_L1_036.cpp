﻿/*# **L1-036 A乘以B （5 point(s)）**
>Author: 陈越
>Organization: 浙江大学
>Time Limit: 400 ms
>Memory Limit: 64 MB
>Code Size Limit: 16 KB

看我没骗你吧 —— 这是一道你可以在 10 秒内完成的题：给定两个绝对值不超过 100 的整数 A 和 B，输出 A 乘以 B 的值。

## **输入格式：**
输入在第一行给出两个整数 A 和 B（−100≤A,B≤100），数字间以空格分隔。

## **输出格式：**
在一行中输出 A 乘以 B 的值。

## **输入样例：**
>-8 13

## **输出样例：**
>-104

## **代码**
```*/
#include<iostream>
int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << a * b;

	return 0;
}
//```