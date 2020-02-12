/*## ** L1-021 重要的话说三遍 （5 分）**
>作者: 陈越
单位: 浙江大学
时间限制: 400 ms
内存限制: 64 MB
代码长度限制: 16 KB

这道超级简单的题目没有任何输入。

你只需要把这句很重要的话 —— “I'm gonna WIN!”——连续输出三遍就可以了。

注意每遍占一行，除了每行的回车不能有任何多余字符。

## **输入样例：**
>无

## **输出样例：**
>I'm gonna WIN!
I'm gonna WIN!
I'm gonna WIN!

## **代码：**
```*/
#include<iostream>
int  main21()
{
	int i = 3;
	while (i != 0)
	{
		std::cout << "I'm gonna WIN!" << std::endl;
		i--;
	}
	return 0;
}
//```