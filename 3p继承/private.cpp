
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

class mynewclass :private myclass
{
public:
	void test()
	{
		x = 1;
		//y = 2;error ˽��
		z = 3;

		go1();
		//go2();
		go3();
	}

};
class gogoclass :public mynewclass//˽�м̳к����Ա�޷��ٱ��̳�
{
public:
	void go()
	{
		//go1();error
	}
};
int main3()
{
	mynewclass my1;
	//my1.x;˽�м̳У��ⲿ�޷����ʡ�

	return 0;
}