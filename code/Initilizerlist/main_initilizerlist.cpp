
#include <iostream>
#include <string>
using namespace std;

class CVar
{
public:
	CVar(const char* sz)
	{
		m_str = sz;
	}
	CVar(string sz)
	{
		m_str = sz;
	}
	CVar(int i)
	{
		m_i = i;
	}
public:
	string m_str;
	int    m_i;
};
//
class CInitclass
{
public:
	friend ostream& operator<<(ostream& os, CInitclass& c);
	friend istream& operator>>(istream& is, CInitclass& c);

public:
	//CInitclass(initializer_list<CVar> initlist)
	//{
	//	for (auto& it : initlist)
	//	{
	//		if (m_szDescription.empty())
	//		{
	//			m_szDescription = it.m_str;
	//		}
	//		else
	//		{
	//			m_iValue = it.m_i;
	//		}
	//	}
	//};
	//CInitclass() = default;
	CInitclass(string szString, int iInt)
	{
		m_szDescription = szString;
		m_iValue = 19;
	}
	string m_szDescription;

private:
	int    m_iValue;
};

// CInitclass <<
ostream& operator<<(ostream& os, CInitclass& c)
{
	os << "Description: " << c.m_szDescription << " " << c.m_iValue;
	return os;
}
istream& operator>>(istream& is, CInitclass& c)
{
	is >> c.m_szDescription;
	return is;
}

// start execute
int main(int argc, char** argv)
{
	CInitclass c1{ "first initlizer list class ", 23 };
	std::cout << c1 << std::endl;
	std::cin >> c1;
	std::cout << c1 << std::endl;

	return 0;
}
