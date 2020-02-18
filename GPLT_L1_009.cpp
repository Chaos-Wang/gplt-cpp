/*# ** L1-009 N个数求和 （20 分）**
>作者: 陈越
单位: 浙江大学
时间限制: 400 ms
内存限制: 64 MB
代码长度限制: 16 KB

本题的要求很简单，就是求N个数字的和。麻烦的是，这些数字是以有理数分子/分母的形式给出的，你输出的和也必须是有理数的形式。

## **输入格式：**
输入第一行给出一个正整数N（≤100）。随后一行按格式a1/b1 a2/b2 ...给出N个有理数。题目保证所有分子和分母都在长整型范围内。另外，负数的符号一定出现在分子前面。

## **输出格式：**
输出上述数字和的最简形式 —— 即将结果写成整数部分 分数部分，其中分数部分写成分子/分母，要求分子小于分母，且它们没有公因子。如果结果的整数部分为0，则只输出分数部分。

## **输入样例：**
>5
2/5 4/15 1/30 -2/60 8/3

## **输出样例：**
>3 1/3

## **代码：**

```*/

#include<iostream>
#include<string>
class num
{
public:
	bool f = false;//表示分数的符号
	int z = 0;
	int m = 1;

	void division()
	{
		for (int i = 2; z >= i; ++i)
			if (z%i == 0 && m%i == 0)
			{
				z /= i;
				m /= i;
				i--;
			}
	};//约分
	void plus(class num b)
	{
		if (!f || !b.f)
		{
			if (!f)
				z = -z;
			if (!b.f)
				b.z = -b.z;
		}//统一符号
		z = b.m*z + m * b.z;
		m = b.m*m;
		if (z > 0)
			f = true;
		else
			z = -z;
		division();
	}; //将本数与另外一个数相加
	void input() 
	{
		int a;
		std::cin >> a;
		if (!(a < 0))
			f = true;

		z = abs(a);
		std::getchar();
		std::cin >> m;
		division();
	}//输入分数
	void output() 
	{
		if (!f)
			std::cout << "-";
		//带分数
		if (z > m&&z%m != 0)
			std::cout << z / m << " " << z - m * (z / m) << "/" << m;
		//为整数
		else if (z%m == 0)
			std::cout << z / m;
		else
			std::cout << z << "/" << m;

	}
};



int main()
{

	num sum;
	num *nums;
	int n;

	std::cin >> n;
	nums = new num[n];

	for (int i = 0; i != n; ++i)
	{
		nums[i].input();
		sum.plus(nums[i]);
	}

	sum.output();
	delete[] nums;

	return 0;

}

//```