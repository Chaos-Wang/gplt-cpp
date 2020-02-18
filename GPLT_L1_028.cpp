/*# **L1-028 判断素数 （10 point(s)）**
>Author: 陈越
Organization: 浙江大学
Time Limit: 400 ms
Memory Limit: 64 MB
Code Size Limit: 16 KB

本题的目标很简单，就是判断一个给定的正整数是否素数。

## **输入格式：**
输入在第一行给出一个正整数N（≤ 10），随后N行，每行给出一个小于2^31的需要判断的正整数。

## **输出格式：**
对每个需要判断的正整数，如果它是素数，则在一行中输出Yes，否则输出No。

## **输入样例：**
>2
11
111

## **输出样例：**
>Yes
No

## **代码**
```*/
#include<iostream>
#include<cmath>
bool isPrime(int num)
{
	if (num == 2 || num == 3)
		return 1;
	if ((num % 6 != 1 && num % 6 != 5) || num == 1)
		return 0;
	int tmp = sqrt(num);
	for (int i = 5; i <= tmp; i += 6)
		if (num %i == 0 || num % (i + 2) == 0)
			return 0;
	return 1;
}
int main()
{
	int n;
	int num[10];

	std::cin >> n;
	for (int i = 0; i < n; ++i)
		std::cin >> num[i];
	for (int i = 0; i < n; ++i) 
	{
		if (isPrime(num[i]))
			std::cout << "Yes" << std::endl;
		else
			std::cout << "No" << std::endl;
	}
	return 0;
}//```