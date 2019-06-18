#include <iostream>
#include <string>
#include <memory>
using namespace std;

class CSimply
{
public:
	CSimply()
	{
		std::cout << "CSimply create" << std::endl;
	}
	CSimply(const CSimply& c1)
	{
		std::cout << "CSimply copy create" << std::endl;
	}
	//CSimply& operator=(const CSimply& c1) = delete;
	CSimply& operator=(const CSimply& c1)
	{
		std::cout << "CSimply copy =" << std::endl;
		return *this;
	}
	CSimply& operator=(CSimply&& c1)
	{
		std::cout << "CSimply move =" << std::endl;
		return *this;
	}
	~CSimply()
	{
		std::cout << "CSimply destory" << std::endl;
	}
};

int main(int argc, char** argv)
{
	// 
	if (true)
	{
		std::unique_ptr<CSimply> uptrSimply;
		{
			uptrSimply = std::unique_ptr<CSimply>(new CSimply());
		}
	}
	// 
	if (true)
	{
		CSimply s1;
		{
			s1 = CSimply();
		}
	}
	if (true)
	{
		CSimply s1;
		{
			CSimply s2 = CSimply();
			s1 = s2;
		}
	}

	return 0;
}
