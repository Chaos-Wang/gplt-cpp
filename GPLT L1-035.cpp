/*# **L1-035 情人节 （15 point(s)）**
>Author: 陈越
Organization: 浙江大学
Time Limit: 400 ms
Memory Limit: 64 MB
Code Size Limit: 16 KB

以上是朋友圈中一奇葩贴：“2月14情人节了，我决定造福大家。第2个赞和第14个赞的，我介绍你俩认识…………咱三吃饭…你俩请…”。现给出此贴下点赞的朋友名单，请你找出那两位要请客的倒霉蛋。

## **输入格式：**
输入按照点赞的先后顺序给出不知道多少个点赞的人名，每个人名占一行，为不超过10个英文字母的非空单词，以回车结束。一个英文句点.标志输入的结束，这个符号不算在点赞名单里。

## **输出格式：**
根据点赞情况在一行中输出结论：若存在第2个人A和第14个人B，则输出“A and B are inviting you to dinner...”；若只有A没有B，则输出“A is the only one for you...”；若连A都没有，则输出“Momo... No one is for you ...”。

## **输入样例：**
>GaoXZh
Magi
Einst
Quark
LaoLao
FatMouse
ZhaShen
fantacy
latesum
SenSen
QuanQuan
whatever
whenever
Potaty
hahaha
.

## **输出样例：**
>Magi and Potaty are inviting you to dinner...

## **代码**
```*/
#include<iostream>
#include<vector>
#include<string>
int main35() 
{
	std::vector<std::string> name;
	std::string a;
	std::cin >> a;

	while (a[0] != '.') 
	{
		name.push_back(a);
		std::cin >> a;
	}
	if (name.size() < 2)
		std::cout<<"Momo... No one is for you ...";
	else if (name.size() >= 14) 
	{
		for (int i = 0; i != name[1].size(); ++i)
			std::cout << name[1][i];
		std::cout << " and ";
		for (int i = 0; i != name[13].size(); ++i)
			std::cout << name[13][i];
		std::cout << " are inviting you to dinner...";
	}
	else 
	{
		for (int i = 0; i != name[1].size(); ++i)
			std::cout << name[1][i];
		std::cout<<" is the only one for you...";
	}
	return 0;
}
//```