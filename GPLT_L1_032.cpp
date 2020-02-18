/*# **L1-032 Left-pad （20 point(s)）**
>Author: 陈越
Organization: 浙江大学
Time Limit: 400 ms
Memory Limit: 64 MB
Code Size Limit: 16 KB

根据新浪微博上的消息，有一位开发者不满NPM（Node Package Manager）的做法，收回了自己的开源代码，其中包括一个叫left-pad的模块，就是这个模块把javascript里面的React/Babel干瘫痪了。这是个什么样的模块？就是在字符串前填充一些东西到一定的长度。例如用*去填充字符串GPLT，使之长度为10，调用left-pad的结果就应该是******GPLT。Node社区曾经对left-pad紧急发布了一个替代，被严重吐槽。下面就请你来实现一下这个模块。

## **输入格式：**
输入在第一行给出一个正整数N（≤10^4）和一个字符，分别是填充结果字符串的长度和用于填充的字符，中间以1个空格分开。第二行给出原始的非空字符串，以回车结束。

## **输出格式：**
在一行中输出结果字符串。

## **输入样例：**
>15 _
I love GPLT

## **输出样例：**
>____I love GPLT

## **代码**
```*/
#include<iostream>
#include<string>

int main()
{
	int n; char char_s;
	std::cin >> n >> char_s;
	getchar();
	std::string line;
	std::getline(std::cin, line);

	if(n>=line.size())
	{
		std::string plus(n-line.size(),char_s);
		line = plus + line;
	}
	else
		line.erase(line.begin(), line.begin() + (line.size()-n));

	std::cout << line;
	return 0;
}
//```