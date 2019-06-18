#include <iostream>
#include <string>
#include <typeinfo>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <functional>

enum pic_fmt { png = 0, jpg, bmp };

//bool operator>(const std::pair<const char*, pic_fmt>& pair1, const std::pair<const char*, pic_fmt>& pair2)
//{
//	return (pair1.second > pair2.second);
//}
//bool operator==(const std::pair<const char*, pic_fmt>& pair1, const std::pair<const char*, pic_fmt>& pair2)
//{
//	return (pair1.second == pair2.second);
//}

bool cmp(std::pair<std::string, pic_fmt> pair1, std::pair<std::string, pic_fmt> pair2)
{
	return (pair1.second > pair2.second);
}

int main(int argc, char** argv)
{
	/* initlizer_list container*/
	// initlizer_list   auto
	auto c1 = { "aaa", "bbb", "ccc" };
	for (auto& it : c1)
	{
		std::cout << it << std::endl;
	}
	// initlizer_list   for(:)
	for (auto& it : { "aaa", "bbb", "ccc" })
	{
		std::cout << typeid(it).name() << "" << it << std::endl;
	}
	// initlizer_list   typeid{}
	auto szInitList = { "aaa", "bbb", "ccc" };
	std::cout << typeid(szInitList).name() << std::endl;
	// initlizer_list   pair
	//enum pic_fmt { png = 0, jpg, bmp };
	std::initializer_list<std::pair<std::string, pic_fmt>> pairInitList =
	{
		std::make_pair("png", png),
		std::make_pair("jpg", jpg),
		std::make_pair("bmp", bmp)
	};
	for (auto& it : pairInitList)
	{
		if ("bmp" == std::string(it.first))
		{
			std::cout << it.second << std::endl;
		}
	}
	//std::sort(pairInitList.begin(), pairInitList.end(), [](const std::pair<const char*, pic_fmt>& pair1, const std::pair<const char*, pic_fmt>& pair2)->bool
	//{
	//	return (pair1.second > pair2.second);
	//});

	//std::sort(pairInitList.begin(), pairInitList.end(), cmp);
	for (auto& it : pairInitList)
	{
		std::cout << it.first << " - " << it.second << std::endl;
	}

	/* string container*/
	// string   for(:)
	for (auto& it : std::string("Container test !"))
	{
		//std::cout << typeid(it).name() << " " << it << std::endl;
	}

	/*  container*/
	std::vector<std::string> vecStr = { "aaa", "bbb", "ccc" };
	std::deque<std::string>  deqStr = { "aaa", "bbb", "ccc" };
	std::list<std::string>   lisStr = { "aaa", "bbb", "ccc" };

	std::stack<std::string>({ "aaa", "bbb", "ccc" });

	std::vector<std::string> szVecStr = { "aaa", "bbb", "ccc", "ddd" };
	std::cout << typeid(szVecStr).name() << std::endl;
	std::sort(szVecStr.begin(), szVecStr.end(), std::greater<std::string>());
	for (auto& it : szVecStr)
	{
		std::cout << it << " ";
	}
	std::cout << std::endl;

	return 0;
}
