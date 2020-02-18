/* # **L1 - 002 打印沙漏 （20 分）**
>作者: 陈越
单位: PAT联盟
时间限制: 400ms
内存限制: 64MB
代码长度限制: 16KB

本题要求你写个程序把给定的符号打印成沙漏的形状。例如给定17个“*”，要求按下列格式打印
> &ensp;\*\*\*\*\*
&ensp;&ensp;\*\*\*
&ensp;&ensp;&ensp;\*
&ensp;&ensp;\*\*\*
&ensp;\*\*\*\*\*

所谓“沙漏形状”，是指每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。
给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。

## **输入格式 :**
>输入在一行给出1个正整数N（≤1000）和一个符号，中间以空格分隔。

## **输出格式 :**
>首先打印出由给定符号组成的最大的沙漏形状，最后在一行中输出剩下没用掉的符号数。

## **输入样例 :**
>19 *

## **输出样例 :**

> &ensp;\*\*\*\*\*
&ensp;&ensp;\*\*\*
    &ensp;&ensp;&ensp;\*
    &ensp;&ensp;\*\*\*
    &ensp;\*\*\*\*\*
2

## **代码：**
	```*/
#include <iostream>
int main()
{
    int num_of_chars,num_of_char_left,num_of_char_n;
    char char_to_show;
    int num_of_line_behind;

	std::cin >> num_of_chars >> char_to_show;

    for(auto n=0;n!=23&&num_of_chars>=2*n*n-1;++n)      //当n=23时总输出符号大于1000
        num_of_line_behind=n;

    num_of_char_left=num_of_chars-2*num_of_line_behind*num_of_line_behind+1;        //剩下的打印不出的符号
    num_of_char_n=2*num_of_line_behind-1;       //第一行（最后一行）的字符数目

    // 打印沙漏的上半部分
    for(auto show_char=num_of_char_n,show_block=0;show_char>0;show_char-=2,++show_block)
    {
        for(auto n=show_block;n!=0;--n)
            std::cout<<" ";
        for(auto n=show_char;n!=0;--n)
            std::cout<<char_to_show;
        std::cout<<std::endl;
    }

    //打印沙漏的下半部分
    for(auto show_char=3,show_block=(num_of_char_n-3)/2;show_char<num_of_char_n+1;show_char+=2,--show_block)
    {
        for(auto n=show_block;n!=0;--n)
            std::cout<<" ";
        for(auto n=show_char;n!=0;--n)
            std::cout<<char_to_show;
        std::cout<<std::endl;
    }
    //打印
	if (num_of_char_left >= 0&&num_of_chars!=0)
		std::cout << num_of_char_left;
	else
		std::cout << "0";
    return 0;
}
//```