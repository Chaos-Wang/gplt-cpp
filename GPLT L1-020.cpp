/*# ** L1-020 帅到没朋友 （20 分）**
>作者: 陈越
单位: 浙江大学
时间限制: 200 ms
内存限制: 64 MB
代码长度限制: 16 KB

当芸芸众生忙着在朋友圈中发照片的时候，总有一些人因为太帅而没有朋友。本题就要求你找出那些帅到没有朋友的人。

## **输入格式：**
输入第一行给出一个正整数N（≤100），是已知朋友圈的个数；随后N行，每行首先给出一个正整数K（≤1000），为朋友圈中的人数，然后列出一个朋友圈内的所有人——为方便起见，每人对应一个ID号，为5位数字（从00000到99999），ID间以空格分隔；之后给出一个正整数M（≤10000），为待查询的人数；随后一行中列出M个待查询的ID，以空格分隔。

注意：没有朋友的人可以是根本没安装“朋友圈”，也可以是只有自己一个人在朋友圈的人。虽然有个别自恋狂会自己把自己反复加进朋友圈，但题目保证所有K超过1的朋友圈里都至少有2个不同的人。

## **输出格式：**
按输入的顺序输出那些帅到没朋友的人。ID间用1个空格分隔，行的首尾不得有多余空格。如果没有人太帅，则输出No one is handsome。

注意：同一个人可以被查询多次，但只输出一次。

## **输入样例：**
>3
3 11111 22222 55555
2 33333 44444
4 55555 66666 99999 77777
8
55555 44444 10000 88888 22222 11111 23333 88888

## **输出样例：**
>10000 88888 23333

## **代码：**
```*/
//使用set实现的裸并查集
#include<set>
#include<iostream>
#include<string>
int main20() 
{
	int n, k, m,flag=0;
	std::cin >> n;
	std::set<std::string> person, check_in;

	for (auto i = 0; i != n; ++i) 
	{
		std::cin >> k;
		std::string str;
		if (k > 1) 
		{
			for (auto j = 0; j !=k; ++j) 
			{
				std::cin >> str;
				person.insert(str);
			}
		}
		else 
		{
			std::cin >> str;
		}
	}
	std::cin >> m;

	for (auto i = 0; i !=m; ++i)
	{
		std::string str;
		std::cin >> str;
		if (person.find(str) == person.end() && check_in.find(str) == check_in.end()) 
		{
			check_in.insert(str);
			if (flag == 1)
				std::cout << " ";
			std::cout << str;
			flag = 1;
		}
	}
	if (flag == 0)
		std::cout << "No one is handsome";
	return 0;
}
/*```使用改进的暴力算法，时间复杂度降到n，可以AC
#include<iostream>
#include<iomanip>
#include<cstring>
int main() 
{
	int k,num,m, n, j = 0;
	bool person[100000][2] ;
	memset(person, true, sizeof(person));
		
	std::cin >> n;
	for (auto i = 0; i != n; i++)
	{
		std::cin >> k;

		if (k > 1)
			for (auto j = 0; j != k; j++)
			{
				std::cin >> num;
				person[num][0] = false;
			}
		else
			std::cin >> num;
	}

	std::cin >> m;
	for (auto i = 0; i != m; i++)
	{
		std::cin >> k;
		if (person[k][0] && person[k][1])
		{
			if (j != 0)
				std::cout << ' ' ;
			std::cout << std::setw(5) << std::setfill('0') << std::right << k;

			j++;
			person[k][1] = false;

		}
	}
	if (j == 0)
		std::cout << "No one is handsome";

	return 0;
}```*/
/*使用常规暴力算法，由于查找过程复杂度达n^3，故会有一个测试点超时
```
#include<iostream>
#include<list>
#include<algorithm>
#include<iomanip>
typedef struct 
{
	int size;
	int * member_id;

	void generate() 
	{
		std::cin >> size;
		member_id = new int[size];
		for (auto i = 0; i != size; i++)
			std::cin >> member_id[i];
	}
	bool search(int num)
	{
		for (auto x = 0; x != size; x++)
			if (num == member_id[x] && size != 1)
				return true;

		return false;
	}
}group;
int main()
{
	bool judge = true;
	int m, n, count = 0;
	group *groups;
	std::list<int> to_find;

	std::cin >> n;
	groups = new group[n];
	for (auto i = 0; i != n; i++)
		groups[i].generate();
	std::cin >> m;

	for (auto i = 0; i != m; i++)
	{
		int num;
		std::cin >> num;
		if (std::find(to_find.begin(), to_find.end(), num) == to_find.end())
			to_find.push_back(num);
	}


	for (auto i = to_find.begin(); i != to_find.end(); i++)
		for (auto j = 0; j != n; j++)
		{
			if (groups[j].search(*i))
			{
				count++;
				break;
			}
			if (j == n - 1)
			{
				if (judge)
				{
					std::cout << std::setw(5) << std::setfill('0') << std::right << *i;
					judge = false;
				}
				else
				{
					std::cout << " ";
					std::cout << std::setw(5) << std::setfill('0') << std::right << *i;
				}
			}

		}
	if (count == to_find.size())
		std::cout << "No one is handsome";

	return 0;
}
```
*/
//```