/*# ** L1-007 念数字 （10 point(s)）**
>Author: 翁恺
Organization: 浙江大学
Time Limit: 400 ms
Memory Limit: 64 MB
Code Size Limit: 16 KB

输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出fu字。十个数字对应的拼音如下：>0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu

## **输入格式：**
输入在一行中给出一个整数，如：1234。
提示：整数包括负数、零和正数。

## **输出格式：**
在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如 yi er san si。


## **输入样例：**
>-600

## **输出样例：**
>fu liu ling ling


## **代码**
```*/
#include<iostream>
#include<string>
int main()
{
	std::string num;
	std::getline(std::cin, num);
	for (int i = 0; i != num.size(); ++i)
	{
		switch (num[i])
		{
		case '-':std::cout << "fu"; break;
		case '0':std::cout << "ling"; break;
		case '1':std::cout << "yi"; break;
		case '2':std::cout << "er"; break;
		case '3':std::cout << "san"; break;
		case '4':std::cout << "si"; break;
		case '5':std::cout << "wu"; break;
		case '6':std::cout << "liu"; break;
		case '7':std::cout << "qi"; break;
		case '8':std::cout << "ba"; break;
		case '9':std::cout << "jiu"; break;
		}
		if (i != num.size() - 1)
			std::cout << " ";
	}
	return 0;
}
//```