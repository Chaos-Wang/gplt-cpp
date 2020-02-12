/*# **L1-025 正整数A+B （15 point(s)）**
>Author: 陈越
Organization: 浙江大学
Time Limit: 400 ms
Memory Limit: 64 MB
Code Size Limit: 16 KB

题的目标很简单，就是求两个正整数A和B的和，其中A和B都在区间[1,1000]。稍微有点麻烦的是，输入并不保证是两个正整数。


## **输入格式：**
输入在一行给出A和B，其间以空格分开。问题是A和B不一定是满足要求的正整数，有时候可能是超出范围的数字、负数、带小数点的实数、甚至是一堆乱码。
注意：我们把输入中出现的第1个空格认为是A和B的分隔。题目保证至少存在一个空格，并且B不是一个空字符串。

## **输出格式：**
如果输入的确是两个正整数，则按格式A + B = 和输出。如果某个输入不合要求，则在相应位置输出?，显然此时和也是?。

## **输入样例：**
>123 456

## **输出样例：**
>123 + 456 = 579

## **代码**
```*/
#include<iostream>
#include<string>
#include<sstream>

typedef struct
{
public:
	std::string many_char;
	std::stringstream switch_stream;
	bool is_num = true;
	int number = 0;


	bool isNum()
	{
		for (auto i = many_char.begin(); i != many_char.end(); ++i)
		{
			if (!((*i - '0') >= 0 && (*i - '0') <= 9))
			{
				is_num = false;
				break;
			}
		}
		return is_num;

	};


	int switcher()
	{
		if (is_num)
		{
			switch_stream << many_char;
			switch_stream >> number;
		}
		return number;
	};

}number;
int main25()
{
	number *A = new number;
	number *B = new number;
	std::string typein;
	getline(std::cin, typein);
	for (auto i = 0; i != typein.size(); ++i)
		if (typein[i] == ' ')
		{
			A->many_char = typein.substr(0, i);
			B->many_char = typein.substr(i+1);
			break;
		}



	A->isNum();
	B->isNum();

	if (A->is_num&&A->switcher() >= 1 && A->switcher() <= 1000)
		std::cout << A->many_char;
	else
		std::cout << "?";
	std::cout << " + ";
	if (B->is_num&&B->switcher() >= 1 && B->switcher() <= 1000)
		std::cout << B->many_char;
	else
		std::cout << "?";
	std::cout << " = ";
	if (A->is_num&&B->is_num&&A->switcher() >= 1 && A->switcher() <= 1000 && B->switcher() >= 1 && B->switcher() <= 1000)
		std::cout << A->switcher() + B->switcher();
	else
		std::cout << "?";

	return 0;
}
//```