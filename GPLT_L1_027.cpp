/*# **L1-027 出租 （20 point(s)）**
>Author: 陈越
Organization: 浙江大学
Time Limit: 400 ms
Memory Limit: 64 MB
Code Size Limit: 16 KB

如图../resource/L1-027.jpeg

一时间网上一片求救声，急问这个怎么破。其实这段代码很简单，index数组就是arr数组的下标，index[0]=2 对应 arr[2]=1，index[1]=0 对应 arr[0]=8，index[2]=3 对应 arr[3]=0，以此类推…… 很容易得到电话号码是18013820100。
本题要求你编写一个程序，为任何一个电话号码生成这段代码 —— 事实上，只要生成最前面两行就可以了，后面内容是不变的。

## **输入格式：**
输入在一行中给出一个由11位数字组成的手机号码。

## **输出格式：**
为输入的号码生成代码的前两行，其中arr中的数字必须按递减顺序给出。

## **输入样例：**
>18013820100

## **输出样例：**
>int[] arr = new int[]{8,3,2,1,0};
int[] index = new int[]{3,0,4,3,1,0,2,4,3,4,4};

## **代码**
```*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>

int main()
{
	int tel[11], num[10] = {0};
	for (int i=0;i!=11;++i)
	{
		scanf("%1d", &tel[i]);
		num[tel[i]]++;
	}
	std::cout << "int[] arr = new int[]{";
	int n = 0;
	for (int i = 9; i != -1; --i)
	{
		if (num[i] != 0)
		{
			if (n == 0)
				std::cout << i;
			else
				std::cout << "," << i;
			n++;
		}
	}
		std::cout << "};"<<std::endl;
		
		std::cout << "int[] index = new int[]{";

		n = 0;
		for (int i = 0; i != 11; ++i)
		{
			int count = 0;
			for (int j = 9; j != -1; --j)
				if (num[j] != 0)
				{
					count++;
					if (tel[i] == j)
					{
						if (n == 0)
							std::cout << count-1;
						else
							std::cout << "," << count-1;
						n++;
						break;
					}

				}
		}
		std::cout << "};" << std::endl;		
		return 0;
}
//```