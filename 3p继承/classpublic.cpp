
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
class mynewclass :public myclass
{
public:
	void show()
	{
		go1();
		//go2();error 私有
		go3();
		cout << z << endl;
	}

};
class mynewclass1 :public mynewclass
{
public:
	void test()
	{
		go1();
		//go2();error
		go3();
	}
};
//公有继承，私有无法访问，公有成员仍然公有，保护成员仍然保护。（内部可以，外部不可以）

//可传承式继承，public protected

//私有式继承，private，公有，保护都会变成私有。 用于阻断

//保护继承，protected ，

//不论那种方式继承，派生类都无法直接使用基类的私有成员。
int main1()
{
	mynewclass mynew1;
	cout << mynew1.x << endl;
	mynew1.show();
	mynewclass1 my1;
	my1.go1();

	return 0;
}