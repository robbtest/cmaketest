#include <iostream>
#include <string>
#include <typeinfo>

template<typename T = float, typename U = double>
void func1(T t1, U u1 = 2)
{
	std::cout << "func1: " << std::endl;
	std::cout << t1 << typeid(t1).name() << std::endl;
	std::cout << u1 << typeid(u1).name() << std::endl;
}

void func2(int t1)
{
	std::cout << "func2: " << t1 << typeid(t1).name() << std::endl;
}

class CFun
{
public:
	int Func1(int t1)
	{
		std::cout << "Func1: " << t1 << typeid(t1).name() << std::endl;
		return 0;
	}
};

int main(int argc, char** argv)
{
	func1(1);

	using F2 = void(*)(int);
	F2 f2 = &func2;
	f2(2);


	using CFF1 = int(CFun::*)(int);
	CFF1 cff1 = &CFun::Func1;
	CFun cf1;
	(cf1.*cff1)(3);

	return 0;
}
