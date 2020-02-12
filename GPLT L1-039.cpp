/*# **L1-039 古风排版 （20 point(s)）**
>Author: 陈越
>Organization: 浙江大学
>Time Limit: 400 ms
>Memory Limit: 64 MB
>Code Size Limit: 16 KB

中国的古人写文字，是从右向左竖向排版的。本题就请你编写程序，把一段文字按古风排版。

## **输入格式：**
输入在第一行给出一个正整数N（<100），是每一列的字符数。第二行给出一个长度不超过1000的非空字符串，以回车结束。

## **输出格式：**
按古风格式排版给定的字符串，每列N个字符（除了最后一列可能不足N个）。

## **输入样例：**
>4
>This is a test case

## **输出样例：**
>asa T
>st ih
>e tsi
> ce s

## **代码**
```*/
#include<iostream>
#include<string>
int main39() 
{
	std::string word;
	int n;
	std::cin >> n;
	getchar();
	getline(std::cin, word);

	while (word.size() % n != 0)
		word.push_back(' ');

	for (int i = n - 1; i >= 0; --i) 
	{
		if (i != n - 1)
			std::cout << std::endl;
		for (int j = word.size() - (i + 1); j >= 0; j -= n)
			std::cout << word[j];
	}

	return 0;

}
//```