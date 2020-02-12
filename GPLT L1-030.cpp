﻿/*# **L1-030 一帮一 （15 point(s)）**
>Author: 陈越
Organization: 浙江大学
Time Limit: 400 ms
Memory Limit: 64 MB
Code Size Limit: 16 KB

“一帮一学习小组”是中小学中常见的学习组织方式，老师把学习成绩靠前的学生跟学习成绩靠后的学生排在一组。本题就请你编写程序帮助老师自动完成这个分配工作，即在得到全班学生的排名后，在当前尚未分组的学生中，将名次最靠前的学生与名次最靠后的异性学生分为一组。

## **输入格式：**
输入第一行给出正偶数N（≤50），即全班学生的人数。此后N行，按照名次从高到低的顺序给出每个学生的性别（0代表女生，1代表男生）和姓名（不超过8个英文字母的非空字符串），其间以1个空格分隔。这里保证本班男女比例是1:1，并且没有并列名次。

## **输出格式：**
每行输出一组两个学生的姓名，其间以1个空格分隔。名次高的学生在前，名次低的学生在后。小组的输出顺序按照前面学生的名次从高到低排列。

## **输入样例：**
>8
0 Amy
1 Tom
1 Bill
0 Cindy
0 Maya
1 John
1 Jack
0 Linda

## **输出样例：**
>Amy Jack
Tom Linda
Bill Maya
Cindy John

## **代码**
```*/
#include<string>
#include<iostream>

int main30()
{
	typedef struct
	{
		std::string name;
		int sex;
		int level;
		bool flag = false;
	}student;
	int n;
	int recent_sex;
	std::cin >> n;
	student * students = new student[n];

	for (int i = 0; i != n;++i)
	{
		std::cin >> students[i].sex;
		std::cin >> students[i].name;
		students[i].level = i;
	}
	for (int i = 0; i != n; ++i)
	{
		if (students[i].flag)
			continue;
		recent_sex = students[i].sex;
		for (int j = n - 1; j != -1; --j)
		{
			if (students[j].flag)
				continue;
			if (students[j].sex != recent_sex)
			{
				std::cout << students[i].name << " " << students[j].name << std::endl;
				students[i].flag = true;
				students[j].flag = true;
				break;
			}
		}
	}
	return 0;
}
//```