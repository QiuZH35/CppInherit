
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;

//�̳еı��ʣ�����һ�ݸ��࣬�����븸�����������า�Ǹ��࣬ǿ�е��ø��ָ࣬������������ڴ����
//�̳еı���ʵ���Ͼ��ǰ���

class A
{
public:
	int a=10;
	void show()
	{
		cout << "fu" << endl;
	}
};
class B :public A
{
public:
	int a = 20;
	void show()
	{
		cout << "zi" << endl;
	}
};

class C :public A, public B
{
public:
	int a = 30;
	void show()
	{
		cout << "za" << endl;
	}
};


int main11()
{
	C c1;
	cout << c1.a << endl;
	c1.show();
	c1.A::show();
	c1.B::show();
	c1.B::A::show();

	return 0;
}
int main23()
{
	B b1;
	cout << b1.a << endl;
	cout << b1.A::a << endl;
	b1.show();
	b1.A::show();


	return 0;
}