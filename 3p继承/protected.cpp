
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class myclass
{
public:
	int x = 10;
	void go1()
	{

	}
private:
	int y = 20;
	void go2()
	{

	}
protected:
	int z = 30;
	void go3()
	{

	}
};

class mynewclass :protected myclass//保护继承可传承
{
	void test()
	{
		go1();
		//go2();
		go3();


	}
};

int main()
{



	return 0;
}