/*# **L1-048 矩阵A乘以B （15 point(s)）**
>Author: 陈越
>Organization: 浙江大学
>Time Limit: 400 ms
>Memory Limit: 64 MB
>Code Size Limit: 16 KB

给定两个矩阵A和B，要求你计算它们的乘积矩阵AB。需要注意的是，只有规模匹配的矩阵才可以相乘。即若A有Ra​行、C​a​列，B有R​b​行、C​b​​列，则只有C​a​​与R​b相等时，两个矩阵才能相乘。

## **输入格式：**
输入先后给出两个矩阵A和B。对于每个矩阵，首先在一行中给出其行数R和列数C，随后R行，每行给出C个整数，以1个空格分隔，且行首尾没有多余的空格。输入保证两个矩阵的R和C都是正数，并且所有整数的绝对值不超过100。

## **输出格式：**
若输入的两个矩阵的规模是匹配的，则按照输入的格式输出乘积矩阵AB，否则输出Error: Ca != Rb，其中Ca是A的列数，Rb是B的行数。

## **输入样例：**
>2 3
>1 2 3
>4 5 6
>3 4
>7 8 9 0
>-1 -2 -3 -4
>5 6 7 8

## **输出样例：**
>2 4
>20 22 24 16
>53 58 63 28

## **代码**
```*/
#include<iostream>
#include<cstring>
int ** matrix(int x, int y)
{
	int **a = new int *[x];
	for (int i = 0; i < x; ++i)
		a[i] = new int[y];
	return a;
}
int main()
{
	int ax, ay, bx, by;
	
	std::cin >> ax>>ay;
	int **a = matrix(ax,ay);
	for (int i = 0; i != ax; ++i)
		for (int j = 0; j != ay; ++j)
			std::cin >> a[i][j];

	std::cin >> bx >> by;
	int **b = matrix(bx, by);
	for (int i = 0; i != bx; ++i)
		for (int j = 0; j != by; ++j)
			std::cin >> b[i][j];

	if (ay != bx)
		std::cout << "Error: " << ay << " != " << bx;
	else
	{
		std::cout << ax << ' ' << by<<std::endl;
		int **c = matrix(ax,by);
		for (int i = 0; i != ax; ++i)
		{
			for (int j = 0; j != by; ++j)
			{
				c[i][j] = 0;
				for (int x = 0; x != ay; ++x)
					c[i][j] += a[i][x] * b[x][j];
				std::cout << c[i][j];
				if(j!=by-1)
					std::cout <<' ';
			}
			std::cout << std::endl;
		}
	}
	return 0;
}
//```