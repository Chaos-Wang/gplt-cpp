﻿/*# **L1-043 阅览室 （20 point(s)）**
>Author: 陈越
>Organization: 浙江大学
>Time Limit: 400 ms
>Memory Limit: 64 MB
>Code Size Limit: 16 KB

天梯图书阅览室请你编写一个简单的图书借阅统计程序。当读者借书时，管理员输入书号并按下S键，程序开始计时；当读者还书时，管理员输入书号并按下E键，程序结束计时。书号为不超过1000的正整数。当管理员将0作为书号输入时，表示一天工作结束，你的程序应输出当天的读者借书次数和平均阅读时间。
注意：由于线路偶尔会有故障，可能出现不完整的纪录，即只有S没有E，或者只有E没有S的纪录，系统应能自动忽略这种无效纪录。另外，题目保证书号是书的唯一标识，同一本书在任何时间区间内只可能被一位读者借阅。

## **输入格式：**
入在第一行给出一个正整数N（≤10），随后给出N天的纪录。每天的纪录由若干次借阅操作组成，每次操作占一行，格式为：
书号（[1, 1000]内的整数） 键值（S或E） 发生时间（hh:mm，其中hh是[0,23]内的整数，mm是[0, 59]内整数）
每一天的纪录保证按时间递增的顺序给出。

## **输出格式：**
对每天的纪录，在一行中输出当天的读者借书次数和平均阅读时间（以分钟为单位的精确到个位的整数时间）。

## **输入样例：**
>3
>1 S 08:10
>2 S 08:35
>1 E 10:00
>2 E 13:16
>0 S 17:00
>0 S 17:00
>3 E 08:10
>1 S 08:20
>2 S 09:00
>1 E 09:20
>0 E 17:00

## **输出样例：**
>2 196
>0 0
>1 60

## **代码**
```*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
typedef struct
{
	char bookMode='E';
	int timex=0;
	int time=0;
	int times = 0;

	int caltime(int h,int m)
	{
		return h * 60 + m;
	}
	void calc(char mode, int h, int m)
	{
		if (mode == 'E'&&bookMode == 'S')
		{
			++times;
			time += (caltime(h, m) - timex);
			bookMode = mode;
		}
		else if (mode == 'E'&&bookMode == 'E')
			return;
		else
		{
			timex = caltime(h, m);
			bookMode = mode;
		}
	}
	void reset()
	{
		bookMode = 'E';
		timex = 0;
		time = 0;
		times = 0;
	}
}book;
typedef struct
{
	int times = 0;  //次数
	int time = 0;	//总时间
	int ave=0;

}day;
int main()
{
	int n,status,h,m;
	char mode;
	std::cin >> n;
	day *library = new day[n];
	book books[1001];

	for (int i = 0; i != n; ++i) 
	{
		while (1)
		{
			scanf("%d %c %2d:%2d", &status, &mode, &h, &m);
			if (status == 0)
			{
				for (int j = 1; j != 1001; ++j)
				{
					if (books[j].times != 0)
					{
						library[i].times += books[j].times;
						library[i].time += books[j].time;
					}
					books[j].reset();
				}
				if(library[i].times!=0)
					library[i].ave = (float)library[i].time / library[i].times+0.5;
				break;
			}
			else
				books[status].calc(mode, h, m);
		}
	}

	for (int i = 0; i != n; i++)
		std::cout << library[i].times<<' '<< library[i].ave << std::endl;
	
	return 0;
}
//```