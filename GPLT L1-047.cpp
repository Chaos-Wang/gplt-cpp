/*# **L1-047 装睡 （10 point(s)）**
>Author: 陈越
>Organization: 浙江大学
>Time Limit: 400 ms
>Memory Limit: 64 MB
>Code Size Limit: 16 KB

你永远叫不醒一个装睡的人 —— 但是通过分析一个人的呼吸频率和脉搏，你可以发现谁在装睡！医生告诉我们，正常人睡眠时的呼吸频率是每分钟15-20次，脉搏是每分钟50-70次。下面给定一系列人的呼吸频率与脉搏，请你找出他们中间有可能在装睡的人，即至少一项指标不在正常范围内的人。


## **输入格式：**
输入在第一行给出一个正整数N（≤10）。随后N行，每行给出一个人的名字（仅由英文字母组成的、长度不超过3个字符的串）、其呼吸频率和脉搏（均为不超过100的正整数）。

## **输出格式：**
按照输入顺序检查每个人，如果其至少一项指标不在正常范围内，则输出其名字，每个名字占一行。

## **输入样例：**
>4
>Amy 15 70
>Tom 14 60
>Joe 18 50
>Zoe 21 71

## **输出样例：**
>Tom
>Zoe

## **代码**
```*/
#include<iostream>
int main47() 
{
	typedef struct 
	{
		char name[3];
		int h;
		int m;
	}people;

	int n;
	std::cin >> n;
	people *p = new people[n];
	bool flag = true;
	for (int j = 0; j < n; ++j)
		std::cin >> p[j].name >> p[j].h >> p[j].m;
	for (int i = 0; i < n; ++i)
		if (p[i].h < 15 || p[i].h>20 || p[i].m < 50 || p[i].m>70)
			if (flag)
			{
				std::cout << p[i].name;
				flag = !flag;
			}
			else
			{
				std::cout << std::endl;
				std::cout << p[i].name;
			}

	return 0;
}
//```