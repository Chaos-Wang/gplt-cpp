/* # **L1-003 个位数统计 （15 point(s)**
>题文位于 ./source/L1-003.jpg
*/
#include<iostream>
#include<string>
int main3() 
{
	int nums[10] = {0};
	std::string num;
	std::getline(std::cin, num);

	for (int n = 0; n != num.size(); ++n)
		nums[num[n] - '0']++;

	for (int n = 0; n != 10; ++n)
		if (nums[n] != 0)
			std::cout << n << ":" << nums[n] << std::endl;
	return 0;
}
//```