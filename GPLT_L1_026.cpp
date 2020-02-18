/*# **L1-026 I Love GPLT （5 point(s)）**
>Author: 陈越
Organization: 浙江大学
Time Limit: 400 ms
Memory Limit: 64 MB
Code Size Limit: 16 KB

这道超级简单的题目没有任何输入。
你只需要把这句很重要的话 —— “I Love GPLT”——竖着输出就可以了。
所谓“竖着输出”，是指每个字符占一行（包括空格），即每行只能有1个字符和回车。

## **输出样例：**
>I

L
o
v
e

G
P
L
T

## **代码**
```*/

#include<iostream>
#include<string>
int main()
{
	std::string a = "I Love GPLT";
	for (auto i = a.begin(); i != a.end(); ++i)
		std::cout << *i << std::endl;

	return 0;
}
//```