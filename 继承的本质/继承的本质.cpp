
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;

//继承的本质，拷贝一份父类，子类与父类重名，子类覆盖父类，强行调用父类，指定拷贝父类的内存调用
//继承的本质实际上就是包含

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