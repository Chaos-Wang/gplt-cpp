﻿/*# ** L1-016 查验身份证 （15 分）**
>作者: 陈越
单位: 浙江大学
时间限制: 400 ms
内存限制: 64 MB
代码长度限制: 16 KB

一个合法的身份证号码由17位地区、日期编号和顺序编号加1位校验码组成。校验码的计算规则如下：

首先对前17位数字加权求和，权重分配为：{7，9，10，5，8，4，2，1，6，3，7，9，10，5，8，4，2}；然后将计算的和对11取模得到值Z；最后按照以下关系对应Z值与校验码M的值：
>Z：0 1 2 3 4 5 6 7 8 9 10
M：1 0 X 9 8 7 6 5 4 3 2

现在给定一些身份证号码，请你验证校验码的有效性，并输出有问题的号码。

## **输入格式：**
输入第一行给出正整数N（≤100）是输入的身份证号码的个数。随后N行，每行给出1个18位身份证号码。

## **输出格式：**
按照输入的顺序每行输出1个有问题的身份证号码。这里并不检验前17位是否合理，只检查前17位是否全为数字且最后1位校验码计算准确。如果所有号码都正常，则输出All passed。

## **输入样例：**
>4
320124198808240056
12010X198901011234
110108196711301866
37070419881216001X

## **输出样例：**
>12010X198901011234
110108196711301866
37070419881216001X

## **代码：**
```*/
#include <iostream>
#include <string>
bool judge(std::string id) 
{
	int sum = 0,id_num[18];	
	int weight[17] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
	int m[11] = { 1, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2 };



	for (int i = 0; i != 17; ++i)
		id_num[i] = id[i] - '0';
	if (id[17] == 'X')
		id_num[17] = 10;
	else
		id_num[17] = id[17] - '0';

	for (int i = 0; i != 17; ++i)
		sum = sum + id_num[i] * weight[i];
	sum = sum % 11;

	if (m[sum] != id_num[17]) 
	{
		for (int i = 0; i != 17; ++i)
			std::cout << id[i];
		if (id_num[17] != 10)
			std::cout << id_num[17] << std::endl;
		else
			std::cout << "X" << std::endl;
		return true;
	}
	return false;
};

int main16() {
	int n,count = 0;
	std::cin >> n;
	for (int i = 0; i != n; ++i) {
		std::string id;
		std::cin >> id;
		if (judge(id)) 
			++count;
	}
	if (count == 0)
		std::cout << "All passed";
	return 0;
}

//```