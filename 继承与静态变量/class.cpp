
#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
using namespace std;

//父类的静态变量，被所有的父类对象，子类对象共享，用于统计一个家族的对象个数
//类（父类，子类）名直接访问，对象名（父类，子类）访问


//静态变量，公有，所有类对象以及派生类对象都可以访问
//静态变量，私有，类对象内部可以访问，需要设定公开接口，get set
//静态变量，保护，类对象以及派生类对象内部可以访问，外部必须设定接口
//静态变量的接口，原则都设定为静态函数，无需this指针，不依赖于一个对象

class myclass
{
public:
	static int num;//静态变量不计入类的体积
	myclass()
	{
		num += 1;
	}
	~myclass()
	{
		num -= 1;
	}
};
int myclass::num = 0;//静态变量

class mynewclass :public myclass
{

};

int main()
{
	myclass my1, my2;
	mynewclass mynew1, mynew2;
	cout << sizeof(myclass) << endl;//1
	cout << sizeof(mynewclass) << endl;//1
	cout << myclass::num << endl;
	cout << mynewclass::num << endl;
	cout << my1.num << endl;
	cout << mynew1.num << endl;

	return 0;
}