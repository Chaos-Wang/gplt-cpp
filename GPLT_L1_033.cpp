/*# **L1-033 出生年 （15 point(s)）**
>Author: 陈越
Organization: 浙江大学
Time Limit: 400 ms
Memory Limit: 64 MB
Code Size Limit: 16 KB

以上是新浪微博中一奇葩贴：“我出生于1988年，直到25岁才遇到4个数字都不相同的年份。”也就是说，直到2013年才达到“4个数字都不相同”的要求。本题请你根据要求，自动填充“我出生于y年，直到x岁才遇到n个数字都不相同的年份”这句话。

## **输入格式：**
输入在一行中给出出生年份y和目标年份中不同数字的个数n，其中y在[1, 3000]之间，n可以是2、或3、或4。注意不足4位的年份要在前面补零，例如公元1年被认为是0001年，有2个不同的数字0和1。

## **输出格式：**
根据输入，输出x和能达到要求的年份。数字间以1个空格分隔，行首尾不得有多余空格。年份要按4位输出。注意：所谓“n个数字都不相同”是指不同的数字正好是n个。如“2013”被视为满足“4位数字都不同”的条件，但不被视为满足2位或3位数字不同的条件。

## **输入样例：**
>1988 4

## **输出样例：**
>25 2013

## **代码**
```*/
#include<iostream>
#include<iomanip>
#include<string>
#include<sstream>
int main()
{
	int start_year,year, n;
	std::string year_b;
	std::stringstream stream;

	std::cin >> start_year >> n;
	year = start_year;
	while (1)
	{
		int counts,count[10] = { 0 };
		counts = 0;
		stream << std::setw(4) << std::setfill('0') << year;
		stream >> year_b;
		stream.clear();
		for (auto i = year_b.begin();i!= year_b.end(); ++i)
			count[*i - '0']++;
		for (int i = 9; i != -1; --i)
		{
			if (count[i] != 0)
				counts++;
		}
		if (counts == n)
			break;
		else
			++year;
	}

	std::cout << year - start_year << " " << year_b;
	return 0;

}
//```