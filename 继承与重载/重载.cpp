
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

class point
{
public:
	int x=5;
	int y=5;
	void operator ++()
	{
		x++;
		y++;
	}
};
class huipoint :public point
{
public :
	int z = 10;
	void operator ++()
	{
		x++;
		y++;
		z++;
	}
};
int main1()
{
	//没有覆盖的请况下，父类的重载也可以继承
	//子类覆盖父类，hui1.point::operator++();调用
	huipoint hui1;
	cout << hui1.x << hui1.y << hui1.z << endl;
	++hui1;
	cout << hui1.x << hui1.y << hui1.z << endl;

	hui1.point::operator++();//hui1.point:: 只能调用对象成员或成员函数
	cout << hui1.x << hui1.y << hui1.z << endl;
	return 0;
}