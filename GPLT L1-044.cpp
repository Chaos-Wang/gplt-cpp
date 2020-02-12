/*# **L1-044 稳赢 （15 point(s)）**
>Author: 陈越
>Organization: 浙江大学
>Time Limit: 400 ms
>Memory Limit: 64 MB
>Code Size Limit: 16 KB

现要求你编写一个稳赢不输的程序，根据对方的出招，给出对应的赢招。但是！为了不让对方输得太惨，你需要每隔K次就让一个平局。

## **输入格式：**
输入首先在第一行给出正整数K（≤10），即平局间隔的次数。随后每行给出对方的一次出招：ChuiZi代表“锤子”、JianDao代表“剪刀”、Bu代表“布”。End代表输入结束，这一行不要作为出招处理。

## **输出格式：**
对每一个输入的出招，按要求输出稳赢或平局的招式。每招占一行。

## **输入样例：**
>2
>ChuiZi
>JianDao
>Bu
>JianDao
>Bu
>ChuiZi
>ChuiZi
>End

## **输出样例：**
>Bu
>ChuiZi
>Bu
>ChuiZi
>JianDao
>ChuiZi
>Bu

## **代码**
```*/
#include<iostream>
#include<string>
int main44() 
{
	int n;
	std::cin >> n;

	std::string a;
	std::string b;

	while (1) 
	{
		std::cin >> b;
		if (b == "End")
			break;
		a += b;
	}

	int m = 1;
	for (int i = 0; i < a.size(); i++) 
	{
		if (a[i] == 'E')
			break;
		if (i == 0 || m % (n + 1) != 0)
			switch (a[i]) 
			{
			case 'C': std::cout << "Bu" << std::endl; m++; break;
			case 'J':std::cout << "ChuiZi" << std::endl; m++; break;
			case 'B':std::cout << "JianDao" << std::endl; m++; break;
			default:break;
			}
		else
			switch (a[i]) 
			{
			case 'C': std::cout << "ChuiZi" << std::endl; m++; break;
			case 'J':std::cout << "JianDao" << std::endl; m++; break;
			case 'B':std::cout << "Bu" << std::endl; m++; break;
			default:break;
			}
	}
	return 0;
}
//```