
#define _CRT_SECURE_NO_WARNINGS 
#include  <iostream>
using namespace std;

class myclass
{
public:
	int i = 10;
	void show()
	{
		cout << "myclass i "<<i  << endl;
	}


};
class mynewclass :public myclass
{
public:
	int i = 100;
	void show()
	{
		cout << "mynewclass i " << i << endl;

	}

};

//父类指针，父类对象、子类指针，子类对象没问题
//父类指针，子类对象没问题，（调用父类），可以实现异构数据结构
//子类指针，父类对象，崩溃或者读取垃圾数据
int main()
{
	myclass *p1 = new myclass;
	myclass *p2 = new mynewclass;//父类指针可以存放子类地址，异构数据结构
	mynewclass *p3 = new mynewclass;
	mynewclass *p4 =reinterpret_cast<mynewclass *> ( new myclass);//子类指针，父类对象

	p1->show();
	p2->show();
	p3->show();
	p4->show();

	return 0;
}