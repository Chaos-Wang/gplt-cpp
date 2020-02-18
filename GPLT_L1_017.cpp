/*# ** L1-017 到底有多二 （15 分）**
>作者: 陈越
单位: 浙江大学
时间限制: 400 ms
内存限制: 64 MB
代码长度限制: 16 KB

一个整数“犯二的程度”定义为该数字中包含2的个数与其位数的比值。如果这个数是负数，则程度增加0.5倍；如果还是个偶数，则再增加1倍。例如数字-13142223336是个11位数，其中有3个2，并且是负数，也是偶数，则它的犯二程度计算为：3/11×1.5×2×100%，约为81.82%。本题就请你计算一个给定整数到底有多二。

## **输入格式：**
输入第一行给出一个不超过50位的整数N。

## **输出格式：**
输入第一行给出一个不超过50位的整数N。

## **输入样例：**
>-13142223336

## **输出样例：**
>81.82%

## **代码：**
```*/
#include<iostream>
#include<string>
#include<iomanip>
int main()
{
	std::string num;
	int n = 0,size; float a;

	getline(std::cin, num);
	for (auto i = num.begin(); i != num.end(); ++i)
		if (*i == '2')
			++n;

	if (num[0] == '-')
		size = num.size() - 1;
	else
		size = num.size();

	a = n / (float)size;

	if (num[0] == '-')
		a *= 1.5;
	if ((num[num.size() - 1] - '0') % 2 == 0 || (num[num.size() - 1] - '0' == 0))
		a *= 2;

	std::cout<<std::fixed<<std::setprecision(2)<< 100 * a << "%";

	return 0;
}
//```