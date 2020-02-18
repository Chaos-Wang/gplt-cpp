/*# **L1-042 日期格式化 （5 point(s)）**
>Author: 陈越
>Organization: 浙江大学
>Time Limit: 400 ms
>Memory Limit: 64 MB
>Code Size Limit: 16 KB

世界上不同国家有不同的写日期的习惯。比如美国人习惯写成“月-日-年”，而中国人习惯写成“年-月-日”。下面请你写个程序，自动把读入的美国格式的日期改写成中国习惯的日期。

## **输入格式：**
输入在一行中按照“mm-dd-yyyy”的格式给出月、日、年。题目保证给出的日期是1900年元旦至今合法的日期。

## **输出格式：**
在一行中按照“yyyy-mm-dd”的格式给出年、月、日。

## **输入样例：**
>03-15-2017

## **输出样例：**
>2017-03-15

## **代码**
```*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
int main()
{
	int m, d, y;

	scanf("%d-%d-%d", &m, &d, &y);

	printf("%d-%02d-%02d", y, m, d);

	return 0;
}
//```